typedef float fptype; // or double

enum ECmd { ec_none, ec_stop, ec_forward, ec_back, ec_left, ec_right, ec_auto };

enum ECmdType { ct_MQcmd, ct_MQmove, ct_MQroute };

struct MQcmd {
  ECmd cmd;
  MQcmd(ECmd _cmd) : cmd(_cmd){};
};

struct MQmove : MQcmd {
  fptype val;
  MQmove(ECmd _cmd, fptype _val) : MQcmd(_cmd), val(_val){};
};

struct MQcoord {
  int id;
  fptype x;
  fptype y;
  MQcoord(int _id, fptype _x, fptype _y) : id(_id), x(_x), y(_y){};
};

struct MQroute : public MQcmd {
  MQcoord *markers_screen;
  MQcoord *markers_floor;
  MQcoord *targets_screen;
  MQcoord robot_screen;

  int markers_screen_len;
  int markers_floor_len;
  int targets_screen_len;

  MQroute(ECmd _cmd, MQcoord *ms, MQcoord *mf, MQcoord *ts, MQcoord &rs,
          int msl, int mfl, int tsl)
      : MQcmd(_cmd), markers_screen(ms), markers_floor(mf), targets_screen(ts),
        robot_screen(rs), markers_screen_len(msl), markers_floor_len(mfl),
        targets_screen_len(tsl){};
};
