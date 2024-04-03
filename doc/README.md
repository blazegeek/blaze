GeekCash 1.3.0
=====================

This is the un-official reference wallet for GeekCash digital currency and comprises the backbone of the GeekCash peer-to-peer network. You can [build it yourself](#building) using the guides below.

Running
---------------------
The following are some helpful notes on how to run GeekCash on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/blaze-qt` (GUI) or
- `bin/blazed` (headless)

### Windows

Unpack the files into a directory, and then run blaze-qt.exe.

### OS X

Drag Blaze-Qt to your applications folder, and then run Blaze-Qt.

### Need Help?

* Visit [blazegeek](https://www.blazegeek.com) for more information.

Building
---------------------
The following are developer notes on how to build GeekCash on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OS X Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [OpenBSD Build Notes](build-openbsd.md)

Development
---------------------
The GeekCash repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- Source Code Documentation ***TODO***
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [Travis CI](travis-ci.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
