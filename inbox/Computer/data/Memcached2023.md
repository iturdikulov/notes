---
external: https://en.wikipedia.org/w/index.php?title=Memcached&oldid=1146819359
date: '2023-08-18'
tags:
- research
- inbox
---

# Memcached

Memcached (pronounced variously mem-cash-dee or mem-cashed) is a general-purpose distributed memory-caching system. It is often used to speed up dynamic database-driven websites by caching data and objects in RAM to reduce the number of times an external data source (such as a database or API) must be read. Memcached is free and open-source software, licensed under the Revised BSD license. Memcached runs on Unix-like operating systems (Linux and macOS) and on Microsoft Windows. It depends on the libevent library.
Memcached's APIs provide a very large hash table distributed across multiple machines. When the table is full, subsequent inserts cause older data to be purged in least recently used (LRU) order. Applications using Memcached typically layer requests and additions into RAM before falling back on a slower backing store, such as a database.
Memcached has no internal mechanism to track misses which may happen. However, some third party utilities provide this functionality.
Memcached was first developed by Brad Fitzpatrick for his website LiveJournal, on May 22, 2003. It was originally written in Perl, then later rewritten in C by Anatoly Vorobey, then employed by LiveJournal. Memcached is now used by many other systems, including YouTube, Reddit, Facebook, Pinterest, Twitter, Wikipedia, and Method Studios. Google App Engine, Google Cloud Platform, Microsoft Azure, IBM Bluemix and Amazon Web Services also offer a Memcached service through an API.
