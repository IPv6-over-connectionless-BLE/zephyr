/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */
#define CONFIG_ARM 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_SYS_POWER_LOW_POWER_STATE_SUPPORTED 1
#define CONFIG_ARCH "arm"
#define CONFIG_SOC_SERIES "sam3x"
#define CONFIG_SOC_FAMILY "atmel_sam"
#define CONFIG_BOARD "arduino_due"
#define CONFIG_SOC_SERIES_SAM3X 1
#define CONFIG_ARCH_DEFCONFIG "arch/arm/defconfig"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_CPU_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M3 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_LDREX_STREX_AVAILABLE 1
#define CONFIG_DATA_ENDIANNESS_LITTLE 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_XIP 1
#define CONFIG_SOC_FAMILY_SAM 1
#define CONFIG_SOC_PART_NUMBER_SAM3X8E 1
#define CONFIG_SOC_ATMEL_SAM3X_EXT_MAINCK 1
#define CONFIG_SOC_ATMEL_SAM3X_PLLA_MULA 0x06
#define CONFIG_SOC_ATMEL_SAM3X_PLLA_DIVA 0x01
#define CONFIG_SOC_PART_NUMBER "sam3x8e"
#define CONFIG_BOARD_ARDUINO_DUE 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING 0
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 256
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_ERRNO 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_DELAY 0
#define CONFIG_BUILD_TIMESTAMP 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_OFFLOAD_WORKQUEUE_STACK_SIZE 1024
#define CONFIG_OFFLOAD_WORKQUEUE_PRIORITY -1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_NUM_PIPE_ASYNC_MSGS 10
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 100
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 84000000
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_HAS_DTS 1
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_UART_CONSOLE 1
#define CONFIG_UART_CONSOLE_INIT_PRIORITY 60
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_SAM 1
#define CONFIG_UART_SAM_PORT_0 1
#define CONFIG_CORTEX_M_SYSTICK 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_SPI_LEGACY_API 1
#define CONFIG_PINMUX 1
#define CONFIG_PINMUX_NAME "PINMUX"
#define CONFIG_PINMUX_INIT_PRIORITY 45
#define CONFIG_WATCHDOG 1
#define CONFIG_WDT_SAM 1
#define CONFIG_WDT_SAM_DISABLE_AT_BOOT 1
#define CONFIG_WDT_SAM_DEVICE_NAME "WDT"
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_TEXT_SECTION_OFFSET 0x0
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_CHECK_LINK_MAP 1
#define CONFIG_CROSS_COMPILE ""
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_TOOLCHAIN_VARIANT ""
#define CONFIG_KERNEL_BIN_NAME "zephyr"
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_DISASSEMBLY 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_MCUMGR_BUF_COUNT 4
#define CONFIG_MCUMGR_BUF_SIZE 384
#define CONFIG_MCUMGR_BUF_USER_DATA_SIZE 7
#define CONFIG_ASF 1
#define CONFIG_HAS_CMSIS 1
#define CONFIG_TEST_EXTRA_STACKSIZE 0
#define CONFIG_NUM_IRQS 45