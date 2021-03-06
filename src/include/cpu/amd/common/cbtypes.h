/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2011 Advanced Micro Devices, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _CBTYPES_H_
#define _CBTYPES_H_

/* Map coreboot stdint types to AGESA types. */

#include <stdint.h>

typedef int64_t __int64;
typedef void VOID;
typedef uintptr_t UINTN;
typedef char CHAR8;
typedef uint8_t UINT8;
typedef uint16_t UINT16;
typedef uint32_t UINT32;
typedef int32_t INT32;
typedef uint64_t UINT64;
typedef uint8_t BOOLEAN;

#define DMSG_SB_TRACE   0x02
#define TRACE(Arguments)

#ifndef TRUE
#define TRUE  1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifndef VOLATILE
#define VOLATILE volatile
#endif
#ifndef CONST
#define CONST const
#endif

#ifndef IN
#define IN
#endif
#ifndef OUT
#define OUT
#endif


#ifndef STATIC
#define STATIC static
#endif
#ifndef VOLATILE
#define VOLATILE volatile
#endif

#endif
