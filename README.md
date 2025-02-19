# Nexmon CSI Extractor for Raspberry Pi 5
This repository contains a patch for installing the Nexmon Channel State Information Extractor on the Raspberry Pi 5, kernel ver. 6.6.y.

## Usage
1. Edit the boot firmware configuration: `sudo nano /boot/firmware/config`
   * Add the following line: `kernel=kernel8.img`
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
5. Check if `/usr/lib/arm-linux-gnueabihf/libisl.so.10` exists, if not, compile it from source:
   `cd buildtools/isl-0.10`, `./configure`, `make`, `make install`, `ln -s /usr/local/lib/libisl.so /usr/lib/arm-linux-gnueabihf/libisl.so.10`
6. Check if `/usr/lib/arm-linux-gnueabihf/libmpfr.so.4` exists, if not, compile it from source:
   `cd buildtools/mpfr-3.1.4`,`autoreconf -f -i`, `./configure`, `make`, `make install`, `ln -s /usr/local/lib/libmpfr.so /usr/lib/arm-linux-gnueabihf/libmpfr.so.4`
8. Then you can setup the build environment for compiling firmware patches
   * Setup the build environment: `source setup_env.sh`

   * Run `make` to extract ucode, templateram and flashpatches from the original firmwares.
9. Navigate to patches/bcm43455c0/7_45_189/ and clone this repository:
    `git clone https://github.com/seemoo-lab/nexmon_csi.git`
10. Enter the created subdirectory nexmon_csi and run
    `make install-firmware` to compile our firmware patch and install it on the Raspberry Pi.
11. Install nexutil: from the nexmon root directory switch to the nexutil folder: `cd utilities/nexutil/`. Compile and install nexutil: `make && make install`.
12. *Optional*: remove wpa_supplicant for better control over the WiFi interface: `apt-get remove wpasupplicant`

# References
   * https://github.com/seemoo-lab/nexmon
   * https://github.com/seemoo-lab/nexmon_csi