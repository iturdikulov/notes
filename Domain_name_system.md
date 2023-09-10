---
date: 2022-12-29
sr-due: 2023-05-28
sr-ease: 210
sr-interval: 11
tags:
- inbox
---

# Domain Name System (DNS)

> Hierarchical and distributed naming system for computers, services, and other
> resources in the [[Internet|internet]] or other Internet Protocol (IP)
> [[Computer_network|networks]]. It associates various information with domain
> names assigned to each of the associated entities. Most prominently, it
> translates readily memorized domain names to the numerical IP addresses needed
> for locating and identifying computer services and devices with the underlying
> network protocols. The Domain Name System has been an essential component of
> the functionality of the Internet since 1985.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Domain_Name_System)</cite>

## How a website found on the internet

1.  open <http://example.com>
2.  need find IP address of example.com
3.  Places where we try to find IP address, next checked only if current one
    fails
    - Local Cache
      - browser cache
      - DNS Cache
      - Hosts File
    - Recursive DNS servers (resolver) Usually ISP DNS server, dns record can be
      cached.
    - Root DNS servers Root DNS servers are responsible for finding the relevant
      TLD server (find .com .org .io ... other TLD DNS servers).
    - Top Level DNS Servers TLD Used to find relevant NS servers for domain
      (Authoritative DNS Servers). Used DNS glue records to break loop.
    - Authoritative DNS Servers Place contains the information for the domain.
      Here we ask the A Record of the domain name, with IP address.
4.  Since we have IP address, we connect to server:port (80/443 port) and get
    for example web-page HTML code.

## Resources

- [Namecheap](https://vivaldi.com/bk/namecheap-en-us)
- [\*Nic.Name - регистрация и продление доменов .RU .SU .РФ](https://www.regnic.name/)
  https://www.cloudflare.com/
