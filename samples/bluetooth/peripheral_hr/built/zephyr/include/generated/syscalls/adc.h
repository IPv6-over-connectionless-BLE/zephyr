
/* auto-generated by gen_syscalls.py, don't edit */

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall_macros.h>

#ifdef __cplusplus
extern "C" {
#endif

K_SYSCALL_DECLARE1_VOID(K_SYSCALL_ADC_ENABLE, adc_enable, struct device *, dev);

K_SYSCALL_DECLARE1_VOID(K_SYSCALL_ADC_DISABLE, adc_disable, struct device *, dev);

K_SYSCALL_DECLARE2(K_SYSCALL_ADC_READ, adc_read, int, struct device *, dev, struct adc_seq_table *, seq_table);

#ifdef __cplusplus
}
#endif

#endif
