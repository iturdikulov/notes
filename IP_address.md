---
date: 2022-12-29T00:00+03:00
tags:
  - blog
  - network
sr-due: 2024-02-02
sr-interval: 6
sr-ease: 248
---

# IP address

> An [[internet_protocol]] address (IP address) is a numerical label such as
> 192.0.2.1 that is connected to a computer network that uses the Internet
> Protocol for communcation. An IP address serves two main functions:
> [[computer_network]] interface identification and location addressing.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/IP_address)</cite>

IP address is::unique address, used to identify each computer on the internet.

IP address provided by::ICANN, and ensure that 2 organizations don't use the
same address.

## IPv4 format, 32-bit

IP address consist of::4 octets and 3 periods: `nnn.nnn.nnn.nnn nnn` - is octet,
decimal value `0-255` (256 total values). . - is period

- `1.2.3.4`
- `01.102.103.104`

## IPv6 format, 128-bit

IPv6 can have ==2== formats:

- normal, pure IPv6 format `FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF`, `FFFF` -
  is segment, total 8 segments, hexadecimal value 0-FFFF, separated by colons
  IPv6 support short notations - no leading zeros The following list shows
  examples of valid IPv6 (Normal) addresses:
  - `2001 : db8: 3333 : 4444 : 5555 : 6666 : 7777 : 8888`
  - `2001 : db8 : 3333 : 4444 : CCCC : DDDD : EEEE : FFFF`
  - `: :` (implies all 8 segments are zero)
  - `2001: db8: :` (implies that the last six segments are zero)
  - `: : 1234 : 5678` (implies that the first six segments are zero)
  - `2001 : db8: : 1234 : 5678` (implies that the middle four segments are zero)
  - `2001:0db8:0001:0000:0000:0ab9:C0A8:0102` (This can be compressed to
    eliminate leading zeros, as follows: `2001:db8:1::ab9:C0A8:102`)
- dual, IPv6 + IPv4 format Combines IPv6 and IPv4 address, and has this format:
  `FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:FFFF:nnn.nnn.nnn.nnn`

The following list shows examples of valid IPv6 (Dual) addresses:

- `2001 : db8: 3333 : 4444 : 5555 : 6666 : 1 . 2 . 3 . 4`
- `: : 11 . 22 . 33 . 44` (implies all six IPv6 segments are zero)
- `2001 : db8: : 123 . 123 . 123 . 123` (implies that the last four IPv6
  segments are zero)
- `: : 1234 : 5678 : 91 . 123 . 4 . 56` (implies that the first four IPv6
  segments are zero)
- `: : 1234 : 5678 : 1 . 2 . 3 . 4` (implies that the first four IPv6 segments
  are zero)
- `2001 : db8: : 1234 : 5678 : 5 . 6 . 7 . 8` (implies that the middle two IPv6
  segments are zero)

## IP ranges - CIDR

CIDR - ==Classless Inter-Domain Routing==, was adopted to simplify the
addressing scheme. In CIDR each subnet has own subnet mask, and the subnet mask
is part of the IP address.

### IPv4 CIDR blocks

| Address format | Difference to last address | Mask            | Addreses   | Typical use                         |
| :------------- | :------------------------- | :-------------- | :--------- | :---------------------------------- |
| a.b.c.d/32     | +0.0.0.0                   | 255.255.255.255 | 1          | Host route                          |
| a.b.c.d/31     | +0.0.0.1                   | 255.255.255.254 | 2          | Point-to-point links (RFC 3021)     |
| a.b.c.d/30     | +0.0.0.3                   | 255.255.255.252 | 4          | Point-to-point links (glue network) |
| a.b.c.d/29     | +0.0.0.7                   | 255.255.255.248 | 8          | Smallest multi-host network         |
| a.b.c.d/28     | +0.0.0.15                  | 255.255.255.240 | 16         | Small LAN                           |
| a.b.c.d/27     | +0.0.0.31                  | 255.255.255.224 | 32         |                                     |
| a.b.c.d/26     | +0.0.0.63                  | 255.255.255.192 | 64         |                                     |
| a.b.c.d/25     | +0.0.0.127                 | 255.255.255.128 | 128        | Large LAN                           |
| a.b.c.0/24     | +0.0.0.255                 | 255.255.255.0   | 256        |                                     |
| a.b.c.0/23     | +0.0.1.255                 | 255.255.254.0   | 512        |                                     |
| a.b.c.0/22     | +0.0.3.255                 | 255.255.252.0   | 1024       | Small business                      |
| a.b.c.0/21     | +0.0.7.255                 | 255.255.248.0   | 2048       | Small ISP/ large business           |
| a.b.c.0/20     | +0.0.15.255                | 255.255.240.0   | 4096       |                                     |
| a.b.c.0/19     | +0.0.31.255                | 255.255.224.0   | 8192       | ISP/ large business                 |
| a.b.c.0/18     | +0.0.63.255                | 255.255.192.0   | 16384      |                                     |
| a.b.c.0/17     | +0.0.127.255               | 255.255.128.0   | 32768      |                                     |
| a.b.0.0/16     | +0.0.255.255               | 255.255.0.0     | 65536      |                                     |
| a.b.0.0/15     | +0.1.255.255               | 255.254.0.0     | 131072     |                                     |
| a.b.0.0/14     | +0.3.255.255               | 255.252.0.0     | 262144     |                                     |
| a.b.0.0/13     | +0.7.255.255               | 255.248.0.0     | 524288     |                                     |
| a.b.0.0/12     | +0.15.255.255              | 255.240.0.0     | 1048576    |                                     |
| a.b.0.0/11     | +0.31.255.255              | 255.224.0.0     | 2097152    |                                     |
| a.b.0.0/10     | +0.63.255.255              | 255.192.0.0     | 4194304    |                                     |
| a.b.0.0/9      | +0.127.255.255             | 255.128.0.0     | 8388608    |                                     |
| a.0.0.0/8      | +0.255.255.255             | 255.0.0.0       | 16777216   | Largest IANA block allocation       |
| a.0.0.0/7      | +1.255.255.255             | 254.0.0.0       | 33554432   |                                     |
| a.0.0.0/6      | +3.255.255.255             | 252.0.0.0       | 67108864   |                                     |
| a.0.0.0/5      | +7.255.255.255             | 248.0.0.0       | 134217728  |                                     |
| a.0.0.0/4      | +15.255.255.255            | 240.0.0.0       | 268435456  |                                     |
| a.0.0.0/3      | +31.255.255.255            | 224.0.0.0       | 536870912  |                                     |
| a.0.0.0/2      | +63.255.255.255            | 192.0.0.0       | 1073741824 |                                     |
| a.0.0.0/1      | +127.255.255.255           | 128.0.0.0       | 2147483648 |                                     |
| 0.0.0.0/0      | +255.255.255.255           | 0.0.0.0         | 4294967296 | Entire IPv4 Internet                |

## IP utility

Universal network utility, which can be used to many network tasks.

- Check network interfaces::`ip [-brief] link` or `ip [-brief] address`
- Find neighbors::`ip neighbor`
- Up/down network interface::`ip link set dev eth0 up` or `ip link set dev eth0 down`

## Online tools

- [Online IP CIDR / VLSM Supernet Calculator](https://www.subnet-calculator.com/cidr.php)

### IP reputation check

- [Proxy Detection Test - Detect Proxies With Our IP Lookup](https://www.ipqualityscore.com/free-ip-lookup-proxy-vpn-test)
- [IP Address to IP Location and Proxy Information | IP2Location](https://www.ip2location.com/)
- [The Web's Largest Community Tracking Online Fraud &amp; Abuse | Project Honey Pot](http://www.projecthoneypot.org)
- [VirusTotal url scan](https://www.virustotal.com/gui/home/url)

## External links

- [ ] [Classless Inter-Domain Routing - Wikipedia](https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing)
