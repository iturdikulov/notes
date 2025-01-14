---
date: 2023-03-12T00:00+03:00
tags:
  - inbox
sr-due: 2024-01-28
sr-interval: 2
sr-ease: 247
---

# Email

- [[how_do_I_work_with_email]]

## Sending email from the command line

```sh
#!/bin/sh

# Send an email to a list of recipients
# Usage: send_email.sh <subject> <body> <recipients>

subject="$1"
body="$2"
recipients="$3"

echo "Subject: $subject"
echo "Body: $body"
echo "Recipients: $recipients"

echo "Sending email..."

# Send the email using the mail command
mail -s "$subject" "$recipients" <<< "$body"

echo "Email sent!"
```
