BB10FrLaunch
=======
BB10Frlaunch is a cmdline tool for launching internal wipe operation in Blackberry 10 devices. This is based on Sachesi open source project, UI and some unnecessary code for this purpose is removed.
 
Public release of source code on 1.6.2017.


Build Instructions
==================

Technically should work on all operating systems that support Qt. This project works with both dynamic and static builds of Qt4.8+ and Qt5.0+.

This project requires miniLZO, zlib-1.2.8, QuaZIP and OpenSSL.
For Linux and Mac, the project optionally uses libusb-1.0 for bootloader activities.
For your convenience, a snapshot of the important files from libusb-1.0, miniLZO, zlib-1.2.8 and QuaZIP have been provided. OpenSSL for Android is also provided.

On Windows, you will need to install OpenSSL to C:\openssl
