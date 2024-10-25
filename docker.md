---
date: 2023-03-12
tags:
  - inbox
sr-due: 2023-02-28
sr-interval: 3
sr-ease: 252
---
# Docker

Cleanup subvolumes, warning this is dangerous!

`docker rmi $(docker images --quiet --filter "dangling=true")`

`docker rmi $(docker images|grep aws)` TODO: not working, need to review

`docker system prune` after image cleanup.

## External links

- [ ] [Docker Tutorial for Beginners - YouTube](https://www.youtube.com/watch?v=b0HMimUb4f0)
- [ ] [Docker Cheatsheet \[2023 Updated\] – Collabnix](https://collabnix.com/docker-cheatsheet/)
- [ ] [Docker Hub Container Image Library | App Containerization](https://hub.docker.com/)
- [ ] [LinuxServer.io, ready to use containers](https://docs.linuxserver.io/)
