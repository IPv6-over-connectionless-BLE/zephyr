/* Generated by Kconfiglib (https://github.com/ulfalizer/Kconfiglib) */
#define CONFIG_ARM 1
#define CONFIG_PRIVILEGED_STACK_SIZE 256
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_SYS_POWER_LOW_POWER_STATE_SUPPORTED 1
#define CONFIG_SYS_POWER_DEEP_SLEEP_SUPPORTED 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_ARCH "arm"
#define CONFIG_SOC "nRF52840_QIAA"
#define CONFIG_SOC_SERIES "nrf52"
#define CONFIG_SOC_FAMILY "nordic_nrf5"
#define CONFIG_BOARD "nrf52840_pca10056"
#define CONFIG_SOC_SERIES_NRF52X 1
#define CONFIG_ARCH_DEFCONFIG "arch/arm/defconfig"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_LDREX_STREX_AVAILABLE 1
#define CONFIG_DATA_ENDIANNESS_LITTLE 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_XIP 1
#define CONFIG_ARM_CORE_MPU 1
#define CONFIG_ARM_MPU 1
#define CONFIG_SOC_FAMILY_NRF5 1
#define CONFIG_SOC_NRF52840 1
#define CONFIG_SOC_NRF52840_QIAA 1
#define CONFIG_ARM_MPU_NRF52X 1
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_BOARD_NRF52840_PCA10056 1
#define CONFIG_GPIO_AS_PINRESET 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING 0
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_THREAD_STACK_INFO 1
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
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_NUM_PIPE_ASYNC_MSGS 10
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 100
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_SYS_POWER_MANAGEMENT 1
#define CONFIG_TICKLESS_IDLE 1
#define CONFIG_TICKLESS_IDLE_THRESH 3
#define CONFIG_HAS_DTS 1
#define CONFIG_CONSOLE 1
#define CONFIG_CONSOLE_INPUT_MAX_LINE_LEN 128
#define CONFIG_CONSOLE_HAS_DRIVER 1
#define CONFIG_RTT_CONSOLE 1
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_HAS_DRIVER 1
#define CONFIG_SERIAL_SUPPORT_INTERRUPT 1
#define CONFIG_UART_NRF5 1
#define CONFIG_UART_NRF5_CLK_FREQ 16000000
#define CONFIG_UART_NRF5_GPIO_TX_PIN 6
#define CONFIG_UART_NRF5_GPIO_RX_PIN 8
#define CONFIG_UART_NRF5_GPIO_RTS_PIN 5
#define CONFIG_UART_NRF5_GPIO_CTS_PIN 7
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_ENTROPY_GENERATOR 1
#define CONFIG_ENTROPY_NRF5_RNG 1
#define CONFIG_ENTROPY_NRF5_BIAS_CORRECTION 1
#define CONFIG_ENTROPY_NRF5_THR_THRESHOLD 4
#define CONFIG_ENTROPY_NRF5_ISR_THRESHOLD 12
#define CONFIG_ENTROPY_NRF5_THR_BUF_LEN 4
#define CONFIG_ENTROPY_NRF5_ISR_BUF_LEN 12
#define CONFIG_ENTROPY_NRF5_PRI 5
#define CONFIG_ENTROPY_HAS_DRIVER 1
#define CONFIG_ENTROPY_NAME "ENTROPY_0"
#define CONFIG_GPIO 1
#define CONFIG_GPIO_NRF5 1
#define CONFIG_GPIO_NRF5_P0 1
#define CONFIG_GPIO_NRF5_P0_DEV_NAME "GPIO_0"
#define CONFIG_GPIO_NRF5_PORT_P0_PRI 1
#define CONFIG_GPIO_SX1509B_INIT_PRIORITY 70
#define CONFIG_GPIO_SX1509B_DEV_NAME "GPIO_P0"
#define CONFIG_GPIO_SX1509B_I2C_ADDR 0x3e
#define CONFIG_GPIO_SX1509B_I2C_MASTER_DEV_NAME ""
#define CONFIG_SPI_LEGACY_API 1
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_CLOCK_CONTROL_NRF5 1
#define CONFIG_CLOCK_CONTROL_NRF5_IRQ_PRIORITY 1
#define CONFIG_CLOCK_CONTROL_NRF5_M16SRC_DRV_NAME "clk_m16src"
#define CONFIG_CLOCK_CONTROL_NRF5_K32SRC_DRV_NAME "clk_k32src"
#define CONFIG_CLOCK_CONTROL_NRF5_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF5_K32SRC_20PPM 1
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
#define CONFIG_BT 1
#define CONFIG_BT_HCI 1
#define CONFIG_BT_BROADCASTER 1
#define CONFIG_BT_HCI_VS_EXT 1
#define CONFIG_BT_DEBUG_NONE 1
#define CONFIG_BT_HCI_HOST 1
#define CONFIG_BT_HCI_CMD_COUNT 2
#define CONFIG_BT_RX_BUF_COUNT 3
#define CONFIG_BT_RX_BUF_LEN 76
#define CONFIG_BT_HCI_TX_STACK_SIZE 640
#define CONFIG_BT_HCI_TX_PRIO 7
#define CONFIG_BT_HCI_RESERVE 0
#define CONFIG_BT_RECV_IS_RX_THREAD 1
#define CONFIG_BT_RX_STACK_SIZE 1024
#define CONFIG_BT_RX_PRIO 8
#define CONFIG_BT_DEVICE_NAME "Zephyr"
#define CONFIG_BT_DEVICE_APPEARANCE 0
#define CONFIG_BT_CTLR 1
#define CONFIG_BT_LL_SW 1
#define CONFIG_BT_CTLR_RX_PRIO_STACK_SIZE 448
#define CONFIG_BT_CTLR_RX_PRIO 6
#define CONFIG_BT_CTLR_FILTER 1
#define CONFIG_BT_CTLR_HCI_VS_BUILD_INFO ""
#define CONFIG_BT_CTLR_RX_BUFFERS 1
#define CONFIG_BT_CTLR_TX_BUFFERS 2
#define CONFIG_BT_CTLR_TX_BUFFER_SIZE 27
#define CONFIG_BT_CTLR_COMPANY_ID 0x05F1
#define CONFIG_BT_CTLR_SUBVERSION_NUMBER 0xFFFF
#define CONFIG_BT_CTLR_CHAN_SEL_2 1
#define CONFIG_BT_CTLR_MIN_USED_CHAN 1
#define CONFIG_BT_CTLR_ADV_EXT 1
#define CONFIG_BT_CTLR_WORKER_PRIO 0
#define CONFIG_BT_CTLR_JOB_PRIO 0
#define CONFIG_BT_CTLR_XTAL_ADVANCED 1
#define CONFIG_BT_CTLR_XTAL_THRESHOLD 1500
#define CONFIG_BT_CTLR_SCHED_ADVANCED 1
#define CONFIG_BT_CTLR_RADIO_ENABLE_FAST 1
#define CONFIG_BT_CTLR_SCAN_REQ_NOTIFY 1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_MCUMGR_BUF_COUNT 4
#define CONFIG_MCUMGR_BUF_SIZE 384
#define CONFIG_MCUMGR_BUF_USER_DATA_SIZE 7
#define CONFIG_NET_BUF 1
#define CONFIG_NET_BUF_USER_DATA_SIZE 4
#define CONFIG_ENTROPY_DEVICE_RANDOM_GENERATOR 1
#define CONFIG_HAS_CMSIS 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_TEST_EXTRA_STACKSIZE 0
#define CONFIG_NUM_IRQS 46
