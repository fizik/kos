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

#ifndef __mosquitto__Setcommand__COMPONENT_ENDPOINTS__
#define __mosquitto__Setcommand__COMPONENT_ENDPOINTS__
enum {
    mosquitto_Setcommand_setcommand_iid,
    mosquitto_Setcommand_iidMax,
};
enum {
    mosquitto_Setcommand_iidOffset = 0,
};
enum {
    mosquitto_Setcommand_securityIidMax,
};
enum {
    mosquitto_Setcommand_component_req_arena_size =
    0,
    mosquitto_Setcommand_component_res_arena_size =
    0,
    mosquitto_Setcommand_component_arena_size = 0,
    mosquitto_Setcommand_component_req_handles =
    0,
    mosquitto_Setcommand_component_res_handles =
    0,
    mosquitto_Setcommand_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Setcommand_setcommand_iid mosquitto_Setcommand_setcommand_iid
#define Setcommand_iidMax mosquitto_Setcommand_iidMax
#define Setcommand_iidOffset mosquitto_Setcommand_iidOffset
#define Setcommand_securityIidMax mosquitto_Setcommand_securityIidMax
#define Setcommand_component_req_arena_size mosquitto_Setcommand_component_req_arena_size
#define Setcommand_component_res_arena_size mosquitto_Setcommand_component_res_arena_size
#define Setcommand_component_arena_size mosquitto_Setcommand_component_arena_size
#define Setcommand_component_req_handles mosquitto_Setcommand_component_req_handles
#define Setcommand_component_res_handles mosquitto_Setcommand_component_res_handles
#define Setcommand_component_err_handles mosquitto_Setcommand_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__COMPONENT_ENDPOINTS__ */

#ifndef __mosquitto__Changestate__COMPONENT_ENDPOINTS__
#define __mosquitto__Changestate__COMPONENT_ENDPOINTS__
enum {
    mosquitto_Changestate_Changestate_setcommand_iid,
    mosquitto_Changestate_iidMax,
};
enum {
    mosquitto_Changestate_iidOffset = 0,
    mosquitto_Changestate_Changestate_iidOffset =
    0,
};
enum {
    mosquitto_Changestate_securityIidMax,
};
enum {
    mosquitto_Changestate_component_req_arena_size =
    0,
    mosquitto_Changestate_component_res_arena_size =
    0,
    mosquitto_Changestate_component_arena_size =
    0,
    mosquitto_Changestate_component_req_handles =
    0,
    mosquitto_Changestate_component_res_handles =
    0,
    mosquitto_Changestate_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Changestate_Changestate_setcommand_iid mosquitto_Changestate_Changestate_setcommand_iid
#define Changestate_iidMax mosquitto_Changestate_iidMax
#define Changestate_iidOffset mosquitto_Changestate_iidOffset
#define Changestate_Changestate_iidOffset mosquitto_Changestate_Changestate_iidOffset
#define Changestate_securityIidMax mosquitto_Changestate_securityIidMax
#define Changestate_component_req_arena_size mosquitto_Changestate_component_req_arena_size
#define Changestate_component_res_arena_size mosquitto_Changestate_component_res_arena_size
#define Changestate_component_arena_size mosquitto_Changestate_component_arena_size
#define Changestate_component_req_handles mosquitto_Changestate_component_req_handles
#define Changestate_component_res_handles mosquitto_Changestate_component_res_handles
#define Changestate_component_err_handles mosquitto_Changestate_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Changestate__COMPONENT_ENDPOINTS__ */

#ifndef __mosquitto__Changestate__TASK_ENDPOINTS__
#define __mosquitto__Changestate__TASK_ENDPOINTS__
enum {
    mosquitto_Changestate_entity_req_arena_size =
    mosquitto_Changestate_component_req_arena_size,
    mosquitto_Changestate_entity_res_arena_size =
    mosquitto_Changestate_component_res_arena_size,
    mosquitto_Changestate_entity_arena_size =
    mosquitto_Changestate_component_arena_size,
    mosquitto_Changestate_entity_req_handles =
    mosquitto_Changestate_component_req_handles,
    mosquitto_Changestate_entity_res_handles =
    mosquitto_Changestate_component_res_handles,
    mosquitto_Changestate_entity_err_handles =
    mosquitto_Changestate_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Changestate_entity_req_arena_size mosquitto_Changestate_entity_req_arena_size
#define Changestate_entity_res_arena_size mosquitto_Changestate_entity_res_arena_size
#define Changestate_entity_arena_size mosquitto_Changestate_entity_arena_size
#define Changestate_entity_req_handles mosquitto_Changestate_entity_req_handles
#define Changestate_entity_res_handles mosquitto_Changestate_entity_res_handles
#define Changestate_entity_err_handles mosquitto_Changestate_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Changestate__TASK_ENDPOINTS__ */

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

#ifndef __mosquitto__Setcommand__COMPONENT_SERVER_TYPES__
#define __mosquitto__Setcommand__COMPONENT_SERVER_TYPES__
typedef struct mosquitto_Setcommand_component {
            struct mosquitto_Setcommand *setcommand;
        } mosquitto_Setcommand_component;
#endif /* __mosquitto__Setcommand__COMPONENT_SERVER_TYPES__ */

#ifndef __mosquitto__Changestate__COMPONENT_SERVER_TYPES__
#define __mosquitto__Changestate__COMPONENT_SERVER_TYPES__
typedef struct mosquitto_Changestate_component {
            struct mosquitto_Setcommand_component *Changestate;
        } mosquitto_Changestate_component;
#endif /* __mosquitto__Changestate__COMPONENT_SERVER_TYPES__ */

#ifndef __mosquitto__Setcommand__COMPONENT_SERVER_DISPATCHER__
#define __mosquitto__Setcommand__COMPONENT_SERVER_DISPATCHER__
static inline
void mosquitto_Setcommand_component_init(struct mosquitto_Setcommand_component *self,
                                         struct mosquitto_Setcommand *setcommand)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->setcommand = setcommand;
}
typedef union mosquitto_Setcommand_component_req {
            struct nk_message base_;
            mosquitto_Setcommand_req setcommand;
        } mosquitto_Setcommand_component_req;
typedef union mosquitto_Setcommand_component_res {
            struct nk_message base_;
            mosquitto_Setcommand_res setcommand;
        } mosquitto_Setcommand_component_res;
static inline
nk_err_t mosquitto_Setcommand_component_dispatch(struct mosquitto_Setcommand_component *self,
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
        
      case mosquitto_Setcommand_setcommand_iid:
        return mosquitto_Setcommand_interface_dispatch(self->setcommand,
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
#define Setcommand_component mosquitto_Setcommand_component
#define Setcommand_component_init mosquitto_Setcommand_component_init
#define Setcommand_component_req mosquitto_Setcommand_component_req
#define Setcommand_component_res mosquitto_Setcommand_component_res
#define Setcommand_component_dispatch mosquitto_Setcommand_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Setcommand__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __mosquitto__Changestate__COMPONENT_SERVER_DISPATCHER__
#define __mosquitto__Changestate__COMPONENT_SERVER_DISPATCHER__
static inline
void mosquitto_Changestate_component_init(struct mosquitto_Changestate_component *self,
                                          struct mosquitto_Setcommand_component *Changestate)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->Changestate = Changestate;
}
typedef union mosquitto_Changestate_component_req {
            struct nk_message base_;
            mosquitto_Setcommand_req Changestate_setcommand;
        } mosquitto_Changestate_component_req;
typedef union mosquitto_Changestate_component_res {
            struct nk_message base_;
            mosquitto_Setcommand_res Changestate_setcommand;
        } mosquitto_Changestate_component_res;
static inline
nk_err_t mosquitto_Changestate_component_dispatch(struct mosquitto_Changestate_component *self,
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
        
      case mosquitto_Changestate_Changestate_setcommand_iid:
        return mosquitto_Setcommand_interface_dispatch(self->Changestate->setcommand,
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
#define Changestate_component mosquitto_Changestate_component
#define Changestate_component_init mosquitto_Changestate_component_init
#define Changestate_component_req mosquitto_Changestate_component_req
#define Changestate_component_res mosquitto_Changestate_component_res
#define Changestate_component_dispatch mosquitto_Changestate_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Changestate__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __mosquitto__Changestate__ENTITY_SERVER__
#define __mosquitto__Changestate__ENTITY_SERVER__
#define mosquitto_Changestate_entity_res mosquitto_Changestate_component_res
#define mosquitto_Changestate_entity_req mosquitto_Changestate_component_req
#define mosquitto_Changestate_entity mosquitto_Changestate_component
static inline
void mosquitto_Changestate_entity_init(struct mosquitto_Changestate_entity *self,
                                       struct mosquitto_Setcommand_component *Changestate)
{
    mosquitto_Changestate_component_init(self,
                                         Changestate);
}
static inline
nk_err_t mosquitto_Changestate_entity_dispatch(struct mosquitto_Changestate_entity *self,
                                               const
                                               struct nk_message *req,
                                               const
                                               struct nk_arena *req_arena,
                                               struct nk_message *res,
                                               struct nk_arena *res_arena)
{
    return mosquitto_Changestate_component_dispatch(self,
                                                    0,
                                                    req,
                                                    req_arena,
                                                    res,
                                                    res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Changestate_entity mosquitto_Changestate_entity
#define Changestate_entity_init mosquitto_Changestate_entity_init
#define Changestate_entity_req mosquitto_Changestate_entity_req
#define Changestate_entity_res mosquitto_Changestate_entity_res
#define Changestate_entity_dispatch mosquitto_Changestate_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __mosquitto__Changestate__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

