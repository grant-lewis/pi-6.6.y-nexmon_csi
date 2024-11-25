# Nexmon for Raspberry Pi 5
This repository would contain changes for building Nexmon on Raspberry Pi 5 (Kernel ver. 6.6.y) using patches available from the Nexmon home repository.
It is a work in progress.

# Nexmonster / nexmon_csi

Nexmonster is a group of people trying to provide excellent documentation, and an easy installation experience for [seemoo-lab/nexmon_csi](https://github.com/seemoo-lab/nexmon_csi).

We primarily support Raspberry Pi (3B+ and 4), and Asus RT-AC86U. If you need help with other devices, please create an Issue :)

If you're using Nexmon_CSI, please let me know via email (aravind.reddy@iiitb.org) or [Discussions](https://github.com/nexmonster/nexmon_csi/discussions) and I'll feature your work.

# Collecting CSI

#### Raspberry Pi

Checkout https://github.com/nexmonster/nexmon_csi_bin for pre-compiled nexmon_csi binaries.

Pi Version | Kernel Version | Link | Notes
---|---|---|---
Pi 3B+ and 4 | 5.10.92 | https://github.com/nexmonster/nexmon_csi/tree/pi-5.10.92 | This is the **recommended** version with RSSI and FC.
Pi 3B+ and 4 | 5.4.51  | https://github.com/nexmonster/nexmon_csi/tree/pi-5.4.51  | Uses the legacy 5.4.51 Kernel with old packet format.
Pi 3B+ and 4 | 5.4.51  | https://github.com/nexmonster/nexmon_csi/tree/pi-5.4.51-plus | Like 5.4.51, but includes more data like RSSI, Source and Destination Mac ID. Use https://github.com/zeroby0/csi-explorer to plot data.
Pi 3B+ and 4 | 4.19.97 | https://github.com/nexmonster/nexmon_csi/tree/pi-4.19.97 | Uses the legacy 4.19.97 Kernel. Use this if you're facing problems with other versions, or you need to use Kernel v4.19.97 for some reason.


#### Asus RT-AC86U

Device | Link | Notes
---|---|---
RT-AC86U | https://github.com/nexmonster/nexmon_csi/discussions/2 | Short and Quick guide using precompiled binaries
RT-AC86U | https://github.com/nexmonster/nexmon_csi/discussions/7 | Longer guide that shows how to compile from source


# Analysing CSI

Name | Devices | Language | Link | Notes 
---|---|---|---|---
CSIKit | Several devices | Python | https://github.com/Gi-z/CSIKit | A feature rich decoder supporting many input formats and sources
CSI Explorer 2.0 | Raspberry Pi 3B+ and 4B | Python | https://github.com/nexmonster/nexmon_csi/tree/feature/python/utils/python | CSI decoder and plotter optimised for speed. You can embed it into your scripts to read CSI and process it
CSI Explorer | Raspberry Pi 3B+ and 4B | Python | https://github.com/zeroby0/csi-explorer | CSI reader designed for 5.4.51-plus branch

# Publications using CSI


- [Yu, J., Wang, P., Koike-Akino, T., Wang, Y., Orlik, P. V., & Sun, H. (2020, December). Human Pose and Seat Occupancy Classification with Commercial MMWave WiFi. In 2020 IEEE Globecom Workshops (GC Wkshps (pp. 1-6). IEEE.](https://ieeexplore.ieee.org/document/9367535)
- [A. R. Voggu, V. Vazhayil and M. Rao, "Decimeter Level Indoor Localisation with a Single WiFi Router using CSI Fingerprinting," 2021 IEEE Wireless Communications and Networking Conference (WCNC), 2021, pp. 1-5, doi: 10.1109/WCNC49053.2021.9417483.](https://www.avoggu.com/papers/1570682474.pdf)

Email me at aravind.reddy@iiitb.org to have your work featured here.

## Members, Crediting, Contribution, and other stuff

Currently we are
* [@zeroby0](https://github.com/zeroby0) - Aravind Voggu
* [@Gi-z](https://github.com/Gi-z) - Glenn Forbes
* [@tweigel-dev](https://github.com/tweigel-dev) - Thomas Weigel

I'm looking for PhD Positions in Wireless research. Please let me know if you're interested: https://www.avoggu.com/contact/ Thanks :)

If you would like to help out, please create a [Discussion](https://github.com/nexmonster/nexmon_csi/discussions). Please create an Issue before starting a Pull Request.

If the documentation and scripts here helped you, I would really appreciate it if you credit this repo and the [seemoo-lab/nexmon_csi](https://github.com/seemoo-lab/nexmon_csi) project :)
