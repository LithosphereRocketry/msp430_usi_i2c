#ifndef MSP430_COMPAT_H
#define MSP430_COMPAT_H

/**
 * Required macros to be able to compile the library on the msp430-gcc
 * toolchain. Replaces missing/differently spelled TI intrinsics:
 * __even_in_range
 * _bic_SR_register_on_exit
 * _disable_interrupts
 * _enable_interrupts
 */

#include <msp430.h>

#ifndef __even_in_range
    #define __even_in_range(A,B) (A) // TODO: does GCC have a hint for this?
#endif
#ifndef _bic_SR_register_on_exit
    #define _bic_SR_register_on_exit __bic_SR_register_on_exit 
#endif
#ifndef _disable_interrupts
    #define _disable_interrupts __dint
#endif
#ifndef _enable_interrupts
    #define _enable_interrupts __eint
#endif

#endif