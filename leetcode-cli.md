---
created: 2024-11-07T09:54+03:00
tags:
  - blog
external:
  - https://github.com/clearloop/leetcode-cli
sr-due: 2025-07-22
sr-interval: 1
sr-ease: 146
---

# `leetcode-cli`

[[CLI]] tool to interact with [[LeetCode]], it's simplify process and give you
tool to automate test submissions, list problems, etc.

Typical workflow:

1. List problems: `leetcode l stack`, `stack` is optional filter.
2. Pick (save & read) problem in configured directory: `leetcode p 155|less`.
3. Edit problem in configured editor: `leetcode e <problem_id>`.
4. Test problem: `leetcode t <problem_id>`.
5. Submit (eXecute) problem: `leetcode x <problem_id>`.

Example of output:

<iframe src="file:///home/inom/Wiki/stdout_leetcode-cli.html" width="800" height="300"></iframe>