/* Init
 *
 * This routine is the initialization task for this test program.
 *
 */

/*
 * Copyright (c) 2012-2013 Hesham Al-Matary.
 * Copyright (c) 2013 Gedare Bloom.
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.com/license/LICENSE.
 */

#define __RTEMS_VIOLATE_KERNEL_VISIBILITY__
#define CONFIGURE_INIT
#include "system.h"
#include <stdio.h>
#include <stdlib.h>
#include <rtems/score/mm.h>

rtems_task Init(
  rtems_task_argument ignored
)
{

  puts( "\n\n*** Start of mmtest1 ***\n" );

  printf("Test 1: Set Region1 as read only\n");
  _Memory_management_Set_attributes( 0x00100000, 0x200000, RTEMS_MM_REGION_PROTECTION_READ_ONLY);

  printf("Test 2 : Set Region2 as write enabled\n");
  _Memory_management_Set_attributes( 0x00400000, 0x100000, RTEMS_MM_REGION_PROTECTION_WRITE);

  printf( "\n\n*** End of mmtest1 ***\n" );

  exit( 0 );
}
