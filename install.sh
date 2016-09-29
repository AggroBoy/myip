#!/usr/bin/zsh

sudo systemctl stop myip-fcgi
sudo cp myip-fcgi.service /usr/lib/systemd/system
sudo mkdir -p /usr/share/nginx/fcgi
sudo cp myip.cgi /usr/share/nginx/fcgi
sudo mkdir -p /var/run/fcgi
sudo chown http:http /var/run/fcgi
sudo systemctl --system daemon-reload
sudo systemctl start myip-fcgi
sudo cp fcgi.conf /etc/tmpfiles.d

