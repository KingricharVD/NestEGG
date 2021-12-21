Human_Charity_Coin_Protocol Core
=============

Setup
---------------------
[Human_Charity_Coin_Protocol Core](https://www.humancharitycoin.com/) is the original Human_Charity_Coin_Protocol client and it builds the backbone of the network. However, it downloads and stores the entire history of Human_Charity_Coin_Protocol transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Human_Charity_Coin_Protocol Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/Human_Charity_Coin_Protocol-qt` (GUI) or
- `bin/Human_Charity_Coin_Protocold` (headless)

### Windows

Unpack the files into a directory, and then run Human_Charity_Coin_Protocol-qt.exe.

### macOS

Drag Human_Charity_Coin_Protocol-Qt to your applications folder, and then run Human_Charity_Coin_Protocol-Qt.

### Need Help?

* See the documentation at the [Human_Charity_Coin_Protocol Wiki](https://github.com/Human-Charity-Coin/HCCP/doc)
for help and more information.
* Join our Discord server [Discord Server](https://discord.gg/hz8YagA92t)

Building
---------------------
The following are developer notes on how to build Human_Charity_Coin_Protocol Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Human_Charity_Coin_Protocol repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://github.com/Human-Charity-Coin/HCCP/doc)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [Human_Charity_Coin_Protocol Homepage](https://www.humancharitycoin.com/).
* Join the [Human_Charity_Coin_Protocol Discord](https://discord.gg/hz8YagA92t).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
