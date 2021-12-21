
Debian
====================
This directory contains files used to package Human_Charity_Coin_Protocold/Human_Charity_Coin_Protocol-qt
for Debian-based Linux systems. If you compile Human_Charity_Coin_Protocold/Human_Charity_Coin_Protocol-qt yourself, there are some useful files here.

## Human_Charity_Coin_Protocol: URI support ##


Human_Charity_Coin_Protocol-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install Human_Charity_Coin_Protocol-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your Human_Charity_Coin_Protocol-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

Human_Charity_Coin_Protocol-qt.protocol (KDE)

