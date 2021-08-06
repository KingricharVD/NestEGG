#/bin/bash

cd ~
cd /usr/local/bin/
./nestegg-cli stop
rm -rf nesteggd nestegg-cli nestegg-tx
cd /root/
wget https://github.com/KingricharVD/NestEGG/releases/download/v1.5.0.0/nestegglin1.5.0.0.tar.gz
tar -xzf nestegglin1.5.0.0.tar.gz
rm -rf nestegglin1.5.0.0.tar.gz
sudo chmod 755 -R  /root/nestegg*
cd /root/.nestegg
wget https://github.com/KingricharVD/NestEGG/releases/download/v1.5.0.0/nestegglin1.5.0.0.tar.gz
tar -xzf nestegglin1.5.0.0.tar.gz
rm -rf nestegglin1.5.0.0.tar.gz
sudo chmod 755 -R  /root/.nestegg/nestegg*
cd /usr/local/bin/
wget https://github.com/KingricharVD/NestEGG/releases/download/v1.5.0.0/nestegglin1.5.0.0.tar.gz
tar -xzf nestegglin1.5.0.0.tar.gz
rm -rf nestegglin1.5.0.0.tar.gz
cd /root/.nestegg/
rm -rf nestegglin1.5.0.0.tar.gz
./nesteggd -daemon -resync
sleep 30
./nestegg-cli getinfo
