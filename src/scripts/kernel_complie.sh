#!/bin/bash

# kernel_compile.sh
# This script automates the process of compiling and installing the Linux kernel.

# Exit on error
set -e

# Variables
KERNEL_VERSION="5.15.94"
KERNEL_DIR="linux-$KERNEL_VERSION"
NUM_CORES=$(nproc) # Number of CPU cores for parallel compilation

echo "Starting Linux Kernel Compilation Process"

# Step 1: Download the kernel source
if [ ! -d "$KERNEL_DIR" ]; then
    echo "Downloading Linux Kernel $KERNEL_VERSION..."
    wget https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-$KERNEL_VERSION.tar.xz
    echo "Extracting Linux Kernel..."
    tar -xvf linux-$KERNEL_VERSION.tar.xz
else
    echo "Kernel source already downloaded and extracted."
fi

# Step 2: Navigate to the kernel directory
cd "$KERNEL_DIR"

# Step 3: Clean previous builds
echo "Cleaning previous build files..."
make mrproper

# Step 4: Configure the kernel
if [ -f "../optimized_config.c" ]; then
    echo "Applying optimized configuration..."
    cp ../optimized_config.c .config
else
    echo "No optimized configuration found. Using default config..."
    make defconfig
fi

echo "Opening menu configuration for verification..."
make menuconfig

# Step 5: Compile the kernel
echo "Compiling the kernel with $NUM_CORES cores..."
make -j$NUM_CORES

# Step 6: Install kernel modules
echo "Installing kernel modules..."
sudo make modules_install

# Step 7: Install the kernel
echo "Installing the compiled kernel..."
sudo make install

# Step 8: Update bootloader
echo "Updating GRUB bootloader..."
sudo update-grub

# Step 9: Reboot prompt
echo "Kernel compilation and installation completed successfully!"
echo "Please reboot your system to use the new kernel."
read -p "Would you like to reboot now? (y/n): " REBOOT
if [[ "$REBOOT" == "y" || "$REBOOT" == "Y" ]]; then
    sudo reboot
else
    echo "Reboot your system later to apply the changes."
fi
