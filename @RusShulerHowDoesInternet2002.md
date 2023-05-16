---
title: How Does the Internet Work?
author:  Rus Shuler
date: 2002
dateAdded: 2023-02-19
canonicalUrl: https://web.stanford.edu/class/msande91si/www-spr04/readings/week1/InternetWhitepaper.htm
citekey: RusShulerHowDoesInternet2002
tags:
    - research
    - inbox
localLibrary: zotero://select/items/1_7G5QQNSC
cloudLibrary: http://zotero.org/users/9108355/items/7G5QQNSC
draft: true
sr-due: 2023-08-09
sr-interval: 84
sr-ease: 248
---

How does the Internet work? Good question! The Internet's growth has become explosive and it seems impossible to escape the bombardment of www.com's seen constantly on television, heard on radio, and seen in magazines. Because the Internet has become such a large part of our lives, a good understanding is needed to use this new tool most effectively.

This whitepaper explains the underlying infrastructure and technologies that make the Internet work. It does not go into great depth, but covers enough of each area to give a basic understanding of the concepts involved. For any unanswered questions, a list of resources is provided at the end of the paper. Any comments, suggestions, questions, etc. are encouraged and may be directed to the author at rshuler@gobcg.com.

## Where to Begin? Internet Addresses

What is DHCP?
?
DHCP - Dynamic Host Configuration Protocol, used to assign IP addresses to devices on a network. Device can have permanent IP address or DHCP can assign a temporary IP address to the device.

What ping program does?
?
It sends ICMP echo request packets to a host and waits for ICMP echo reply packets to come back. Ping progam count the number of packets sent and received and calculates the round trip time for each packet. Additionaly, it can provide statistics about the packets sent and received.

What is round trip time?
?
In telecommunications, round-trip delay (RTD) or round-trip time (RTT) is the amount of time it takes for a signal to be sent plus the amount of time it takes for acknowledgement of that signal having been received. This time delay includes propagation times for the paths between the two communication endpoints.
In the context of computer networks, the signal is typically a data packet. RTT is also known as ping time, and can be determined with the ping command.

## Protocol Stacks and Packet

Which layers containt Internet Protocol? Can you shortly describe them?
?
- application - user-invoked applicaton programs which process data in the required form.
- transport - The primary purpose of the transport layer is to provide communication from one application program to another.
- internet Protocol - The Internet Protocol layer handles communication from one machine to another.
- device driver (Network Interface) - responsible for accepting packets and transmitting them over a specific network. A network interface might consist of a device driver or a complex subsystem that uses its own data link protocol.

