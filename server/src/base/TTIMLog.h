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

#include "TTIMConfig.h"

#if __Debug__

#define LOG_BUG_SIZE                                            (1024 * 10 * 5)

static __inline void __PRINTF(char *_Format, ...) {
   
   va_list      args;
   static char s_MSG[LOG_BUG_SIZE]  = {0};
   
   bzero(s_MSG, sizeof(s_MSG));
   
   va_start (args, _Format);
   vsnprintf(s_MSG, sizeof(s_MSG), _Format, args);
   va_end (args);
   
   printf("%s\n", s_MSG);
   
   return;
}
#endif

#if __Debug__
#	define TTIM_PRINTF(x)									    __PRINTF x
#else
#	define TTIM_PRINTF(x)
#endif

#endif
