# Nexmon CSI Extractor for Raspberry Pi 5
This repository contains a patch for installing the Nexmon Channel State Information Extractor on the Raspberry Pi 5, kernel ver. 6.6.y.

## Usage
1. Load the generic 64-bit kernel image for 4 KB page sizes: `sudo nano /boot/firmware/config.txt`
   * Add the following line: `kernel=kernel8.img`
   * Reboot.
2. Follow the installation steps from the original repository: https://github.com/seemoo-lab/nexmon_csi.

## bcm43455c0
1. Make sure the following commands are executed as root: `sudo su`
2. Upgrade your Raspbian installation: `apt-get update && apt-get upgrade`
3. Install the kernel headers to build the driver and some dependencies: 
```
apt install raspberrypi-kernel-headers git libgmp3-dev gawk qpdf bison flex make
apt install automake autoconf libtool texinfo
reboot
```
4. Clone the nexmon base repository: `git clone https://github.com/seemoo-lab/nexmon.git`.
5. Go into the root directory of the repository: `cd nexmon`
6. Install additional dependencies and create symbolic links:
```
apt-get install xxd libc6:armhf libisl23:armhf libmpfr6:armhf libmpc3:armhf libstdc++6:armhf
ln -s /usr/lib/arm-linux-gnueabihf/libisl.so.23.2.0 /usr/lib/arm-linux-gnueabihf/libisl.so.10
ln -s /usr/lib/arm-linux-gnueabihf/libmpfr.so.6.2.0 /usr/lib/arm-linux-gnueabihf/libmpfr.so.4
```
7. Setup the build environment for compiling firmware patches
   * Setup the build environment: `source setup_env.sh`
   * Run `make` to extract ucode, templateram and flashpatches from the original firmwares.
8. Navigate to patches/bcm43455c0/7_45_189/ and clone this repository:
    `git clone https://github.com/grant-lewis/pi-6.6.y-nexmon_csi`
9. If necessary, grant execution permissions using `chmod +x -R $NEXMON_ROOT/patches/bcm43455c0/7_45_189/pi-6.6.y-nexmon_csi/`.
10. Then, enter the subdirectory and run `make install-firmware` to compile and install the firmware patch on the Raspberry Pi. 
11. Install nexutil: from the nexmon root directory switch to the nexutil folder: `cd utilities/nexutil/`. Compile and install nexutil: `make && make install`.
12. *Optional*: remove wpa_supplicant for better control over the WiFi interface: `apt-get remove wpasupplicant`

# References
   * https://github.com/seemoo-lab/nexmon
   * https://github.com/seemoo-lab/nexmon_csi
