---
date: 2024-08-18
tags:
  - inbox
  - SR-base
author: Julian Evans
file: ./literature/Julia Evans/So you want to be a wizard (2436)/So you want to be a wizard - Julia Evans.pdf
sr-due: 2024-08-26
sr-interval: 1
sr-ease: 216
---

# So you want to be a Wizard

[[./literature/Julia Evans/So you want to be a wizard (2436)/So you want to be a wizard - Julia Evans.pdf|Julia Evans - So you want to be a wizard]].
Tips from Julian, looks like mix of team-work and self-productive tips. Written
in [[comics]] style.

## Table of Contents, page 3

- asking questions is good
- reading the source code which knows more than you
- debugging tools are your friend
- design doc helps you to FEEL like a wizard
- building expertise, how to learn something that takes years to master?
- strategies for learning, wow I learned SO MUCH

## Asking good questions, page 6

You are working in team, do I need to ask a question?
&#10;<br>
Ask questions, don't be afraid to ask for help. If no one knows the answer, try
to figure it out anyway.

What if I'm doing something non-standard and have issues? Or I don't really
understand what I'm doing?
&#10;<br>
When you do something non-standard and have issues, you need to go deeper into
details, to understand how things working under the hood. It can be software,
hardware, or whatever.

What's a good question, some rules?
&#10;<br>
- Are easy for the person to answer, choose right one
- With answer you get **required** information
- You provide some context and information when asking, tell what you know,
guess answer, do some research before asking. With this strategy you can even
avoid asking questions that you already know the answer to, or which are too
basic or too complex.
- Choose the right person to ask, maybe less experienced, or more experienced,
depending on the question.
- Find a good time, be respectful of other people's time.
- Ask yes/no questions when possible.

## Read the source code, page 9

What if their no one knows the answer, documentation provide misinformation,
coworkers are busy, etc.? What to do?
&#10;<br>
In that situation your friend is source code, it's newer lie and can provide
required information. Sometimes you need to get your hands dirty and work with
source code: debug, test, print statements, introduce bugs and experiment with
it. Also don't always trust comments (especially yours ☺).

Strategy to read source code?
&#10;<br>
- Grep for the error message
- Read the whole code if possible (less than few thousand lines, use `cloc`)
- Edit the code 🙊, debug, test, experiment.

## Debugging: love your bugs, page 10

I got a bug, is this end of the world, how to deal with it?
&#10;<br>
Not really, debugging! **Love** your bugs. Debugging is a great way to learn and
write more reliable code (don't break things). Be confident I can fix it, you
already fixed a lot of hard bugs before. The harsh reality of bugs, they reveal
problems with your mental modal, maybe you don't know something or do it not the
right way. Bugs give you opportunity to learn something with immediate feedback.

Can I ignore bugs and think this is normal and this is some mystery?
&#10;<br>
No, bugs happened by logical reason, there are no mysteries, keep this in the
mind.

## Learning at work, page 12

Sometimes you need to learn X to do Y, good strategy (practical steps) to do it?
&#10;<br>
- Read source code
- Ask questions
- Watch talks
- Read docs/blog posts
- Do experiments <!--SR:!2024-08-23,1,210-->

More ways than debugging to work and learn "with bugs"?
&#10;<br>
- Follow up on bugs you couldn't figure out (issues)
- Volunteer to do work that seems hard
- Pay attention to other's code (PR)
- Watch more senior people operate

Is good idea to immediately integrate something which you want to learn (you
haven't enough experience) into work?
&#10;<br>
If you're learning something don't try to immediately integrate it into your
work. Need to discuss and take time to understand the new knowledge. <!--SR:!2024-08-30,7,250-->

## Learning on my own, page 13

Good strategy to learn something new?
&#10;<br>
- Go to a conference, especially in area I don't know well.
- Implement something that seems hard, I need some challenge!
- Select concept and spend few hours on it (3+).
- Try a new program, library, framework, etc.
- Do some experiments, can X do Y?
- Read a paper, Adrian "The morning Paper" is great?
- Teach someone else, event through notes

How to design software? Let's assume you worked hard on something, but at the
end you just wasted your time?
&#10;<br>
- Planning and proof of concepts are your friends.
- You can't always predict how requirements will change, try yours best to solve
current problems and try to avoid this in the future.
- Sometimes "good enough" is really awesome and this is good starting point.

## Scenes from writing desing docs, page 15

How to write design docs?
&#10;<br>
Explain current working processes, maybe you not really understand them
Ask questions and give your work for review
If someone disagree, figure out a better plan together
Design always change, this is evolving process. So try to actualize it.

## Build expertise, page 16

How to get better at X, I know a little about it? What you can do?
&#10;<br>
You need to continuously work with it, this is super fun to get better at
something. Pick something and spent **significant** amount of time on it, after
some time you'll see results. Check [[learning]] note for more information.
Today is the best day to start learning!

How to learn new skills, maybe some detailed plan to combine learning and
practice?
&#10;<br>
- First learn fundamental concepts, what is "system call" at all? At this step you
need figure out which ideas are most important and learn them! Sometimes you
need to dig in into things you don't understand.
- Do experiments, what system call in THIS program using, what's in `/proc`,
what happens if I do X or Y?
- Read books (for me, it always better method to learn)
- Do hard projects
- Learning is marathon not a sprint, find time to it and don't waste it

## Take on hard projects, page 19

How confidence helps you to learn?
&#10;<br>
There always someone who "better" than you, but you have own advantages, be
proud of you:
- You learn fast in changing world
- You work hard on projects, which really hard understand
- You have years of experience
- You are good at debugging
- Someone's great gotta do this
