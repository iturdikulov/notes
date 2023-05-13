---
date: 2022-12-29
draft: true
sr-due: 2023-04-15
sr-ease: 250
sr-interval: 25
tags:
- defenition
- inbox
---

# Bitlbee

If you understand all of this and still wish to use it, see HowtoPurple and add
the account like this in &bitlbee:

`account add irc nickname@irc.example.net`{.verbatim}

# Joining channels

Do this in &bitlbee:

`chat add irc #channel`{.verbatim} Then `/join #channel`{.verbatim}

# Sending private messages to users who are not in a channel

Do this in &bitlbee:

`add irc nickname`{.verbatim} Then `/query nickname`{.verbatim}

# Plugins

Plugin adds \'xxxx\' protocol to bitlbee, add your account as usual:
`account add xxxx <email> <password>`{.verbatim} `account xxx on`{.verbatim}

List & add, !1 here is channel list generated from `chat list xxxx`{.verbatim}

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