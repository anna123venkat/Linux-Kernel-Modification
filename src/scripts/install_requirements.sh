#!/bin/bash

# install_requirements.sh
# This script installs the required dependencies for building and modifying the Linux kernel.

echo "Updating package list..."
sudo apt-get update

echo "Installing required packages..."
sudo apt-get install -y \
    build-essential \
    libncurses-dev \
    bison \
    flex \
    libssl-dev \
    libelf-dev \
    libudev-dev \
    libpci-dev \
    libiberty-dev \
    autoconf \
    fakeroot \
    bc \
    ccache \
    kernel-package

echo "Installing additional tools for performance analysis..."
sudo apt-get install -y \
    htop \
    perf \
    sysstat

echo "Cleaning up..."
sudo apt-get autoremove -y
sudo apt-get clean

echo "All requirements installed successfully!"
