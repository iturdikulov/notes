---
excalidraw-plugin: parsed
tags: [excalidraw blog]
---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Excalidraw Data
## Text Elements
client ^8tctLooW

resource owner (end user) ^nrwTtUXa

1. authorization
request ^HzcDcCvX

3. authorization grant ^uXeiln3A

External authorization service (IdP) ^DAGEwXlB

4. get access token ^GTSoGOmG

Resource server ^recfrdNf

5. access token ^CQ78dPp6

6. protected resource ^0cfVT2s1

2. authorization grant ^AAaYSHBQ

a. getting authorization token ^l9TLigfu

b. requests to protected data ^dpFCPG4t

GET /oauth/authorize?response_type=code&client_id=464119& ^qYZR3J6o

< Location: http://example.com/cb/123?code=DoRieb0y ^RaleM5we

< HTTP/1.1 302 Found ^Dqqwg4j3

> grant_type=authorization_code&client_id=464119&client_secret=deadbeef&code=DoRieb0y&redirect_uri=http%3A%2F%2Fexample.com%2Fcb%2F123 ^eho8nQU2

> POST /oauth/token HTTP/1.1 ^h4U1gxUv

< HTTP/1.1 200 OK
< {
<    "access_token":"SlAV32hkKG",
<    "token_type":"bearer",
<    "expires_in":86400,
<    "refresh_token":"8xLOxBtZp8",
< } ^NAThK4J9

client_secret is APP private secret, to verify request ^5Op0aAd9

client_secret ^wnt35poK

code ^h7Cm2DL9

+ ^QXUXC6KY

Unique current user code to prevent CSRF attack  ^nM5qrdVz

%%
## Drawing
```compressed-json
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
```
%%