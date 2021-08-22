#!/bin/bash
echo -e "\033[0;32mHow many CPU cores do you want to be used in compiling process? (Default is 1. Press enter for default.)\033[0m"
read -e CPU_CORES
if [ -z "$CPU_CORES" ]
then
	CPU_CORES=1
fi


# Compile dependencies
	cd depends
	make -j$(echo $CPU_CORES) HOST=x86_64-apple-darwin17
	cd ..

# Compile EGG
	./autogen.sh
	./configure --prefix=$(pwd)/depends/x86_64-apple-darwin17 --enable-cxx --enable-static --disable-shared --enable-hardening --disable-debug --disable-tests --disable-bench
	make -j$(echo $CPU_CORES) HOST=x86_64-apple-darwin17
	make deploy
	cd ..

# Create zip file of binaries
	cp NestEGG/src/nesteggd NestEGG/src/nestegg-cli NestEGG/src/nestegg-tx NestEGG/src/qt/nestegg-qt NestEGG/EGG.dmg .
	zip NestEGG-MacOS.zip nesteggd nestegg-cli nestegg-tx nestegg-qt EGG.dmg
	rm -f nesteggd nestegg-cli nestegg-tx nestegg-qt EGG.dmg
