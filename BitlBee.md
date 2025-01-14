---
date: 2022-12-29T00:00+03:00
tags:
  - blog
external: https://www.bitlbee.org
sr-due: 2024-01-30
sr-interval: 4
sr-ease: 272
---

# Bitlbee

> BitlBee brings [[IM]] (instant messaging) to IRC clients. It's a great
> solution for people who have an IRC client running all the time and don't want
> to run an additional XMPP/Facebook/discord/whatever client.\
> — <cite>https://www.bitlbee.org/</cite>

Install the program and connect to the BitlBee server with your favorite
[[IRC]]-client. You will be force-joined into the control channel where root (the
bot, your assistant, the bee) will try to help you to get the program working.

Adding new account:

`account add irc nickname@irc.example.net`

Joining channels:

`chat add irc #channel` Then `/join #channel`

Sending private messages to users who are not in a channel:

`add irc nickname` Then `/query nickname`

## Using Plugins

Plugin adds custom protocol support to bitlbee, you can add account as usual:
```
account add plugin_name <email> <password>
account xxx on
```

List & add:

```
chat list xxxx
```

Add chat with one of these commands, `!1` here is channel ID generated from
`chat list xxxx`

```
chat add plugin_name !1 #mydchannel
chat add <channel-name from list>
```

Configure channel and join

```
chan #mydchannel set auto_join true
save
/join #mychannel
```

## Auto join example

You can set auto join for all channels you want to join automatically.

```
chan #python set auto_join true
chan ##programming set auto_join true
chan #c set auto_join true
chan #linux set auto_join true
chan #archlinux set auto_join true
chan #emacs set auto_join true
save
```
