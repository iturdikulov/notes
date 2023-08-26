---
canonicalUrl: https://en.wikipedia.org/w/index.php?title=Diceware&oldid=1164655404
date: '2023-08-19'
tags:
- research
- inbox
---

# Diceware

Diceware is a method for creating passphrases, passwords, and other cryptographic variables using ordinary dice as a hardware random number generator. For each word in the passphrase, five rolls of a six-sided die are required. The numbers from 1 to 6 that come up in the rolls are assembled as a five-digit number, e.g. 43146. That number is then used to look up a word in a cryptographic word list. In the original Diceware list 43146 corresponds to munch. By generating several words in sequence, a lengthy passphrase can thus be constructed randomly.
A Diceware word list is any list of 65 = 7776 unique words, preferably ones the user will find easy to spell and to remember. The contents of the word list do not have to be protected or concealed in any way, as the security of a Diceware passphrase is in the number of words selected, and the number of words each selected word could be taken from. Lists have been compiled for several languages, including Basque, Bulgarian, Catalan, Chinese, Czech, Danish, Dutch, English, Esperanto, Estonian, Finnish, French, German, Greek, Hebrew, Hungarian, Italian, Japanese, Latin, Māori, Norwegian, Polish, Portuguese, Romanian, Russian, Slovak, Slovenian, Spanish, Swedish and Turkish.
The level of unpredictability of a Diceware passphrase can be easily calculated: each word adds 12.9 bits of entropy to the passphrase (that is,




          log

            2


        ⁡
        (

          6

            5


        )


    {\displaystyle \log _{2}(6^{5})}
   bits). Originally, in 1995, Diceware creator Arnold Reinhold considered five words (64.6 bits) the minimal length needed by average users. However, in 2014 Reinhold started recommending that at least six words (77.5 bits) be used.This level of unpredictability assumes that potential attackers know three things: that Diceware has been used to generate the passphrase, the particular word list used, and exactly how many words make up the passphrase. If the attacker has less information, the entropy can be greater than 12.9 bits/word.
The above calculations of the Diceware algorithm's entropy assume that, as recommended by Diceware's author, each word is separated by a space. If, instead, words are simply concatenated, the calculated entropy is slightly reduced due to redundancy; for example, the three-word Diceware phrases "in put clammy" and "input clam my" become identical if the spaces are removed.