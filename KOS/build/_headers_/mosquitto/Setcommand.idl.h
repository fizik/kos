#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __mosquitto__Setcommand__INTERFACE__
#define __mosquitto__Setcommand__INTERFACE__
enum {
    mosquitto_Setcommand_Setcommand_mid,
    mosquitto_Setcommand_mid_max,
};
enum {
    mosquitto_Setcommand_Setcommand_req_arena_size =
    0,
    mosquitto_Setcommand_Setcommand_res_arena_size =
    0,
    mosquitto_Setcommand_Setcommand_req_handles =
    0,
    mosquitto_Setcommand_Setcommand_res_handles =
    0,
    mosquitto_Setcommand_Setcommand_err_handles =
    0,
    mosquitto_Setcommand_req_arena_size = 0,
    mosquitto_Setcommand_res_arena_size = 0,
    mosquitto_Setcommand_arena_size = 0,
    mosquitto_Setcommand_req_handles = 0,
    mosquitto_Setcommand_res_handles = 0,
    mosquitto_Setcommand_err_handles = 0,
};
typedef struct __nk_packed mosquitto_Setcommand_Setcommand_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t value;
        } mosquitto_Setcommand_Setcommand_req;
#pragma pack(push, 8) /* mosquitto_Setcommand_Setcommand_res */
typedef struct mosquitto_Setcommand_Setcommand_err {
            __nk_alignas(8)
            struct nk_message base_;
        } mosquitto_Setcommand_Setcommand_err;
typedef struct mosquitto_Setcommand_Setcommand_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                } res_;
                struct mosquitto_Setcommand_Setcommand_err err_;
            };
        } mosquitto_Setcommand_Setcommand_res;
#pragma pack(pop) /* mosquitto_Setcommand_Setcommand_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Setcommand_Setcommand_mid mosquitto_Setcommand_Setcommand_mid
#define Setcommand_mid_max mosquitto_Setcommand_mid_max
#define Setcommand_Setcommand_req_arena_size mosquitto_Setcommand_Setcommand_req_arena_size
#define Setcommand_Setcommand_res_arena_size mosquitto_Setcommand_Setcommand_res_arena_size
#define Setcommand_Setcommand_req_handles mosquitto_Setcommand_Setcommand_req_handles
#define Setcommand_Setcommand_res_handles mosquitto_Setcommand_Setcommand_res_handles
#define Setcommand_Setcommand_err_handles mosquitto_Setcommand_Setcommand_err_handles
#define Setcommand_req_arena_size mosquitto_Setcommand_req_arena_size
#define Setcommand_res_arena_size mosquitto_Setcommand_res_arena_size
#define Setcommand_arena_size mosquitto_Setcommand_arena_size
#define Setcommand_req_handles mosquitto_Setcommand_req_handles
#define Setcommand_res_handles mosquitto_Setcommand_res_handles
#define Setcommand_err_handles mosquitto_Setcommand_err_handles
#define Setcommand_Setcommand_req mosquitto_Setcommand_Setcommand_req
#define Setcommand_Setcommand_res mosquitto_Setcommand_Setcommand_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__INTERFACE__ */

#ifndef __mosquitto__Setcommand__VTABLE__
#define __mosquitto__Setcommand__VTABLE__
typedef struct mosquitto_Setcommand {
            const
            struct mosquitto_Setcommand_ops *ops;
        } mosquitto_Setcommand;
typedef nk_err_t
mosquitto_Setcommand_Setcommand_fn(struct mosquitto_Setcommand *,
                                   const
                                   struct mosquitto_Setcommand_Setcommand_req *,
                                   const
                                   struct nk_arena *,
                                   struct mosquitto_Setcommand_Setcommand_res *,
                                   struct nk_arena *);
typedef struct mosquitto_Setcommand_ops {
            mosquitto_Setcommand_Setcommand_fn *Setcommand;
        } mosquitto_Setcommand_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Setcommand_Setcommand_fn mosquitto_Setcommand_Setcommand_fn
#define Setcommand_ops mosquitto_Setcommand_ops
#define Setcommand mosquitto_Setcommand
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__VTABLE__ */

#ifndef __mosquitto__Setcommand__CLIENT__
#define __mosquitto__Setcommand__CLIENT__
typedef struct mosquitto_Setcommand_proxy {
            struct mosquitto_Setcommand base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } mosquitto_Setcommand_proxy;
static inline
nk_err_t mosquitto_Setcommand_Setcommand_proxy(struct mosquitto_Setcommand_proxy *self,
                                               struct mosquitto_Setcommand_Setcommand_req *req,
                                               const
                                               struct nk_arena *req_arena,
                                               struct mosquitto_Setcommand_Setcommand_res *res,
                                               struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         mosquitto_Setcommand_Setcommand_mid);
    nk_msg_set_ncaps(req,
                     mosquitto_Setcommand_Setcommand_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         mosquitto_Setcommand_Setcommand_mid);
    nk_msg_set_ncaps(res,
                     mosquitto_Setcommand_Setcommand_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void mosquitto_Setcommand_proxy_init(struct mosquitto_Setcommand_proxy *self,
                                     struct nk_transport *transport,
                                     nk_iid_t iid)
{
    static const struct mosquitto_Setcommand_ops
    ops =
    {(mosquitto_Setcommand_Setcommand_fn *) &mosquitto_Setcommand_Setcommand_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t mosquitto_Setcommand_Setcommand(struct mosquitto_Setcommand *self,
                                         struct mosquitto_Setcommand_Setcommand_req *req,
                                         const
                                         struct nk_arena *req_arena,
                                         struct mosquitto_Setcommand_Setcommand_res *res,
                                         struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->Setcommand != NK_NULL);
    return self->ops->Setcommand(self, req,
                                 req_arena, res,
                                 res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Setcommand_Setcommand_proxy mosquitto_Setcommand_Setcommand_proxy
#define Setcommand_Setcommand mosquitto_Setcommand_Setcommand
#define Setcommand_proxy mosquitto_Setcommand_proxy
#define Setcommand_proxy_init mosquitto_Setcommand_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__CLIENT__ */

#ifndef __mosquitto__Setcommand__SERVER__
#define __mosquitto__Setcommand__SERVER__
typedef union mosquitto_Setcommand_req {
            struct nk_message base_;
            struct mosquitto_Setcommand_Setcommand_req Setcommand;
        } mosquitto_Setcommand_req;
typedef union mosquitto_Setcommand_res {
            struct nk_message base_;
            struct mosquitto_Setcommand_Setcommand_res Setcommand;
        } mosquitto_Setcommand_res;
static inline
nk_err_t mosquitto_Setcommand_interface_dispatch(struct mosquitto_Setcommand *impl,
                                                 nk_iid_t iid,
                                                 const
                                                 struct nk_message *req,
                                                 const
                                                 struct nk_arena *req_arena,
                                                 struct nk_message *res,
                                                 struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case mosquitto_Setcommand_Setcommand_mid:
            {
                struct mosquitto_Setcommand_Setcommand_res
                *res_ =
                (struct mosquitto_Setcommand_Setcommand_res *) res;
                
                rc = impl->ops->Setcommand(impl,
                                           (const
                                            struct mosquitto_Setcommand_Setcommand_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     mosquitto_Setcommand_Setcommand_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Setcommand_req mosquitto_Setcommand_req
#define Setcommand_res mosquitto_Setcommand_res
#define Setcommand_interface_dispatch mosquitto_Setcommand_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__SERVER__ */

#ifndef __mosquitto__Setcommand__TESTS__
#define __mosquitto__Setcommand__TESTS__
static inline
nk_err_t mosquitto_Setcommand_Setcommand_test_req(struct mosquitto_Setcommand_Setcommand_req *msg,
                                                  struct nk_arena *arena,
                                                  int (*rand)(void),
                                                  nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->value = (nk_uint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t mosquitto_Setcommand_Setcommand_test_res(struct mosquitto_Setcommand_Setcommand_res *msg,
                                                  struct nk_arena *arena,
                                                  int (*rand)(void),
                                                  nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
static inline
nk_err_t mosquitto_Setcommand_Setcommand_test_err(struct mosquitto_Setcommand_Setcommand_err *msg,
                                                  struct nk_arena *arena,
                                                  int (*rand)(void),
                                                  nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
#endif /* __mosquitto__Setcommand__TESTS__ */

#pragma GCC diagnostic pop

