/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-09-15     flyingcys    add w600
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#ifdef __CC_ARM
extern int Image$$RW_IRAM1$$ZI$$Limit;
#define HEAP_BEGIN    (&Image$$RW_IRAM1$$ZI$$Limit)
#elif __ICCARM__
#pragma section="CSTACK"
#define HEAP_BEGIN    (__segment_end("CSTACK"))
#else
extern int __bss_end__;
#define HEAP_BEGIN    (&__bss_end__)
#endif

#define HEAP_END           (0x20038000UL)

void rt_hw_board_init(void);

#endif
