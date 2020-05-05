
Debian
====================
This directory contains files used to package sharkcoind/sharkcoin-qt
for Debian-based Linux systems. If you compile sharkcoind/sharkcoin-qt yourself, there are some useful files here.

## sharkcoin: URI support ##


sharkcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install sharkcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your sharkcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/sharkcoin128.png` to `/usr/share/pixmaps`

sharkcoin-qt.protocol (KDE)

