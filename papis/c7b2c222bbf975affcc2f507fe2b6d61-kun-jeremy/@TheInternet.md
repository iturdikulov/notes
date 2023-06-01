---
title: The internet, explained
author:  Timothy B. Lee
date: 2014-06-16T16:55:00-04:00
dateAdded: 2023-02-18
canonicalURL: https://www.vox.com/2014/6/16/18076282/the-internet
canonicalLinkText: The internet, explained
citekey: TimothyBLeeInternetExplained2014
tags:
    - research
    - inbox
localLibrary: zotero://select/items/1_63C78TWW
cloudLibrary: http://zotero.org/users/9108355/items/63C78TWW
draft: true
sr-due: 2023-08-07
sr-interval: 82
sr-ease: 248
---


Began as research project in 1969 (ARPANET), commercial network in the 1990s.

Features:

-   decentralized (no one runs the internet)
-   web protocol's
-   traffic exchange based on voluntary interconnection agreements
-   technical standarts for internet are managed by Internet Engineering Task Force
-   ICANN - provide domain names and IP address, it's not control technical stuff of internet.

The last mile: - part, that connects home and small business to the internet.

Data centers - full of servers, which do data processing. Usually located where electricity is cheap.

The backbone - long-distance network that carry data between data-centers and consumers.

Frequently connected together at internet exchange points.

1973 - TCP/IP standart created, it's next generation standart for the ARPANET.
ARAPANET switched to TCP/IP in 1983.

In 1980's internet funding switched from the military to National Science Foundation.ICANN

There are 2 basic types of wireless internet access: wifi and cellular.
WiFi use unlicensed spectrum.

Cellular networks work by breaking up the service territory into cells, each cell has a tower.
When device move from one cell area to other, the network hands off the device from one tower to another.

Cloud computing - provide to consumers computing as a utility, leaving the technical details to technology companies.
Examples: cloud office suite, email services, remote storage, etc.

Packet - basic unit of information transmitted over the internet.
Splitting information into chunks, allow the network's capacity to be used more efficiently.
Packet has 2 parts (size for IPv6 is 65575, ~65KB):

-   header, length of packet, source and destination, checksum to validate packet (for IPv6 40 byte).
-   payload, actual data (for IPv6 65535 bytes)

WWW - World Wide Web, created by Timothy Bearners-Lee in CERN, 1991.
Offered more powerfula and user-friendly interface than other internet applications (hypertext).
The web supported hyperlinks.

In 1994, Berners-Lee created the World Wide Web Consortium (W3C), the web's official standarts organization.
<https://www.w3.org/Consortium/Member/List>

Web and Internet is different things. Web is just one of many internet applications.
Web browser is a computer program that allows user to view websites and download them.
First widely used browser was Mosaic. The Mosaic team moved to California to found Netscape, first commercially successful web browser in 1994.

SSL - Secure Sockets Layer, family of encryption technologies that allows web users to protect the privacy of information they transmit over the internet.
SSL transforming your data into coded message, that only the recipient knows how to decipher.
Introduced in Netscape.
SSL use asymmetric encryption, asymmetric Encryption, also known as Public-Key Cryptography. Unlike “normal” (symmetric) encryption, Asymmetric Encryption encrypts and decrypts the data using two separate yet mathematically connected cryptographic keys. These keys are known as a ‘Public Key’ and a ‘Private Key.’ Together, they’re called a ‘Public and Private Key Pair.’

[ ] TODO Assymetric Encryption

DNS - Domain Name System. It's hierarchical.
.com - Verisign
google.com - Google
mail.google.com - Google


DNSSEC - increase DNS security with encryption.
The Domain Name System Security Extensions (DNSSEC) is a suite of extension specifications by the Internet Engineering Task Force (IETF) for securing data exchanged in the Domain Name System (DNS) in Internet Protocol (IP) networks.

ICCANN administrate domain name system.
There are 2 types of domain names:

-   top-level domains gTLDs (.com, .edu, .org, .gov), autorithy delegated to private organization's. In 2011 ICANN voted to make easier to create new gTLDs, and hundreds of new domains created in result. <https://data.iana.org/TLD/tlds-alpha-by-domain.txt>
-   country-code top-level domains ccTLDs (.us, .uk, .cn, .ru) - administrated by authorities in each country.

Bandwidth - the maximum amount of data transmitted over an internet connection in a given amount of time.

Bandwidth is often mistaken for internet speed when it's actually the volume of information that can be sent over a connection in a measured amount of time – calculated in megabits per second (MB's).


## The Internet {#the-internet}



#### Front {#front}

Which facts of IP address you know:

-   what is IP address and why it's used?
-   who provide IP address?
-   IPv4 form and amount of addresses
-   IPv6 form and amount of addresses


#### Back {#back}

IP - internet protocol address, used to identify each computer in the internet.
IP address provided by ICANN, and ensure that 2 organizations don't use the same address.
IPv4 address form is nnn.nnn.nnn.nnn where nnn is number in 0-255 range.
IPv4 - provide about 4 billion IP addresses.

IPv6 - provide about 340 trillion trillion trillion IP addresses.
FFFF : FFFF : FFFF : FFFF : FFFF : FFFF : FFFF : FFFF
FFFF - is segment, total 8 segments, hexadecimal value 0-FFFF, separated by colons


### IP v4 octects {#ip-v4-octects}


#### Front {#front}

127.0.0.1 - Can you describe each octect of IPv4 address (what they meaning).


#### Back {#back}

Country/network region/network subnetwork/ device


### TCP/IP stack {#tcp-ip-stack}


#### Front {#front}


#### Back {#back}


What's the internet?
?
Internet is the most largest and popular computer network in the world. It's a network of networks.

Part of the internet that connects homes and small businesses, towers to allow cell phones to access the internet are called?
?
The last mile.

What is data center?
?
Data centers are places with rooms of full of servers that store user data and host some services (public/private), like Google and Facebook.
<!--SR:!2023-02-24,2,246-->

What is backbone?
?
Backbone is the part of the internet that connects data centers and customers.
<!--SR:!2023-02-24,2,246-->

What is Internet Exchange Point?
?
An Internet exchange point (IXP) is a physical location through which Internet infrastructure companies such as Internet Service Providers (ISPs) and CDNs connect with each other.
https://www.cloudflare.com/learning/cdn/glossary/internet-exchange-point-ixp/
<!--SR:!2023-02-25,2,244-->

Does first ARPANET used TCP/IP?
?
No, first ARPANET used NCP (Network Control Protocol) and switched to TCP/IP in 1983.
<!--SR:!2023-02-24,2,246-->

What is TCP/IP?
?
TCP/IP is a set of protocols that allow computers to communicate over the internet.

Who owns the internet?
?
No one owns the internet. It's a global network of networks.
<!--SR:!2023-02-25,2,226-->

What's is Internet Engineering Task Force?
?
IETF is a non-profit organization that manage the internet standards, to make the internet work.
<!--SR:!2023-02-25,3,250-->

What's is Internet Corporation for Assigned Names and Numbers?
?
ICANN is a non-profit organization that manage the internet domain names and IP addresses. ICANN also ensure for unique names and addresses.

What's is IP address?
?
IP address is a unique number that identifies a device on the internet. It's a 32-bit number (IPv4), written in decimal, separated by dots.

How much IPv4 addresses are available?
?
There are 4,294,967,296 IPv4 addresses available.
<!--SR:!2023-02-25,2,230-->

How much IPv6 addresses are available?
?
There are 340,282,366,920,938,463,463,374,607,431,768,211,456 IPv6 addresses available. It's 2^128 or 340 trillion trillion trillion IP addresses.

What is cloud computing?
?
Cloud computing is the on-demand availability of computer system resources, especially data storage (cloud storage) and computing power, without direct active management by the user. https://en.wikipedia.org/wiki/Cloud\_computing

Why we need split information into packets to transfer it over the internet/network?
?
Small digestible pieces of information are easier to transfer over the internet/network.

Who can reject a packet, sender/destination?
?
Only the destination can reject a packet. Sender's must verify that the packet was received.
<!--SR:!2023-02-24,2,246-->

When World Wide Web was created, main concept?
?
World Wide Web was created in 1989 by Tim Berners-Lee. It's a system of interlinked hypertext documents accessed by the HTTP protocol.
<!--SR:!2023-02-23,1,226-->

Is Web and Internet the same thing?
?
No, the web is just one of many internet applications, such email, FTP, usenet, bittorrent, ssh, etc.
<!--SR:!2023-02-24,2,246-->

First web browser is?
?
First browser is Mosaic, created by Marc Andreessen and Eric Bina in 1993.
https://en.wikipedia.org/wiki/Mosaic_(web_browser)
<!--SR:!2023-02-24,2,246-->

Wha't is SSL?
?
SSL is a protocol that provides security for the internet. It's used to encrypt the data that we send over the internet.
Secure Sockets Layer (SSL) is a security protocol that provides privacy, authentication, and integrity to Internet communications. SSL eventually evolved into Transport Layer Security (TLS).
<!--SR:!2023-02-25,2,244-->

Why DNS is required?
?
DNS is required to use human-readable domain names instead of IP addresses.

How DNS is structured?
?
DNS is structured in a tree-like structure, with the root at the top, then the TLDs, then the second-level domains, subdomains, and finally the hostnames.
<!--SR:!2023-02-24,2,246-->

Who administers the DNS?
?
DNS is administered by ICANN, which is a non-profit organization that manages the internet domain names and IP addresses.
<!--SR:!2023-02-24,2,246-->

Which domain types exist?
?
There are two types of domains: gTLDs (generic top-level domains, like com - verisign, org) and ccTLDs (country-code top-level domains). gTLDs are administered by ICANN, while ccTLDs are administered by authorities in each
country.
<!--SR:!2023-02-25,2,230-->

Who created the internet?
?
The internet was created by the US Department of Defense in 1969, organization called ARPA (Advanced Research Projects Agency).
<!--SR:!2023-02-24,2,246-->

What is a packet?
?
A packet is a small digestible piece of information that contains header and data. Each packet has a port number, destination adderss, a source address, and a checksum.
Header contains information about the packet, like source and destination IP addresses, checksum, etc. Data is the actual information that we want to transfer.

