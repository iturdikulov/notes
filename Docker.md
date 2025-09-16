---
created: 2023-03-12T00:00+03:00
tags:
  - blog
  - work-tool-clean
external:
  - https://docs.docker.com/engine/
sr-due: 2025-10-27
sr-interval: 109
sr-ease: 232
---

# Docker

[Docker](https://docs.docker.com/engine/) simplifies app deployment by packaging programs with their environment. It includes files, env vars, dependencies, & permissions, ensuring consistent performance across different systems. Containers are like lightweight VMs, making them popular for deploying apps in a standardized way.

What is Docker container?
<span class="f"></span>
Standard unit of software that packages up code and all its dependencies so the application runs quickly and reliably from one computing environment to another.

A read-only definition of a container is ==image==.

Docker Architecture:

```
+-------------------------------+
|        Infrastructure         |
+-------------------------------+
|     Host Operating System     |
+-------------------------------+
|            Docker             |
+-------------------------------+
| App A | App B | App C | App D | App E | App F |
+-----------------------------------------------+
```

VM Architecture:

```
+-------------------------------+
|        Infrastructure         |
+-------------------------------+
|          Hypervisor           |
+-------------------------------+
| Virtual Machine | Virtual Machine | Virtual Machine |
|-----------------|-----------------|-----------------|
| Guest OS        | Guest OS        | Guest OS        |
| App A           | App B           | App C           |
+-----------------+-----------------+-----------------+
```

Is Docker container's are persistent by default (when we running new ones)?
<span class="f"></span>
No, but Docker does have ways to support "persistent state" through [storage volumes](https://docs.docker.com/storage/volumes/). They're basically a filesystem that lives outside of the container, but can be accessed by the container.

Cleanup `subvolumes`, warning this is dangerous!

`docker rmi $(docker images --quiet --filter "dangling=true")`

`docker rmi $(docker images|grep aws)` - [ ] not working, need to review

`docker system prune` after image cleanup.

## Docker commands flashcards

- List all Docker containers (running and stopped): <wbr class="f"> `docker ps [-a|--all]`
- Start a container (run) from an image, with a custom name, publish a container's port to the host (forwarding): <wbr class="f"> `docker run --name container_name -p hostport:containerport namespace/name:tag`, `docker run -d -p 8965:80 docker/getting-started:latest`.
- See the running containers: <wbr class="f"> `docker ps`
- Start or stop an existing container: <wbr class="f"> `docker start|stop container_name`. Stop send `SIGTERM` signal.
- Start and pass environment variables when running a Docker container: <wbr class="f"> `docker run -e MY_VAR=my_value my_image`
- Stop the container by issuing a `SIGKILL` signal to the container: <wbr class="f"> `docker kill container_name`
- Create persistent Docker volume: <wbr class="f"> `docker volume create volume_name`
- List Docker volumes: <wbr class="f"> `docker volume ls`
- Inspect the volume to see where it is on your local machine: <wbr class="f"> `docker volume inspect volume_name|jq .[0].Mountpoint`
- Pull an image from a Docker registry: <wbr class="f"> `docker pull image`
- Display the list of already downloaded images: <wbr class="f"> `docker images`
- Open an interactive `tty` with Bourne shell (`sh`) inside a running container: <wbr class="f"> `docker exec [-it|--interactive --tty] container_name sh`
- Remove stopped containers: <wbr class="f"> `docker rm container1 container2`
- Fetch and follow the logs of a container: <wbr class="f"> `docker logs [-f|--follow] container_name`
- Remove dangling images (isn't tagged, and isn't referenced by any container): `docker image prune`
- A stopped container's writable layers still take up disk space. To clean this up, you can use following command: <wbr class="f"> `docker container prune`
- Prune Docker volumes, not used by at least one container (dangerous): `docker volume prune`
- Docker networks don't take up much disk space, but they do create `iptables` rules, bridge network devices, and routing table entries. To clean these things up, you can use following command: `docker network prune`
- The ==`docker system prune`== command is a shortcut that prunes images, containers, and networks. Volumes aren't pruned by default, and you must specify the `--volumes` flag for `docker system prune` to prune volumes. You can limit the scope using the `--filter` flag, for example: `--filter "until=24h"` removes items older than 24 hours.

## Learning path

- [Multi-stage](https://docs.docker.com/build/building/multi-stage/)
- [How To Deploy A Docker Image To A Server Using GitHub Actions](https://www.programonaut.com/how-to-deploy-a-docker-image-to-a-server-using-github-actions/)
- [Docker Tutorial for Beginners - YouTube](https://www.youtube.com/watch?v=b0HMimUb4f0)
- [Docker Cheatsheet \[2023 Updated\] – Collabnix](https://collabnix.com/docker-cheatsheet/)
- [Docker Hub Container Image Library | App Containerization](https://hub.docker.com/)
- [LinuxServer.io, ready to use containers](https://docs.linuxserver.io/)
- [Distroless контейнеры / Хабр](https://habr.com/ru/articles/710968/)
