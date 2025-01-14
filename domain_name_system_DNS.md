---
date: 2022-12-29
tags:
  - inbox
sr-due: 2024-02-01
sr-interval: 4
sr-ease: 249
---

# Domain Name System (DNS)

> Hierarchical and distributed naming system for computers, services, and other
> resources in the [[internet]] or other Internet Protocol (IP)
> [[computer_network|networks]]. It associates various information with domain
> names assigned to each of the associated entities. Most prominently, it
> translates readily memorized domain names to the numerical IP addresses needed
> for locating and identifying computer services and devices with the underlying
> network protocols. The Domain Name System has been an essential component of
> the functionality of the Internet since 1985.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/Domain_Name_System)</cite>

## How a website found on the internet

1.  open [http://example.com](http://example.com)
2.  need to find IP address of example.com
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

## External links

- [ ] [What is DNS? | How DNS works | Cloudflare](https://www.cloudflare.com/learning/dns/what-is-dns/)
- [ ] [What is a Domain Name? - Learn web development | MDN](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_domain_name)
- [ ] [DNS 101 Miniseries - #1 - What does DNS do ? - YouTube](https://www.youtube.com/watch?v=zEmUuNFBgN8)
- [ ] [How DNS works. What is DNS? Learn how step by step.](https://howdns.works/)
- [ ] [What is a Domain Name? - A Beginners Guide to How Domain Names Work! - YouTube](https://www.youtube.com/watch?v=Y4cRx19nhJk)
- [ ] [DNS - MDN Web Docs Glossary: Definitions of Web-related terms | MDN](https://developer.mozilla.org/en-US/docs/Glossary/DNS)

- [Your New Favorite Domain Registrar | iwantmyname](https://iwantmyname.com/)
- [Namecheap](https://vivaldi.com/bk/namecheap-en-us)
- [\*Nic.Name - регистрация и продление доменов .RU .SU .РФ](https://www.regnic.name/)
- [Cloudflare Registrar | New Domain Registration | Cloudflare](https://www.cloudflare.com/products/registrar/)
