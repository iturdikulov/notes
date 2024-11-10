---
date: 2023-03-12
tags:
  - inbox
sr-due: 2024-01-29
sr-interval: 3
sr-ease: 268
---

# Proxy server

In [[computer_network]], [[server]] application (program) that acts as middleman
(intermediary) between a client requesting a resource and the server providing
that resource.

```
          .-~~~-.
  .- ~ ~-(       )_ _
 /                     ~ -.
|      Internet            \
 \                         .'
   ~- . _____________ . -~
    |
    | https://www.example.com (TCP 443)
    |
 [Proxy] -- (HTTPS)
    |
    | http://10.1.2.3 (TCP 80)
    |
 [Client]
```

Proxy servers usually used for:

- load balancing and caching (early traffic saver software as example)
- privacy and security
- ad blocking
- content filtering or bypassing filters and censorship
- logging and monitoring
- any traffic modification, such as translation or compression, etc.

## Types

Gateway or tunneling proxies - passes requests and responses without
modification.

Forward proxies - Internet-facing proxies, used to retrieve data from a wide
range of sources (usually from Internet).

A reverse proxy is usually an internal-facing proxy used as a front-end to
control and protect access to a server on a private network. A reverse proxy
commonly also performs tasks such as load-balancing, authentication, decryption
and caching. For example [[nginx]] Reverse Proxy.

Proxies can various levels of anonymity:

- Transparent proxy - support HTTP header fields such as X-Forwarded-For, the
  originating IP address can be retrieved as well. Support site caching.
- Anonymous proxy - server reveals its identity as a proxy server but does not
  disclose the originating IP address of the client.

## Proxy services (proxy server providers)

- [Bright Data](https://brightdata.com/)
- [Купить прокси. Персональные анонимные приватные proxy / PROXY6.net](https://proxy6.net/)
- [Бесплатные прокси](https://advanced.name/ru/freeproxy)
- [Proxy checker: verify the functionality, anonymity, and speed of proxy servers. Online, export ip-port — hidemy.name](https://hidemy.name/en/proxy-checker/)
