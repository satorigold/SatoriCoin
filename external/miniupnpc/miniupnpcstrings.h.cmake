#ifndef MINIUPNPCSTRINGS_H_INCLUDED
#define MINIUPNPCSTRINGS_H_INCLUDED

#define OS_STRING "${CMAKE_SYSTEM_NAME}"
#define MINIUPNPC_VERSION_STRING "${MINIUPNPC_VERSION}"

#if 0
/* according to "UPnP Device Architecture 1.0" */
#define UPNP_VERSION_STRING "UPnP/1.0"
#else
/* according to "UPnP Device Architecture 1.1" */
#define UPNP_VERSION_STRING "UPnP/1.1"
#endif

#endif
