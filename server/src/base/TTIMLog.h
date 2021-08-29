#ifndef __TTIM_LOG_H__
#define __TTIM_LOG_H__

#define _CRT_SECURE_NO_DEPRECATE	// remove warning C4996, 

#include "ostype.h"
#include "UtilPdu.h"
#include "Lock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef _WIN32
#	include <strings.h>
#endif

#include <sys/stat.h>
#include <assert.h>


#ifdef _WIN32
#	define	snprintf	sprintf_s
#else
#	include <stdarg.h>
#	include <pthread.h>
#	include <time.h>
#	include <sys/time.h>
#endif

#include "slog/slog_api.h"
#include "util.h"

#define __ON__                                     (1)
#define __OFF__                                    (0)

#if (defined(DEBUG_CLIENT) && (DEBUG_CLIENT==1))
#  define __AUTO__                                 (1)
#  define __Debug__                                (1)
#else
#  define __AUTO__                                 (0)
#  define __Debug__                                (0)
#endif

#if __Debug__
#	define TTIMLog(x)                              	log x
#else
#	define TTIMLog(x)
#endif

#endif
