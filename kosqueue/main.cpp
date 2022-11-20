#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

#include "debug_str.h"
#include "queue.h"

#include "json.hpp"
using json = nlohmann::json;

#define itemof(a) (sizeof(a) / sizeof(*(a)))

struct aToECmdDic {
  ECmd eCmd;
  const char *aCmd;
} eDic[] = {
    {ec_stop, "stop"}, {ec_forward, "forward"}, {ec_back, "back"},
    {ec_left, "left"}, {ec_right, "right"},     {ec_auto, "auto"},
    {ec_none, "none"},
    // {, ""},
};

ECmd aToECmd(const char *cmd) {
  for (auto dicEnt : eDic)
    if (strcmp(cmd, dicEnt.aCmd) == 0)
      return (dicEnt.eCmd);

  return (ec_none);
}

const char *eCmdToA(ECmd ecmd) {
  for (auto dicEnt : eDic)
    if (ecmd == dicEnt.eCmd)
      return (dicEnt.aCmd);
  return ("N/A");
}

MQcmd *receiveDebugCmd(int n, MQcmd **buff) {
  free(*buff);
  switch (n) {
  case 0:
    return (*buff = new MQmove{ec_forward, 5.0});
  case 1:
    return (*buff = new MQmove{ec_back, 5.0});
  case 2:
    return (*buff = new MQmove{ec_left, 5.0});
  case 3:
    return (*buff = new MQmove{ec_right, 5.0});
  case 4:
    return (*buff = new MQcmd{ec_stop});
  case 5:
    MQcoord ms[] = {{0, 1.0, 2.0},
                    {1, 1.0, 2.0},
                    {2, 1.0, 2.0},
                    {3, 1.0, 2.0},
                    {4, 1.0, 2.0}};
    MQcoord mf[] = {{0, 1.0, 2.0},
                    {1, 1.0, 2.0},
                    {2, 1.0, 2.0},
                    {3, 1.0, 2.0},
                    {4, 1.0, 2.0}};
    MQcoord ts[] = {{0, 1.0, 2.0}, {1, 1.0, 2.0}, {2, 1.0, 2.0}, {3, 1.0, 2.0}};
    MQcoord rs = {0, 1.0, 2.0};
    return (*buff = new MQroute{ec_auto, ms, mf, ts, rs, itemof(ms), itemof(mf),
                                itemof(ts)});
  }
  return (*buff = NULL);
}

//! alloc memory
MQcmd *receiveDebugCmd(int n) {
  MQcmd *buff = NULL;
  return (receiveDebugCmd(n, &buff));
}

struct MQcmdt {
  int cmd;
  int cmd2;
};

namespace sc = std::chrono;

typedef long Ttime;

Ttime millis() {
  auto time = sc::system_clock::now(); // get the current time

  auto since_epoch = time.time_since_epoch(); // get the duration since epoch

  // I don't know what system_clock returns
  // I think it's uint64_t nanoseconds since epoch
  // Either way this duration_cast will do the right thing
  auto millis = sc::duration_cast<sc::milliseconds>(since_epoch);
  // just like java (new Date()).getTime();
  unsigned long now = millis.count();
  return (now);
}

ECmdType getCmdType(const char *cmd) {
  if (strcmp(cmd, "stop") == 0)
    return ct_MQcmd;
  else if (strcmp(cmd, "auto") == 0)
    return ct_MQroute;
  else
    return ct_MQmove;
}

void changeState(ECmd cmd) {
  long t =  millis();
  cout << eCmdToA(cmd) << "(" << cmd << ") " << " " << t<<"\n";// << ((t%100000)/1000.0)
}

//#define Debuglines

#ifdef Debuglines
#define DBGL
#else
#define DBGL if(0)
#endif

const char *receiveJson(int n) {
  const char *jsonStream[] = {
  cmdsStr[0],cmdsStr[1],cmdsStr[2],cmdsStr[3],cmdsStr[4],cmdsStr[5]
//
  // queueStr,   NULL,       NULL,       NULL,       NULL,       NULL,
  //     NULL,       NULL,       NULL,       cmdsStr[0], NULL,       NULL,
  //     cmdsStr[1], NULL,       NULL,       NULL,       NULL,       NULL,
  //     NULL,       cmdsStr[4], cmdsStr[0], NULL,       cmdsStr[1], NULL,
  //     cmdsStr[2], cmdsStr[3], NULL,       NULL,       cmdsStr[4]
  
  };

  if(n < itemof(jsonStream))
    return(jsonStream[n]);
  else
    return NULL;
  //return (jsonStream[n % itemof(jsonStream)]);
}

int main() {
  int n = 0;
  const char *rJson;
  long long lastBotCoord = 0;
  fptype lastBotX = 0.0, lastBotY = 0.0;
  Ttime nextCmdTime = 0, curTime = 0;

  // long nowms = millis();
  // cout << millis << "\n";
  // cout << since_epoch << "\n";
  // cout << time << "\n";
  // cout << nowms << "\n";
  queue <const char *> jstack;

  while (1) {
    DBGL     cerr << __LINE__ << "\n";
    if ((rJson = receiveJson(n++)) != NULL) {
      jstack.push(rJson);
      //cout <<"add: "<< rJson << "\n";
    }
    DBGL     cerr << __LINE__ << "\n";
    curTime = millis();
    //cerr << curTime << "\n";
    DBGL     cerr << __LINE__ << "\n";
    if (curTime >= nextCmdTime){
      if (!jstack.empty()) {
        DBGL     cerr << __LINE__ << "\n";
        const char *curEnt = jstack.front();//top
        DBGL     cerr << __LINE__ << "\n";
        DBGL cerr << (long)curEnt << "\n";
        DBGL     cerr << __LINE__ << "\n";
        auto jMsg = json::parse(curEnt);
        DBGL     cerr << __LINE__ << "\n";
        auto curCmd = jMsg["cmd"];
        DBGL     cerr << __LINE__ << "\n";
        if (curCmd.empty()) {
          cerr << "cmd NULL\n";
          cerr << curEnt<< "\n";
          cerr << jMsg<< "\n";
          continue;
        }

        //cerr <<"got "<< jMsg << "\n";
        const char *scurCmd = curCmd.get<std::string>().c_str();
        DBGL    cerr << __LINE__ << "\n";
        // cerr << scurCmd << "\n";
        ECmdType ct = getCmdType(scurCmd);
        DBGL     cerr << __LINE__ << "\n";
        if (ct == ct_MQcmd || ct == ct_MQmove) {
          DBGL      cerr << __LINE__ << "\n";
          changeState(aToECmd(scurCmd));
          DBGL     cerr << __LINE__ << "\n";
          if (ct == ct_MQmove) {
            auto curVal = jMsg["val"];
            if (curVal.empty()) {
              cerr << "val NULL \n";
              continue;
            }
            //cout << "val "<< curVal<< " \n";
            DBGL cerr << __LINE__ << "\n";
            nextCmdTime =
                curTime + int(atof(curVal.get<std::string>().c_str()) * 1000);
            DBGL cerr << __LINE__ << "\n";
          }
        }
        jstack.pop();
      } else if (nextCmdTime) {
        DBGL  cerr << __LINE__ << "\n";
        changeState(ec_stop);
        nextCmdTime = 0;
        break;
        cout << "End" << "\n";
      }
    }
  }
  // stack<MQcmd *> st;
  // MQcmd *tptr=NULL;
  // int c=0;

  //  while(tptr=receiveDebugCmd(c++))
  //    st.push(tptr);

  //  while (!st.empty()) {
  // 	cout << eCmdToA(st.top()->cmd) << "\n";
  // 	st.pop();
  // };

  return 0;
}