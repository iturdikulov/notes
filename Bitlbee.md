---
date: 2022-12-29
sr-due: 2023-12-03
sr-ease: 270
sr-interval: 200
tags:
- inbox
- software
---

# Bitlbee

If you understand all of this and still wish to use it, see HowtoPurple and add
the account like this in &bitlbee:

`account add irc nickname@irc.example.net`

# Joining channels

Do this in &bitlbee:

`chat add irc #channel` Then `/join #channel`

# Sending private messages to users who are not in a channel

Do this in &bitlbee:

`add irc nickname` Then `/query nickname`

# Plugins

Plugin adds \'xxxx\' protocol to bitlbee, add your account as usual:
`account add xxxx <email> <password>` `account xxx on`

List & add, !1 here is channel list generated from `chat list xxxx`

```example
chat list xxxx
```

Add chat with one of this commands:

```example
chat add xxxx !1 #mydchannel
chat add <channel-name from list>
```

Configure channel and join

```example
chan #mydchannel set auto_join true
save
/join #mychannel
```

# Auto join example

    chan #python set auto_join true
    chan ##programming set auto_join true
    chan #c set auto_join true
    chan #linux set auto_join true
    chan #archlinux set auto_join true
    chan #emacs set auto_join true
