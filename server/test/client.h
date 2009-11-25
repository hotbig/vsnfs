/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CLIENT_H_RPCGEN
#define _CLIENT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define VSNFS_PROG 100103
#define VSNFS_VER1 1

#if defined(__STDC__) || defined(__cplusplus)
#define VSNFS_PROC_NULL 0
extern  int * vsnfs_proc_null_1(void *, CLIENT *);
extern  int * vsnfs_proc_null_1_svc(void *, struct svc_req *);
extern int vsnfs_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define VSNFS_PROC_NULL 0
extern  int * vsnfs_proc_null_1();
extern  int * vsnfs_proc_null_1_svc();
extern int vsnfs_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CLIENT_H_RPCGEN */
