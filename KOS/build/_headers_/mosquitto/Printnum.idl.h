#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __mosquitto__Printnum__INTERFACE__
#define __mosquitto__Printnum__INTERFACE__
enum {
    mosquitto_Printnum_Printnum_mid,
    mosquitto_Printnum_mid_max,
};
enum {
    mosquitto_Printnum_Printnum_req_arena_size =
    0,
    mosquitto_Printnum_Printnum_res_arena_size =
    0,
    mosquitto_Printnum_Printnum_req_handles = 0,
    mosquitto_Printnum_Printnum_res_handles = 0,
    mosquitto_Printnum_Printnum_err_handles = 0,
    mosquitto_Printnum_req_arena_size = 0,
    mosquitto_Printnum_res_arena_size = 0,
    mosquitto_Printnum_arena_size = 0,
    mosquitto_Printnum_req_handles = 0,
    mosquitto_Printnum_res_handles = 0,
    mosquitto_Printnum_err_handles = 0,
};
typedef struct __nk_packed mosquitto_Printnum_Printnum_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t value;
        } mosquitto_Printnum_Printnum_req;
#pragma pack(push, 8) /* mosquitto_Printnum_Printnum_res */
typedef struct mosquitto_Printnum_Printnum_err {
            __nk_alignas(8)
            struct nk_message base_;
        } mosquitto_Printnum_Printnum_err;
typedef struct mosquitto_Printnum_Printnum_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                } res_;
                struct mosquitto_Printnum_Printnum_err err_;
            };
        } mosquitto_Printnum_Printnum_res;
#pragma pack(pop) /* mosquitto_Printnum_Printnum_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Printnum_Printnum_mid mosquitto_Printnum_Printnum_mid
#define Printnum_mid_max mosquitto_Printnum_mid_max
#define Printnum_Printnum_req_arena_size mosquitto_Printnum_Printnum_req_arena_size
#define Printnum_Printnum_res_arena_size mosquitto_Printnum_Printnum_res_arena_size
#define Printnum_Printnum_req_handles mosquitto_Printnum_Printnum_req_handles
#define Printnum_Printnum_res_handles mosquitto_Printnum_Printnum_res_handles
#define Printnum_Printnum_err_handles mosquitto_Printnum_Printnum_err_handles
#define Printnum_req_arena_size mosquitto_Printnum_req_arena_size
#define Printnum_res_arena_size mosquitto_Printnum_res_arena_size
#define Printnum_arena_size mosquitto_Printnum_arena_size
#define Printnum_req_handles mosquitto_Printnum_req_handles
#define Printnum_res_handles mosquitto_Printnum_res_handles
#define Printnum_err_handles mosquitto_Printnum_err_handles
#define Printnum_Printnum_req mosquitto_Printnum_Printnum_req
#define Printnum_Printnum_res mosquitto_Printnum_Printnum_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__INTERFACE__ */

#ifndef __mosquitto__Printnum__VTABLE__
#define __mosquitto__Printnum__VTABLE__
typedef struct mosquitto_Printnum {
            const
            struct mosquitto_Printnum_ops *ops;
        } mosquitto_Printnum;
typedef nk_err_t
mosquitto_Printnum_Printnum_fn(struct mosquitto_Printnum *,
                               const
                               struct mosquitto_Printnum_Printnum_req *,
                               const
                               struct nk_arena *,
                               struct mosquitto_Printnum_Printnum_res *,
                               struct nk_arena *);
typedef struct mosquitto_Printnum_ops {
            mosquitto_Printnum_Printnum_fn *Printnum;
        } mosquitto_Printnum_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Printnum_Printnum_fn mosquitto_Printnum_Printnum_fn
#define Printnum_ops mosquitto_Printnum_ops
#define Printnum mosquitto_Printnum
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__VTABLE__ */

#ifndef __mosquitto__Printnum__CLIENT__
#define __mosquitto__Printnum__CLIENT__
typedef struct mosquitto_Printnum_proxy {
            struct mosquitto_Printnum base;
            struct nk_transport *transport;
            nk_iid_t iid;
        } mosquitto_Printnum_proxy;
static inline
nk_err_t mosquitto_Printnum_Printnum_proxy(struct mosquitto_Printnum_proxy *self,
                                           struct mosquitto_Printnum_Printnum_req *req,
                                           const
                                           struct nk_arena *req_arena,
                                           struct mosquitto_Printnum_Printnum_res *res,
                                           struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         mosquitto_Printnum_Printnum_mid);
    nk_msg_set_ncaps(req,
                     mosquitto_Printnum_Printnum_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         mosquitto_Printnum_Printnum_mid);
    nk_msg_set_ncaps(res,
                     mosquitto_Printnum_Printnum_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void mosquitto_Printnum_proxy_init(struct mosquitto_Printnum_proxy *self,
                                   struct nk_transport *transport,
                                   nk_iid_t iid)
{
    static const struct mosquitto_Printnum_ops ops
                                               =
                                               {(mosquitto_Printnum_Printnum_fn *) &mosquitto_Printnum_Printnum_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t mosquitto_Printnum_Printnum(struct mosquitto_Printnum *self,
                                     struct mosquitto_Printnum_Printnum_req *req,
                                     const
                                     struct nk_arena *req_arena,
                                     struct mosquitto_Printnum_Printnum_res *res,
                                     struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->Printnum != NK_NULL);
    return self->ops->Printnum(self, req,
                               req_arena, res,
                               res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Printnum_Printnum_proxy mosquitto_Printnum_Printnum_proxy
#define Printnum_Printnum mosquitto_Printnum_Printnum
#define Printnum_proxy mosquitto_Printnum_proxy
#define Printnum_proxy_init mosquitto_Printnum_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__CLIENT__ */

#ifndef __mosquitto__Printnum__SERVER__
#define __mosquitto__Printnum__SERVER__
typedef union mosquitto_Printnum_req {
            struct nk_message base_;
            struct mosquitto_Printnum_Printnum_req Printnum;
        } mosquitto_Printnum_req;
typedef union mosquitto_Printnum_res {
            struct nk_message base_;
            struct mosquitto_Printnum_Printnum_res Printnum;
        } mosquitto_Printnum_res;
static inline
nk_err_t mosquitto_Printnum_interface_dispatch(struct mosquitto_Printnum *impl,
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
            
          case mosquitto_Printnum_Printnum_mid:
            {
                struct mosquitto_Printnum_Printnum_res
                *res_ =
                (struct mosquitto_Printnum_Printnum_res *) res;
                
                rc = impl->ops->Printnum(impl,
                                         (const
                                          struct mosquitto_Printnum_Printnum_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     mosquitto_Printnum_Printnum_res_handles);
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
#define Printnum_req mosquitto_Printnum_req
#define Printnum_res mosquitto_Printnum_res
#define Printnum_interface_dispatch mosquitto_Printnum_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__SERVER__ */

#ifndef __mosquitto__Printnum__TESTS__
#define __mosquitto__Printnum__TESTS__
static inline
nk_err_t mosquitto_Printnum_Printnum_test_req(struct mosquitto_Printnum_Printnum_req *msg,
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
nk_err_t mosquitto_Printnum_Printnum_test_res(struct mosquitto_Printnum_Printnum_res *msg,
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
nk_err_t mosquitto_Printnum_Printnum_test_err(struct mosquitto_Printnum_Printnum_err *msg,
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
#endif /* __mosquitto__Printnum__TESTS__ */

#pragma GCC diagnostic pop

