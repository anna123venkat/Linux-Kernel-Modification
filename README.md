# Linux Kernel Optimization Using CPU Management Techniques

This repository contains the project **"Modification of Linux Kernel Using CPU Management Techniques"** developed as part of the 19AD481 – Operating System Principles course. The project focuses on optimizing the Linux kernel's memory, file management, power management, and device driver subsystems to improve system performance and energy efficiency.

---

## Table of Contents
- [Introduction](#introduction)
- [Objectives](#objectives)
- [Scope of the Project](#scope-of-the-project)
- [Features](#features)
- [Installation and Setup](#installation-and-setup)
- [Modifications](#modifications)
- [Results](#results)
- [References](#references)

---

## Introduction
The Linux kernel, being the core of the operating system, plays a critical role in resource management. This project aims to reduce the kernel's memory consumption and enhance system performance by:
- Optimizing memory allocation policies.
- Improving file and power management subsystems.
- Customizing device drivers for efficiency.

---

## Objectives
1. **Optimize Memory Management:** Reduce memory overhead and improve cache hit rates.
2. **Improve File Management:** Enhance file system caching mechanisms and limit open files.
3. **Implement Energy-Efficient Power Management:** Utilize dynamic voltage and frequency scaling.
4. **Optimize Device Driver Subsystem:** Remove unnecessary drivers and improve driver code.

---

## Scope of the Project
The modifications target the following areas:
- **Memory Management:** Efficient allocation, compression, and improved cache handling.
- **File Management:** Customizing file system operations for better performance.
- **Power Management:** Implementing CPU idle states and energy-efficient policies.
- **Device Driver Subsystem:** Code optimization and removal of unused drivers.

---

## Features
- Custom memory allocation policies.
- Enhanced power management with dynamic voltage and frequency scaling.
- Improved file system performance with optimized metadata operations.
- Simplified and efficient device driver configurations.

---

## Installation and Setup
Follow these steps to set up and modify the Linux kernel:
1. **Download the Kernel:**
   ```bash
   wget https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-5.15.94.tar.xz
   ```
2. **Install Required Tools:**
   ```bash
   sudo apt-get install build-essential libncurses-dev bison flex libssl-dev
   ```
3. **Extract and Configure Kernel:**
   ```bash
   tar -xvf linux-5.15.94.tar.xz
   cd linux-5.15.94
   make menuconfig
   ```
4. **Apply Modifications:** See the `src/patches/` directory for detailed patches.
5. **Compile and Install the Kernel:**
   ```bash
   make -j$(nproc)
   sudo make modules_install install
   ```

---

## Modifications
The following subsystems were customized:
- **Memory Management**
- **File Management**
- **Power Management**
- **Device Drivers**

Details are available in the `docs/Kernel_Modifications.md`.

---

## Results
Before and after performance metrics:
- **Memory Usage:** Reduced by **15%**.
- **Power Efficiency:** Increased by **20%**.
- **System Performance:** Improved by **18%**.

Screenshots and additional results are available in the `results/` directory.

---

## References
1. [Understanding the Linux Kernel](https://www.oreilly.com/library/view/understanding-the-linux/0596002130/)
2. [The Linux Kernel Archives](https://www.kernel.org/)
3. [Linux Performance and Tuning Guidelines](https://www.ibm.com/docs/en/linux-on-system-z?topic=performance-linux-performance-tuning-guidelines)
