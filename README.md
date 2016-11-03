# networking-kernel-module
Linux Kernel Module that monitors and can block IP traffic.

----

## Project 4: 
####Build a kernel module that monitors network traffic

In this project, you will build a kernel module that monitors network traffic. Your module should allow users to specify things like “block all network traffic” and “print network traffic info” for a specified network address.

Your application will consist of a Linux kernel module that uses netfilter (www.netfilter.org), a software packet filtering framework. Netfilter will let your kernel module register callback functions with the network stack. Netfilter is the library used by software like iptables to implement professional level firewalls.

This link will help you get started writing a module: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html

This link is a little dated (for instance, the current kernel is at version 4.x and this link describes things for 2.6), but it will also help: http://www.cs.uni.edu/~diesburg/courses/cop4610_fall10/week06/week6.pdf

The following link is the netfilter homepage, where you can find documentation about using netfilter with a kernel module: http://www.netfilter.org/

In particular, this link is an introduction to networking concepts: https://www.netfilter.org/documentation/HOWTO/networking-concepts-HOWTO-1.html

This project is challenging and you’ll need to dig into some low-level networking details.
