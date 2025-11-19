---
date: 2025-11-19 16:56
tags:
  - blog
---
# Quick Video Recording with OBS Automation

I enjoy automating repetitive tasks, and today I’ll show how I optimized screencasting.

In short, I made a [[Python]] script that greatly simplifies the process of naming screencasts and recording them.

![[img/obs_auto_demo.png|OBS automatization form demo]]  
_Demonstration of the script_

## Problem

[OBS](https://obsproject.com/) is a powerful tool for streaming and recording, but I’ve always disliked the complexity of managing recordings. You need to find the latest recording, rename it, check it, etc. — and this can be cumbersome, especially when you need to record frequently.

My script is designed to solve this problem.

## Solution

The script is a Python application that uses the [`obsws-python`](https://pypi.org/project/obsws-python/) library to connect with the OBS WebSocket plugin.  

This makes it possible to programmatically start and stop recordings, set file names, and much more.

### Key Features

- **Start and stop recordings with a single command:** The script can run in two modes: `record` and `stop`. You can bind these commands to hotkeys in your [[OS]].
- **Automatic file name generation:** When you start recording, the application prompts you for a file name using a small `TkInter` form, then sets the recording name and begins the screencast.
- **Simple configuration:** All script settings are stored in the `config.ini` file.

## How It Works

The script is fairly simple (about 100 lines of code). Here’s a brief overview. I deliberately used a single file to include all components (recording, forms, etc.). The code quality is medium/above average. I tested it only on Linux (Debian 13) and didn’t bother much with unit tests or other extras — adjustments may be required for your needs.

## Getting Started

First, you need to install OBS and the [`obs-websocket`](https://github.com/obsproject/obs-websocket) plugin, clone the repository with the script, install dependencies, and set up global hotkeys in your OS.

For details, I recommend checking the documentation: https://github.com/iturdikulov/obs_auto#quickstart.

## Conclusion

This script, through automation, saves me time and makes the process of recording screencasts enjoyable. It can potentially be improved further, with new features added, and so on.

