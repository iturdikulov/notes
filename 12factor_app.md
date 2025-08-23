---
created: 2024-12-02T15:37+03:00
tags:
  - blog
  - WEAPON
external:
  - https://12factor.net/
file: ./articles/12factor_-_12factor.epub
sr-due: 2025-07-25
sr-interval: 4
sr-ease: 217
---

# The Twelve-Factor App

Twelve-Factor application is metodology to build web apps (SaaS), required for (main concepts):
<br class="f">
- Declartive automation configurations, to minimize time and cost fow new developers joining the project.
- Provide portability between execution enviroments.
- Allow to deploy on modern cloud platforms.
- Minimal differences between development and production, enable continuous deployment.
- Support easy scaling and maintenance.
- Universal, can be used with any programming language. <!--SR:!2025-08-02,1,168-->

## 1. Codebase

Application always tracked in [[version_control]] system.

Can different applications share the same code?
<br class="f">
There is only one codebase per app, multiple app's can't share same code (need to use libraries if needed). <!--SR:!2025-08-11,18,250-->

App support many deploys (running instance of app).

## 2. Dependencies

A twelve-factor app never relies on implicit existence of system-wide package, need to use dependency isolation tools (avoid "leak in").

Do I need to isolate `curl` if it used somewhere in application?
<br class="f">
Yes, always need to use dependency declaration and isolation, it also simplifies setup for new developers. This is actual for system tools too, you need to ship imagemagik in your app if your app use it. <!--SR:!2025-08-13,20,250-->

## 3. Config

Where to store app environtment specific files?
<br class="f">
Anything which have **different value** for different environment (dev, test, prod), should be stored in repository (schemas, config files, credentials, etc.). 
- [ ] NOT CLEAR <!--SR:!2025-01-25,1,210-->

How to store config in 12-factor application, with code?
<br class="f">
Need strict separation of config from code. Validation rule: app could be made open source at any moment, without compromising security. <!--SR:!2025-08-14,13,230-->

Where to store config (various parameters)?
<br class="f">
The twelve-factor app stores config in environment variables, which have granular (change only specific config of component). Need to avoid "production", "staging" and "development" like group-based configurations/variables, instead we can use DEBUG=True, DISABLED_TASK=xxxx, etc. <!--SR:!2025-08-12,19,250-->

## 4. Backing services

What's an attacheble resource?
<br class="f">
External services (consumed over network) used as part of normal operation - MySQL, RabbitMQ, Redis, SMTP, etc. They are attacheble resources, and need to use same rules as for local resources. Resources are attacheble and detacheble, anytime you can replace broken resource with new one (restored from backup or re-initialized).
- [ ] NOT CLEAR <!--SR:!2025-08-03,2,228-->

Is there difference for 12 factor app between local and third party services (attacheble resources)?
<br class="f">
The code for a twelve-factor app makes no distinction between local and third party services, you can change local backing service with remote anytime by changing configuration. <!--SR:!2025-08-14,13,248-->

## 5. Build, release, run

Non-develpoment deployment process go through three stages:
<br class="f">

1. Build stage - transform specific code version (fixed commit) into build.
2. Release stage - combine build with deploys current config and make release ready for immediate execution.
3. Run stage - running the app in the execution environment (one or multiple processes). <!--SR:!2025-01-25,1,228-->

The twelve-factor app uses strict separation between the build, release, and run stages.

Would be good to have some rollback mechanism (depending on releasing tools).

Every release should always have a unique release ID, such as a timestamp of the release (such as 2011-04-06-20:32:17) or an incrementing number (such as v100).

Can I change something in release?
<br class="f">
Release cannot be mutated once it is created. Any change must create a new release. <!--SR:!2025-08-13,12,248-->

Run stage should be kept to as few moving parts as possible and should be automatically restarted if it crashes.

## 6. Processes

The app is executed in the execution environment as one or more processes.

What's stateless app?
<br class="f">
A stateless app is an application program that does not save client data generated in one session for use in the next session with that client. Twelve-factor processes are stateless and share-noting. Any data that needs to persist must be stored in a stateful backing service (typicaly a database). No need to synchronize server states; new instances can handle requests immediately. <!--SR:!2025-08-02,1,208-->

Can I assume that something is cached on disk and will be aviable on a future request or job?
<br class="f">
The twelve-factor app never assumes that anything cached in memory or on disk will be available on a future request or job. <!--SR:!2025-08-01,8,268-->

Can I compile assets at runtime with twelve-factor app?
<br class="f">
No, twelve-factor prefer to compile assets during the build stage, rather than at runtime. <!--SR:!2025-02-03,5,248-->

<!-- NOTE: I am not used them -->

Sticky sessions are a violation of twelve-factor and should never be used or relied upon. Session state data is a good candidate for a datastore that offers time-expiration, such as Memcached or Redis.

## 7. Port binding

What's port binding in twelve-factor app, why it's useful?
<br class="f">
The twelve-factor app is completely self-contained (does not rely on runtime injection) and exports HTTP (maybe other protocol) as a service by binding to a port and listening to requests coming in on that port. This is usually requiring to add web-server library into app to serve requests. Port-binding approach also means that one app can become the backing service for another app, by providing the URL to the backing app as a resource handle in the config for the consuming app. <!--SR:!2025-08-06,5,248-->

## 8. Concurrency

How we work with processes with twelve-factor app?
<br class="f">
In the twelve-factor app, processes are a first class citizen. Each application task type can be executed with own process (diverse workloads, many process types are good). This is Unix process model for running service daemons. <!--SR:!2024-12-08,2,248-->

Application can run many processes (process formation) in single runtime (==1;;vertical== scaling), but it must also be able to span multiple processes running on multiple physical machines (==1;;horizontal== scaling). <!--SR:!2025-08-31,30,288-->

Twelve-factor app processes should never daemonize or write PID files. Instead, rely on the operating system's process manager (systemd?, distributed process manager on a cloud platform) to manage output streams, respond to crashed processes and handle user-initiated restarts and shutdowns.

## 9. Disposability

What is process disposability (sort of one-time processes) in twelve-factor app?
<br class="f">
Processes should be disposable, they can be started or stopped a moment's notice, have a minimal startup time, shut down gracefully with SIGTERM event and be ready to sudden death (hardware failures). Graceful shutdown and sudden death sustainability could be tricky for specific process types, you need to think about architecture and design of your application which support this (job returns, lock auto-release, atomic transaction or idempotent jobs, etc.). <!--SR:!2024-12-08,2,248-->

## 10. Dev/prod parity

Twelve-factor app is designed for continuous deployment by keeping the gap between development and production environment small, which gap types you know?
<br class="f">

- Time - changes ready to go from local to prod, should be minimal (hours).
- Personnel - developer write code, ops engineer deploy it (ship app), developers closely involved in ops and able to watch their work in production (same peoples able to deploy).
- Tools - developer use stack X, on production used gap Y, should be as similar as possible. <!--SR:!2024-12-07,1,228-->

Can I use different backing services (MySQL/SQLite) on development and production?
<br class="f">
We should not use different backing services (Redis/RabbitMQ, MySQL/SQlite) on development and production, even if possible to use adapters to mix them with some abstractions (Celery, SQLAlchemy). <!--SR:!2025-08-18,17,268-->

## 11. Logs

Do twelve-factor app manage own logs?
<br class="f">
Twelve-factor app never concerns itself with routing or storage of its output stream (logs data). It should not attempt to write to or manage logfiles. Each running process writes its event stream, unbuffered, to stdout. <!--SR:!2025-02-05,7,250-->

How to logs are managed with twelve-factor app?
<br class="f">
In staging or production deploys, each process’ stream will be captured by the execution environment, collated together with all other streams from the app, and routed to one or more final destinations for viewing and long-term archival (log routers, log indexing and analysis system), app even can't accss to final logs destinations. <!--SR:!2024-12-08,2,248-->

## 12. Admin processes

How to execute one-time admin processes with twelve-factor app?
<br class="f">
One-off admin processes should be run in an identical environment as the regular long-running processes of the app. They run against a release, using the same codebase and config (equal environment) as any process run against that release. Admin code must ship with application code to avoid synchronization issues. The same dependency isolation techniques should be used on all process types. How you run usual processes (through some wrapper, or tool), you also run admin processes. Python program using Virtualenv should use the vendored bin/python for running both the `webserver` and any `manage.py` admin processes. <!--SR:!2024-12-07,1,228-->

Is REPL shell required for twelve-factor app?
<br class="f">
Twelve-factor strongly favors languages which provide an REPL shell out of the box, and which make it easy to run one-off scripts. In a local deploy, developers invoke one-off admin processes by a direct shell command inside the app’s checkout directory. In a production deploy, developers can use ssh or other remote command execution mechanism provided by that deploys execution environment to run such a process. <!--SR:!2025-07-29,5,248-->
