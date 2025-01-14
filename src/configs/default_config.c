/*
 * Default Configuration for Linux Kernel
 * This file represents the unmodified kernel configuration as loaded 
 * prior to making optimizations for memory, power, and file management.
 */

/* General setup */
#define CONFIG_64BIT 1
#define CONFIG_X86_64 1
#define CONFIG_DEFAULT_HOSTNAME "(none)"

/* Memory Management */
#define CONFIG_MEMCG 1
#define CONFIG_SWAP 1
#define CONFIG_MMU 1

/* CPU and Power Management */
#define CONFIG_CPU_FREQ 1
#define CONFIG_CPU_IDLE 1
#define CONFIG_PM_SLEEP 1
#define CONFIG_PM_WAKELOCKS 1

/* Device Drivers */
#define CONFIG_HAVE_GENERIC_DMA_COHERENT 1
#define CONFIG_NET 1
#define CONFIG_INPUT 1
#define CONFIG_USB_SUPPORT 1
#define CONFIG_HID 1

/* File Systems */
#define CONFIG_EXT4_FS 1
#define CONFIG_VFAT_FS 1
#define CONFIG_TMPFS 1

/* Debugging Options */
#define CONFIG_DEBUG_KERNEL 1
#define CONFIG_LOG_BUF_SHIFT 17

/* Networking Options */
#define CONFIG_INET 1
#define CONFIG_IPV6 1
#define CONFIG_PACKET 1


