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

#ifndef __mosquitto__Showapp__COMPONENT_ENDPOINTS__
#define __mosquitto__Showapp__COMPONENT_ENDPOINTS__
enum {
    mosquitto_Showapp_Showapp_printnum_iid,
    mosquitto_Showapp_iidMax,
};
enum {
    mosquitto_Showapp_iidOffset = 0,
    mosquitto_Showapp_Showapp_iidOffset = 0,
};
enum {
    mosquitto_Showapp_securityIidMax,
};
enum {
    mosquitto_Showapp_component_req_arena_size =
    0,
    mosquitto_Showapp_component_res_arena_size =
    0,
    mosquitto_Showapp_component_arena_size = 0,
    mosquitto_Showapp_component_req_handles = 0,
    mosquitto_Showapp_component_res_handles = 0,
    mosquitto_Showapp_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Showapp_Showapp_printnum_iid mosquitto_Showapp_Showapp_printnum_iid
#define Showapp_iidMax mosquitto_Showapp_iidMax
#define Showapp_iidOffset mosquitto_Showapp_iidOffset
#define Showapp_Showapp_iidOffset mosquitto_Showapp_Showapp_iidOffset
#define Showapp_securityIidMax mosquitto_Showapp_securityIidMax
#define Showapp_component_req_arena_size mosquitto_Showapp_component_req_arena_size
#define Showapp_component_res_arena_size mosquitto_Showapp_component_res_arena_size
#define Showapp_component_arena_size mosquitto_Showapp_component_arena_size
#define Showapp_component_req_handles mosquitto_Showapp_component_req_handles
#define Showapp_component_res_handles mosquitto_Showapp_component_res_handles
#define Showapp_component_err_handles mosquitto_Showapp_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Showapp__COMPONENT_ENDPOINTS__ */

#ifndef __mosquitto__Printnum__COMPONENT_ENDPOINTS__
#define __mosquitto__Printnum__COMPONENT_ENDPOINTS__
enum {
    mosquitto_Printnum_printnum_iid,
    mosquitto_Printnum_iidMax,
};
enum {
    mosquitto_Printnum_iidOffset = 0,
};
enum {
    mosquitto_Printnum_securityIidMax,
};
enum {
    mosquitto_Printnum_component_req_arena_size =
    0,
    mosquitto_Printnum_component_res_arena_size =
    0,
    mosquitto_Printnum_component_arena_size = 0,
    mosquitto_Printnum_component_req_handles = 0,
    mosquitto_Printnum_component_res_handles = 0,
    mosquitto_Printnum_component_err_handles = 0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Printnum_printnum_iid mosquitto_Printnum_printnum_iid
#define Printnum_iidMax mosquitto_Printnum_iidMax
#define Printnum_iidOffset mosquitto_Printnum_iidOffset
#define Printnum_securityIidMax mosquitto_Printnum_securityIidMax
#define Printnum_component_req_arena_size mosquitto_Printnum_component_req_arena_size
#define Printnum_component_res_arena_size mosquitto_Printnum_component_res_arena_size
#define Printnum_component_arena_size mosquitto_Printnum_component_arena_size
#define Printnum_component_req_handles mosquitto_Printnum_component_req_handles
#define Printnum_component_res_handles mosquitto_Printnum_component_res_handles
#define Printnum_component_err_handles mosquitto_Printnum_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__COMPONENT_ENDPOINTS__ */

#ifndef __mosquitto__Showapp__TASK_ENDPOINTS__
#define __mosquitto__Showapp__TASK_ENDPOINTS__
enum {
    mosquitto_Showapp_entity_req_arena_size =
    mosquitto_Showapp_component_req_arena_size,
    mosquitto_Showapp_entity_res_arena_size =
    mosquitto_Showapp_component_res_arena_size,
    mosquitto_Showapp_entity_arena_size =
    mosquitto_Showapp_component_arena_size,
    mosquitto_Showapp_entity_req_handles =
    mosquitto_Showapp_component_req_handles,
    mosquitto_Showapp_entity_res_handles =
    mosquitto_Showapp_component_res_handles,
    mosquitto_Showapp_entity_err_handles =
    mosquitto_Showapp_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Showapp_entity_req_arena_size mosquitto_Showapp_entity_req_arena_size
#define Showapp_entity_res_arena_size mosquitto_Showapp_entity_res_arena_size
#define Showapp_entity_arena_size mosquitto_Showapp_entity_arena_size
#define Showapp_entity_req_handles mosquitto_Showapp_entity_req_handles
#define Showapp_entity_res_handles mosquitto_Showapp_entity_res_handles
#define Showapp_entity_err_handles mosquitto_Showapp_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Showapp__TASK_ENDPOINTS__ */

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

#ifndef __mosquitto__Printnum__COMPONENT_SERVER_TYPES__
#define __mosquitto__Printnum__COMPONENT_SERVER_TYPES__
typedef struct mosquitto_Printnum_component {
            struct mosquitto_Printnum *printnum;
        } mosquitto_Printnum_component;
#endif /* __mosquitto__Printnum__COMPONENT_SERVER_TYPES__ */

#ifndef __mosquitto__Showapp__COMPONENT_SERVER_TYPES__
#define __mosquitto__Showapp__COMPONENT_SERVER_TYPES__
typedef struct mosquitto_Showapp_component {
            struct mosquitto_Printnum_component *Showapp;
        } mosquitto_Showapp_component;
#endif /* __mosquitto__Showapp__COMPONENT_SERVER_TYPES__ */

#ifndef __mosquitto__Printnum__COMPONENT_SERVER_DISPATCHER__
#define __mosquitto__Printnum__COMPONENT_SERVER_DISPATCHER__
static inline
void mosquitto_Printnum_component_init(struct mosquitto_Printnum_component *self,
                                       struct mosquitto_Printnum *printnum)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->printnum = printnum;
}
typedef union mosquitto_Printnum_component_req {
            struct nk_message base_;
            mosquitto_Printnum_req printnum;
        } mosquitto_Printnum_component_req;
typedef union mosquitto_Printnum_component_res {
            struct nk_message base_;
            mosquitto_Printnum_res printnum;
        } mosquitto_Printnum_component_res;
static inline
nk_err_t mosquitto_Printnum_component_dispatch(struct mosquitto_Printnum_component *self,
                                               nk_iid_t iidOffset,
                                               const
                                               struct nk_message *req,
                                               const
                                               struct nk_arena *req_arena,
                                               struct nk_message *res,
                                               struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case mosquitto_Printnum_printnum_iid:
        return mosquitto_Printnum_interface_dispatch(self->printnum,
                                                     req->iid,
                                                     req,
                                                     req_arena,
                                                     res,
                                                     res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Printnum_component mosquitto_Printnum_component
#define Printnum_component_init mosquitto_Printnum_component_init
#define Printnum_component_req mosquitto_Printnum_component_req
#define Printnum_component_res mosquitto_Printnum_component_res
#define Printnum_component_dispatch mosquitto_Printnum_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Printnum__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __mosquitto__Showapp__COMPONENT_SERVER_DISPATCHER__
#define __mosquitto__Showapp__COMPONENT_SERVER_DISPATCHER__
static inline
void mosquitto_Showapp_component_init(struct mosquitto_Showapp_component *self,
                                      struct mosquitto_Printnum_component *Showapp)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->Showapp = Showapp;
}
typedef union mosquitto_Showapp_component_req {
            struct nk_message base_;
            mosquitto_Printnum_req Showapp_printnum;
        } mosquitto_Showapp_component_req;
typedef union mosquitto_Showapp_component_res {
            struct nk_message base_;
            mosquitto_Printnum_res Showapp_printnum;
        } mosquitto_Showapp_component_res;
static inline
nk_err_t mosquitto_Showapp_component_dispatch(struct mosquitto_Showapp_component *self,
                                              nk_iid_t iidOffset,
                                              const
                                              struct nk_message *req,
                                              const
                                              struct nk_arena *req_arena,
                                              struct nk_message *res,
                                              struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case mosquitto_Showapp_Showapp_printnum_iid:
        return mosquitto_Printnum_interface_dispatch(self->Showapp->printnum,
                                                     req->iid,
                                                     req,
                                                     req_arena,
                                                     res,
                                                     res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Showapp_component mosquitto_Showapp_component
#define Showapp_component_init mosquitto_Showapp_component_init
#define Showapp_component_req mosquitto_Showapp_component_req
#define Showapp_component_res mosquitto_Showapp_component_res
#define Showapp_component_dispatch mosquitto_Showapp_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Showapp__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __mosquitto__Showapp__ENTITY_SERVER__
#define __mosquitto__Showapp__ENTITY_SERVER__
#define mosquitto_Showapp_entity_res mosquitto_Showapp_component_res
#define mosquitto_Showapp_entity_req mosquitto_Showapp_component_req
#define mosquitto_Showapp_entity mosquitto_Showapp_component
static inline
void mosquitto_Showapp_entity_init(struct mosquitto_Showapp_entity *self,
                                   struct mosquitto_Printnum_component *Showapp)
{
    mosquitto_Showapp_component_init(self,
                                     Showapp);
}
static inline
nk_err_t mosquitto_Showapp_entity_dispatch(struct mosquitto_Showapp_entity *self,
                                           const
                                           struct nk_message *req,
                                           const
                                           struct nk_arena *req_arena,
                                           struct nk_message *res,
                                           struct nk_arena *res_arena)
{
    return mosquitto_Showapp_component_dispatch(self,
                                                0,
                                                req,
                                                req_arena,
                                                res,
                                                res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Showapp_entity mosquitto_Showapp_entity
#define Showapp_entity_init mosquitto_Showapp_entity_init
#define Showapp_entity_req mosquitto_Showapp_entity_req
#define Showapp_entity_res mosquitto_Showapp_entity_res
#define Showapp_entity_dispatch mosquitto_Showapp_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Showapp__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

