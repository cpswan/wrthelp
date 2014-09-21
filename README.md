wrthelp
=======

WRTnode package to print instructions for command line tools

This is a modified version of the example helloworld package featured in the [Openwrt development](http://wiki.wrtnode.com/index.php?title=Openwrt_development) page on the WRTnode Wiki. It prints a summary of the steps needed to get the WRTnode online from the [Starting](http://wiki.wrtnode.com/index.php?title=Starting) page of the WRTnode Wiki.

Building
--------

First build/download the WRTnode SDK. If you want a super easy way to do this then [install Docker](http://docs.docker.com/installation/) then run the SDK inside a Docker container:

```
sudo docker run -it cpswan/wrtnodesdk
cd OpenWrt-SDK-ramips-for-linux-x86_64-gcc-4.8-linaro_uClibc-0.9.33.2
```

From the root of the WRTnode SDK:

```
cd packages
git clone https://github.com/cpswan/wrthelp.git
cd ..
make menuconfig
```
Select Utilities  
Move to the wrthelp line and press Y  
Save  
Exit  
Exit  
```
make
```

Installation
------------

Copy the package onto the WRTnode:

`scp bin/ramips/packages/base/wrthelp_1_ramips_24kec.ipk root@192.168.8.1:`

On the WRTnode install the package:

`opkg install wrthelp_1_ramips_24kec.ipk`

Usage
-----

Once installed it can be run:

`wrthelp`

and it will print:

```
First run 'aps' to list access points
Find the Channel, SSID and Security
Then run 'vw' to edit the wireless config changepoints:
1. option channel
2. option ApCliSsid
3. option ApCliAuthMode
4. option ApCliEncrypType
5. option ApCliPassWord

aps:Security           vw:ApCliAuthMode/ApCliEncrypType
=======================================================
WPA1PSKWPA2PSK/TKIPAES  WPA2PSK/AES
WPA2PSK/AES             WPA2PSK/AES
WPA2PSK/TKIP            WPA2PSK/TKIP
WPAPSK/TKIPAES          WPAPSK/TKIP
WPAPSK/AES              WPAPSK/AES
WPAPSK/TKIP             WPAPSK/TKIP
WEP                     WEP/WEP

Exit vi with ':wq' then restart network with 'nr'

Run 'ia' to see that the WRTnode got a DHCP lease
```
