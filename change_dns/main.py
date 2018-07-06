#!/usr/bin/env python3

file = open("/etc/resolv.conf", "w")

file.write("nameserver 8.8.8.8\r\n")
file.write("nameserver 8.8.4.4\r\n")

file.flush()
file.close()

file = open("/etc/resolv.conf", "r")
lines = file.readlines()

for l in lines:
    print(l, end="")
