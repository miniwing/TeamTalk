#ifndef __TTIM_CONFIG_H__
#define __TTIM_CONFIG_H__

#define __ON__                                     (1)
#define __OFF__                                    (0)

#if (defined(DEBUG_CLIENT) && (DEBUG_CLIENT==1))
#  define __AUTO__                                 (1)
#  define __Debug__                                (1)
#else
#  define __AUTO__                                 (0)
#  define __Debug__                                (0)
#endif

#define __TEAMTALK_REGIST__                        (__ON__)

#endif /* __TTIM_CONFIG_H__ */
