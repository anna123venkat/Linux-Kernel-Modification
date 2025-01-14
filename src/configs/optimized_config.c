/*
 * Optimized Configuration for Linux Kernel
 * This file represents the modified kernel configuration aimed at reducing memory usage,
 * improving power efficiency, and optimizing file and device management.
 */

/* General setup */
#define CONFIG_64BIT 1
#define CONFIG_X86_64 1
#define CONFIG_DEFAULT_HOSTNAME "OptimizedKernel"

/* Memory Management */
#define CONFIG_MEMCG 1
#define CONFIG_SWAP 0             // Swap disabled to reduce overhead
#define CONFIG_MMU 1
#define CONFIG_TRANSPARENT_HUGEPAGE 0  // Disabled to save memory
#define CONFIG_MEMORY_COMPRESSION 1   // Enabled for memory efficiency

/* CPU and Power Management */
#define CONFIG_CPU_FREQ 1
#define CONFIG_CPU_IDLE 1
#define CONFIG_PM_SLEEP 1
#define CONFIG_PM_WAKELOCKS 1
#define CONFIG_CPU_FREQ_GOV_ONDEMAND 1  // Dynamic voltage and frequency scaling

/* Device Drivers */
#define CONFIG_HAVE_GENERIC_DMA_COHERENT 1
#define CONFIG_NET 1
#define CONFIG_INPUT 1
#define CONFIG_USB_SUPPORT 0      // Unused USB drivers disabled
#define CONFIG_HID 0              // Unused input devices disabled

/* File Systems */
#define CONFIG_EXT4_FS 1
#define CONFIG_VFAT_FS 0          // Unused file systems disabled
#define CONFIG_TMPFS 1
#define CONFIG_MISC_FILESYSTEMS 0 // Minimized miscellaneous file systems

/* Debugging Options */
#define CONFIG_DEBUG_KERNEL 0     // Disabled to save memory
#define CONFIG_LOG_BUF_SHIFT 14   // Reduced log buffer size to save memory

/* Networking Options */
#define CONFIG_INET 1
#define CONFIG_IPV6 0             // Disabled if not needed to reduce overhead
#define CONFIG_PACKET 1


