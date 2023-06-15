#ifndef DCE_SELECT_H
#define DCE_SELECT_H

#include <sys/select.h>

#ifdef __cplusplus
extern "C" {
#endif

int dce_select (int nfds, fd_set *readfds, fd_set *writefds,
                fd_set *exceptfds, struct timeval *timeout);

long int dce___fdelt_chk (long int __d);
#ifdef __cplusplus
}
#endif

#endif /* DCE_SELECT_H */
