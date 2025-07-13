---
created: 2023-03-12T00:00+03:00
tags:
  - blog
sr-due: 2025-10-27
sr-interval: 109
sr-ease: 232
---

# Docker

Cleanup `subvolumes`, warning this is dangerous!

`docker rmi $(docker images --quiet --filter "dangling=true")`

`docker rmi $(docker images|grep aws)` TODO: not working, need to review

`docker system prune` after image cleanup.

## Learning path

- [Multi-stage](https://docs.docker.com/build/building/multi-stage/)
- [How To Deploy A Docker Image To A Server Using GitHub Actions](https://www.programonaut.com/how-to-deploy-a-docker-image-to-a-server-using-github-actions/)
- [Docker Tutorial for Beginners - YouTube](https://www.youtube.com/watch?v=b0HMimUb4f0)
- [Docker Cheatsheet \[2023 Updated\] – Collabnix](https://collabnix.com/docker-cheatsheet/)
- [Docker Hub Container Image Library | App Containerization](https://hub.docker.com/)
- [LinuxServer.io, ready to use containers](https://docs.linuxserver.io/)
- [Distroless контейнеры / Хабр](https://habr.com/ru/articles/710968/)
