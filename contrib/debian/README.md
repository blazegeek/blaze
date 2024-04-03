
Debian
====================
This directory contains files used to package blazed/blaze-qt
for Debian-based Linux systems. If you compile blazed/blaze-qt yourself, there are some useful files here.

## geekcash: URI support ##


blaze-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install blaze-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your blaze-qt binary to `/usr/bin`
and the `../../share/pixmaps/geekcash128.png` to `/usr/share/pixmaps`

blaze-qt.protocol (KDE)

