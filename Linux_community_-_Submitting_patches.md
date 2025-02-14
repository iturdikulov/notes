---
date: 2023-09-18T00:00+03:00
tags:
  - blog
  - VCS
  - article_annotation
external:
  - https://www.kernel.org/doc/html/latest/process/submitting-patches.html
  - https://www.kernel.org/doc/html/latest/process/submit-checklist.html
sr-due: 2024-06-06
sr-interval: 133
sr-ease: 230
---

# Submitting patches: the essential guide to getting your code into the kernel

I think this is good material to build requirements for committing into VCS.

I read this article and leaved some most important notes for me.

## Describe your changes

No matter how big is patch, describe what motivated you to do this work. It can
be some problem or some new feature.

> Describe user-visible impact. Straight up crashes and lockups are pretty
> convincing, but not all bugs are that blatant.

I understand this as: describe what will be changed for users, maybe some weird
issue will be fixed, or performance will be improved, etc.

> Quantify optimizations and trade-offs.

I fixed that, but it cost this...

> Once the problem is established, describe what you are actually doing about it
> in technical detail. It's important to describe the change in plain English
> for the reviewer to verify that the code is behaving as you intend it to.

Covered xxx function with unit test to prevent regression in the future.

Follow commit format, TODO discover it.

Solve only **one problem**. If your description starts to get long, that's
a sign that you probably need to split up your patch.

Describe your changes in imperative mood, e.g. "make xyzzy do frotz" instead of
"\[This patch\] makes xyzzy do frotz" or "\[I\] changed xyzzy to do frotz", as
if you are giving orders to the codebase to change its behaviour.

Put full context in commit message. Avoid things like commit versions, etc. Or
at least make sure message can explain all without external context.
If you want to refer to a specific commit, don't just refer to the SHA-1 ID of
the commit. Please also include the oneline summary of the commit, to make it
easier for reviewers to know what it is about. Example:

> Commit e21d2170f36602ae2708 ("video: remove unnecessary
> platform\_set\_drvdata()") removed the unnecessary platform\_set\_drvdata(),
> but left the variable "dev" unused, delete it.

You should also be sure to use at least the first twelve characters of the SHA-1
ID. This allows to avoid collisions now and in future.

If related discussions or any other background information behind the change can
be found on the web, add 'Link:' tags pointing to it. If the patch is a result
of some earlier mailing list discussions or something documented on the web,
point to it. Please check the link to make sure that it is actually working and points to the
relevant message.

In case your patch fixes a bug, use the 'Closes:' tag with a URL referencing the
report in the mailing list archives or a public bug tracker. For example:

Some bug trackers have the ability to close issues automatically when a commit
with such a tag is applied. Some bots monitoring mailing lists can also track
such tags and take certain actions. Private bug trackers and invalid URLs are
forbidden.

<!-- TODO: I stopped here -->
If your patch fixes a bug in a specific commit, e.g. you found an issue using
`git bisect`, please use the 'Fixes:' tag with the first 12 characters of the
SHA-1 ID, and the one line summary. Do not split the tag across multiple lines,
tags are exempt from the "wrap at 75 columns" rule in order to simplify parsing
scripts. For example:

Fixes: 54a4f0239f2e ("KVM: MMU: make kvm\_mmu\_zap_page() return the number of
pages it actually freed")

The following `git config` settings can be used to add a pretty format for
outputting the above style in the `git log` or `git show` commands:

\[core\] abbrev = 12 \[pretty\] fixes = Fixes: %h (\\"%s\\")

An example call:

$ git log -1 --pretty=fixes 54a4f0239f2e Fixes: 54a4f0239f2e ("KVM: MMU: make
kvm\_mmu\_zap_page() return the number of pages it actually freed")

## Separate your
changes[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#separate-your-changes
"Permalink to this heading")

Separate each **logical change** into a separate patch.

For example, if your changes include both bug fixes and performance enhancements
for a single driver, separate those changes into two or more patches. If your
changes include an API update, and a new driver which uses that new API,
separate those into two patches.

On the other hand, if you make a single change to numerous files, group those
changes into a single patch. Thus a single logical change is contained within a
single patch.

The point to remember is that each patch should make an easily understood change
that can be verified by reviewers. Each patch should be justifiable on its own
merits.

If one patch depends on another patch in order for a change to be complete, that
is OK. Simply note **"this patch depends on patch X"** in your patch
description.

When dividing your change into a series of patches, take special care to ensure
that the kernel builds and runs properly after each patch in the series.
Developers using `git bisect` to track down a problem can end up splitting your
patch series at any point; they will not thank you if you introduce bugs in the
middle.

If you cannot condense your patch set into a smaller set of patches, then only
post say 15 or so at a time and wait for review and integration.

## Style-check your
changes[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#style-check-your-changes
"Permalink to this heading")

Check your patch for basic style violations, details of which can be found in
[Linux kernel coding
style](https://www.kernel.org/doc/html/latest/process/coding-style.html).
Failure to do so simply wastes the reviewers time and will get your patch
rejected, probably without even being read.

One significant exception is when moving code from one file to another -- in
this case you should not modify the moved code at all in the same patch which
moves it. This clearly delineates the act of moving the code and your changes.
This greatly aids review of the actual differences and allows tools to better
track the history of the code itself.

Check your patches with the patch style checker prior to submission
(scripts/checkpatch.pl). Note, though, that the style checker should be viewed
as a guide, not as a replacement for human judgment. If your code looks better
with a violation then its probably best left alone.

The checker reports at three levels:

- ERROR: things that are very likely to be wrong

- WARNING: things requiring careful review

- CHECK: things requiring thought


You should be able to justify all violations that remain in your patch.

## Select the recipients for your
patch[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#select-the-recipients-for-your-patch
"Permalink to this heading")

You should always copy the appropriate subsystem maintainer(s) and list(s) on
any patch to code that they maintain; look through the MAINTAINERS file and the
source code revision history to see who those maintainers are. The script
scripts/get\_maintainer.pl can be very useful at this step (pass paths to your
patches as arguments to scripts/get\_maintainer.pl). If you cannot find a
maintainer for the subsystem you are working on, Andrew Morton
([akpm@linux-foundation.org](mailto:akpm%40linux-foundation.org)) serves as a
maintainer of last resort.

[linux-kernel@vger.kernel.org](mailto:linux-kernel%40vger.kernel.org) should be
used by default for all patches, but the volume on that list has caused a number
of developers to tune it out. Please do not spam unrelated lists and unrelated
people, though.

Many kernel-related lists are hosted on vger.kernel.org; you can find a list of
them at
[http://vger.kernel.org/vger-lists.html](http://vger.kernel.org/vger-lists.html).
There are kernel-related lists hosted elsewhere as well, though.

Do not send more than 15 patches at once to the vger mailing lists!!!

Linus Torvalds is the final arbiter of all changes accepted into the Linux
kernel. His e-mail address is
&lt;[torvalds@linux-foundation.org](mailto:torvalds%40linux-foundation.org)&gt;.
He gets a lot of e-mail, and, at this point, very few patches go through Linus
directly, so typically you should do your best to -avoid- sending him e-mail.

If you have a patch that fixes an exploitable security bug, send that patch to
[security@kernel.org](mailto:security%40kernel.org). For severe bugs, a short
embargo may be considered to allow distributors to get the patch out to users;
in such cases, obviously, the patch should not be sent to any public lists. See
also [Security
bugs](https://www.kernel.org/doc/html/latest/process/security-bugs.html).

Patches that fix a severe bug in a released kernel should be directed toward the
stable maintainers by putting a line like this:

Cc: stable@vger.kernel.org

into the sign-off area of your patch (note, NOT an email recipient). You should
also read [Everything you ever wanted to know about Linux -stable
releases](https://www.kernel.org/doc/html/latest/process/stable-kernel-rules.html)
in addition to this document.

If changes affect userland-kernel interfaces, please send the MAN-PAGES
maintainer (as listed in the MAINTAINERS file) a man-pages patch, or at least a
notification of the change, so that some information makes its way into the
manual pages. User-space API changes should also be copied to
[linux-api@vger.kernel.org](mailto:linux-api%40vger.kernel.org).

## No MIME, no links, no compression, no attachments. Just plain
text[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#no-mime-no-links-no-compression-no-attachments-just-plain-text
"Permalink to this heading")

Linus and other kernel developers need to be able to read and comment on the
changes you are submitting. It is important for a kernel developer to be able to
"quote" your changes, using standard e-mail tools, so that they may comment on
specific portions of your code.

For this reason, all patches should be submitted by e-mail "inline". The easiest
way to do this is with `git send-email`, which is strongly recommended. An
interactive tutorial for `git send-email` is available at
[https://git-send-email.io](https://git-send-email.io).

If you choose not to use `git send-email`:

Warning

Be wary of your editor's word-wrap corrupting your patch, if you choose to
cut-n-paste your patch.

Do not attach the patch as a MIME attachment, compressed or not. Many popular
e-mail applications will not always transmit a MIME attachment as plain text,
making it impossible to comment on your code. A MIME attachment also takes Linus
a bit more time to process, decreasing the likelihood of your MIME-attached
change being accepted.

Exception: If your mailer is mangling patches then someone may ask you to
re-send them using MIME.

See [Email clients info for
Linux](https://www.kernel.org/doc/html/latest/process/email-clients.html) for
hints about configuring your e-mail client so that it sends your patches
untouched.

## Respond to review
comments[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#respond-to-review-comments
"Permalink to this heading")

Your patch will almost certainly get comments from reviewers on ways in which
the patch can be improved, in the form of a reply to your email. You must
respond to those comments; ignoring reviewers is a good way to get ignored in
return. You can simply reply to their emails to answer their comments. Review
comments or questions that do not lead to a code change should almost certainly
bring about a comment or changelog entry so that the next reviewer better
understands what is going on.

Be sure to tell the reviewers what changes you are making and to thank them for
their time. Code review is a tiring and time-consuming process, and reviewers
sometimes get grumpy. Even in that case, though, respond politely and address
the problems they have pointed out. When sending a next version, add a `patch
changelog` to the cover letter or to individual patches explaining difference
against previous submission (see [The canonical patch
format](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#the-canonical-patch-format)).

See [Email clients info for
Linux](https://www.kernel.org/doc/html/latest/process/email-clients.html) for
recommendations on email clients and mailing list etiquette.

## Use trimmed interleaved replies in email
discussions[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#use-trimmed-interleaved-replies-in-email-discussions
"Permalink to this heading")

Top-posting is strongly discouraged in Linux kernel development discussions.
Interleaved (or "inline") replies make conversations much easier to follow. For
more details see:
[https://en.wikipedia.org/wiki/Posting\_style#Interleaved\_style](https://en.wikipedia.org/wiki/Posting_style#Interleaved_style)

As is frequently quoted on the mailing list:

A: http://en.wikipedia.org/wiki/Top_post Q: Were do I find info about this thing
called top-posting? A: Because it messes up the order in which people normally
read text. Q: Why is top-posting such a bad thing? A: Top-posting. Q: What is
the most annoying thing in e-mail?

Similarly, please trim all unneeded quotations that aren't relevant to your
reply. This makes responses easier to find, and saves time and space. For more
details see:
[http://daringfireball.net/2007/07/on_top](http://daringfireball.net/2007/07/on_top)

A: No. Q: Should I include quotations after my reply?

## Don't get discouraged - or
impatient[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#don-t-get-discouraged-or-impatient
"Permalink to this heading")

After you have submitted your change, be patient and wait. Reviewers are busy
people and may not get to your patch right away.

Once upon a time, patches used to disappear into the void without comment, but
the development process works more smoothly than that now. You should receive
comments within a week or so; if that does not happen, make sure that you have
sent your patches to the right place. Wait for a minimum of one week before
resubmitting or pinging reviewers - possibly longer during busy times like merge
windows.

It's also ok to resend the patch or the patch series after a couple of weeks
with the word "RESEND" added to the subject line:

\[PATCH Vx RESEND\] sub/sys: Condensed patch summary

Don't add "RESEND" when you are submitting a modified version of your patch or
patch series - "RESEND" only applies to resubmission of a patch or patch series
which have not been modified in any way from the previous submission.

## Include PATCH in the
subject[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#include-patch-in-the-subject
"Permalink to this heading")

Due to high e-mail traffic to Linus, and to linux-kernel, it is common
convention to prefix your subject line with \[PATCH\]. This lets Linus and other
kernel developers more easily distinguish patches from other e-mail discussions.

`git send-email` will do this for you automatically.

## Sign your work - the Developer's Certificate of
Origin[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#sign-your-work-the-developer-s-certificate-of-origin
"Permalink to this heading")

To improve tracking of who did what, especially with patches that can percolate
to their final resting place in the kernel through several layers of
maintainers, we've introduced a "sign-off" procedure on patches that are being
emailed around.

The sign-off is a simple line at the end of the explanation for the patch, which
certifies that you wrote it or otherwise have the right to pass it on as an
open-source patch. The rules are pretty simple: if you can certify the below:

### Developer's Certificate of Origin
1.1[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#developer-s-certificate-of-origin-1-1
"Permalink to this heading")

By making a contribution to this project, I certify that:

> 1. The contribution was created in whole or in part by me and I have the right
>    to submit it under the open source license indicated in the file; or
>
> 2. The contribution is based upon previous work that, to the best of my
>    knowledge, is covered under an appropriate open source license and I have
>    the right under that license to submit that work with modifications,
>    whether created in whole or in part by me, under the same open source
>    license (unless I am permitted to submit under a different license), as
>    indicated in the file; or
>
> 3. The contribution was provided directly to me by some other person who
>    certified (a), (b) or (c) and I have not modified it.
>
> 4. I understand and agree that this project and the contribution are public
>    and that a record of the contribution (including all personal information I
>    submit with it, including my sign-off) is maintained indefinitely and may
>    be redistributed consistent with this project or the open source license(s)
>    involved.
>

then you just add a line saying:

Signed-off-by: Random J Developer &lt;random@developer.example.org&gt;

using a known identity (sorry, no anonymous contributions.) This will be done
for you automatically if you use `git commit -s`. Reverts should also include
"Signed-off-by". `git revert -s` does that for you.

Some people also put extra tags at the end. They'll just be ignored for now, but
you can do this to mark internal company procedures or just point out some
special detail about the sign-off.

Any further SoBs (Signed-off-by:'s) following the author's SoB are from people
handling and transporting the patch, but were not involved in its development.
SoB chains should reflect the **real** route a patch took as it was propagated
to the maintainers and ultimately to Linus, with the first SoB entry signalling
primary authorship of a single author.

## When to use Acked-by:, Cc:, and
Co-developed-by:[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#when-to-use-acked-by-cc-and-co-developed-by
"Permalink to this heading")

The Signed-off-by: tag indicates that the signer was involved in the development
of the patch, or that he/she was in the patch's delivery path.

If a person was not directly involved in the preparation or handling of a patch
but wishes to signify and record their approval of it then they can ask to have
an Acked-by: line added to the patch's changelog.

Acked-by: is often used by the maintainer of the affected code when that
maintainer neither contributed to nor forwarded the patch.

Acked-by: is not as formal as Signed-off-by:. It is a record that the acker has
at least reviewed the patch and has indicated acceptance. Hence patch mergers
will sometimes manually convert an acker's "yep, looks good to me" into an
Acked-by: (but note that it is usually better to ask for an explicit ack).

Acked-by: does not necessarily indicate acknowledgement of the entire patch. For
example, if a patch affects multiple subsystems and has an Acked-by: from one
subsystem maintainer then this usually indicates acknowledgement of just the
part which affects that maintainer's code. Judgement should be used here. When
in doubt people should refer to the original discussion in the mailing list
archives.

If a person has had the opportunity to comment on a patch, but has not provided
such comments, you may optionally add a `Cc:` tag to the patch. This is the only
tag which might be added without an explicit action by the person it names - but
it should indicate that this person was copied on the patch. This tag documents
that potentially interested parties have been included in the discussion.

Co-developed-by: states that the patch was co-created by multiple developers; it
is used to give attribution to co-authors (in addition to the author attributed
by the From: tag) when several people work on a single patch. Since
Co-developed-by: denotes authorship, every Co-developed-by: must be immediately
followed by a Signed-off-by: of the associated co-author. Standard sign-off
procedure applies, i.e. the ordering of Signed-off-by: tags should reflect the
chronological history of the patch insofar as possible, regardless of whether
the author is attributed via From: or Co-developed-by:. Notably, the last
Signed-off-by: must always be that of the developer submitting the patch.

Note, the From: tag is optional when the From: author is also the person (and
email) listed in the From: line of the email header.

Example of a patch submitted by the From: author:

&lt;changelog&gt;

Co-developed-by: First Co-Author &lt;first@coauthor.example.org&gt;
Signed-off-by: First Co-Author &lt;first@coauthor.example.org&gt;
Co-developed-by: Second Co-Author &lt;second@coauthor.example.org&gt;
Signed-off-by: Second Co-Author &lt;second@coauthor.example.org&gt;
Signed-off-by: From Author &lt;from@author.example.org&gt;

Example of a patch submitted by a Co-developed-by: author:

From: From Author &lt;from@author.example.org&gt;

&lt;changelog&gt;

Co-developed-by: Random Co-Author &lt;random@coauthor.example.org&gt;
Signed-off-by: Random Co-Author &lt;random@coauthor.example.org&gt;
Signed-off-by: From Author &lt;from@author.example.org&gt; Co-developed-by:
Submitting Co-Author &lt;sub@coauthor.example.org&gt; Signed-off-by: Submitting
Co-Author &lt;sub@coauthor.example.org&gt;

## Using Reported-by:, Tested-by:, Reviewed-by:, Suggested-by: and
Fixes:[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#using-reported-by-tested-by-reviewed-by-suggested-by-and-fixes
"Permalink to this heading")

The Reported-by tag gives credit to people who find bugs and report them and it
hopefully inspires them to help us again in the future. The tag is intended for
bugs; please do not use it to credit feature requests. The tag should be
followed by a Closes: tag pointing to the report, unless the report is not
available on the web. The Link: tag can be used instead of Closes: if the patch
fixes a part of the issue(s) being reported. Please note that if the bug was
reported in private, then ask for permission first before using the Reported-by
tag.

A Tested-by: tag indicates that the patch has been successfully tested (in some
environment) by the person named. This tag informs maintainers that some testing
has been performed, provides a means to locate testers for future patches, and
ensures credit for the testers.

Reviewed-by:, instead, indicates that the patch has been reviewed and found
acceptable according to the Reviewer's Statement:

### Reviewer's statement of
oversight[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#reviewer-s-statement-of-oversight
"Permalink to this heading")

By offering my Reviewed-by: tag, I state that:

> 1. I have carried out a technical review of this patch to evaluate its
>    appropriateness and readiness for inclusion into the mainline kernel.
>
> 2. Any problems, concerns, or questions relating to the patch have been
>    communicated back to the submitter. I am satisfied with the submitter's
>    response to my comments.
>
> 3. While there may be things that could be improved with this submission, I
>    believe that it is, at this time, (1) a worthwhile modification to the
>    kernel, and (2) free of known issues which would argue against its
>    inclusion.
>
> 4. While I have reviewed the patch and believe it to be sound, I do not
>    (unless explicitly stated elsewhere) make any warranties or guarantees that
>    it will achieve its stated purpose or function properly in any given
>    situation.
>

A Reviewed-by tag is a statement of opinion that the patch is an appropriate
modification of the kernel without any remaining serious technical issues. Any
interested reviewer (who has done the work) can offer a Reviewed-by tag for a
patch. This tag serves to give credit to reviewers and to inform maintainers of
the degree of review which has been done on the patch. Reviewed-by: tags, when
supplied by reviewers known to understand the subject area and to perform
thorough reviews, will normally increase the likelihood of your patch getting
into the kernel.

Both Tested-by and Reviewed-by tags, once received on mailing list from tester
or reviewer, should be added by author to the applicable patches when sending
next versions. However if the patch has changed substantially in following
version, these tags might not be applicable anymore and thus should be removed.
Usually removal of someone's Tested-by or Reviewed-by tags should be mentioned
in the patch changelog (after the '---' separator).

A Suggested-by: tag indicates that the patch idea is suggested by the person
named and ensures credit to the person for the idea. Please note that this tag
should not be added without the reporter's permission, especially if the idea
was not posted in a public forum. That said, if we diligently credit our idea
reporters, they will, hopefully, be inspired to help us again in the future.

A Fixes: tag indicates that the patch fixes an issue in a previous commit. It is
used to make it easy to determine where a bug originated, which can help review
a bug fix. This tag also assists the stable kernel team in determining which
stable kernel versions should receive your fix. This is the preferred method for
indicating a bug fixed by the patch. See [Describe your
changes](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#describe-changes)
for more details.

Note: Attaching a Fixes: tag does not subvert the stable kernel rules process
nor the requirement to Cc:
[stable@vger.kernel.org](mailto:stable%40vger.kernel.org) on all stable patch
candidates. For more information, please read [Everything you ever wanted to
know about Linux -stable
releases](https://www.kernel.org/doc/html/latest/process/stable-kernel-rules.html).

## The canonical patch
format[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#the-canonical-patch-format
"Permalink to this heading")

This section describes how the patch itself should be formatted. Note that, if
you have your patches stored in a `git` repository, proper patch formatting can
be had with `git format-patch`. The tools cannot create the necessary text,
though, so read the instructions below anyway.

The canonical patch subject line is:

Subject: \[PATCH 001/123\] subsystem: summary phrase

The canonical patch message body contains the following:

> - A `from` line specifying the patch author, followed by an empty line (only
>   needed if the person sending the patch is not the author).
>
> - The body of the explanation, line wrapped at 75 columns, which will be
>   copied to the permanent changelog to describe this patch.
>
> - An empty line.
>
> - The `Signed-off-by:` lines, described above, which will also go in the
>   changelog.
>
> - A marker line containing simply `---`.
>
> - Any additional comments not suitable for the changelog.
>
> - The actual patch (`diff` output).
>

The Subject line format makes it very easy to sort the emails alphabetically by
subject line - pretty much any email reader will support that - since because
the sequence number is zero-padded, the numerical and alphabetic sort is the
same.

The `subsystem` in the email's Subject should identify which area or subsystem
of the kernel is being patched.

The `summary phrase` in the email's Subject should concisely describe the patch
which that email contains. The `summary phrase` should not be a filename. Do not
use the same `summary phrase` for every patch in a whole patch series (where a
`patch series` is an ordered sequence of multiple, related patches).

Bear in mind that the `summary phrase` of your email becomes a globally-unique
identifier for that patch. It propagates all the way into the `git` changelog.
The `summary phrase` may later be used in developer discussions which refer to
the patch. People will want to google for the `summary phrase` to read
discussion regarding that patch. It will also be the only thing that people may
quickly see when, two or three months later, they are going through perhaps
thousands of patches using tools such as `gitk` or `git log --oneline`.

For these reasons, the `summary` must be no more than 70-75 characters, and it
must describe both what the patch changes, as well as why the patch might be
necessary. It is challenging to be both succinct and descriptive, but that is
what a well-written summary should do.

The `summary phrase` may be prefixed by tags enclosed in square brackets:
"Subject: \[PATCH &lt;tag&gt;...\] &lt;summary phrase&gt;". The tags are not
considered part of the summary phrase, but describe how the patch should be
treated. Common tags might include a version descriptor if the multiple versions
of the patch have been sent out in response to comments (i.e., "v1, v2, v3"), or
"RFC" to indicate a request for comments.

If there are four patches in a patch series the individual patches may be
numbered like this: 1/4, 2/4, 3/4, 4/4. This assures that developers understand
the order in which the patches should be applied and that they have reviewed or
applied all of the patches in the patch series.

Here are some good example Subjects:

Subject: \[PATCH 2/5\] ext2: improve scalability of bitmap searching Subject:
\[PATCH v2 01/27\] x86: fix eflags tracking Subject: \[PATCH v2\] sub/sys:
Condensed patch summary Subject: \[PATCH v2 M/N\] sub/sys: Condensed patch
summary

The `from` line must be the very first line in the message body, and has the
form:

> From: Patch Author &lt;[author@example.com](mailto:author%40example.com)&gt;

The `from` line specifies who will be credited as the author of the patch in the
permanent changelog. If the `from` line is missing, then the `From:` line from
the email header will be used to determine the patch author in the changelog.

The explanation body will be committed to the permanent source changelog, so
should make sense to a competent reader who has long since forgotten the
immediate details of the discussion that might have led to this patch. Including
symptoms of the failure which the patch addresses (kernel log messages, oops
messages, etc.) are especially useful for people who might be searching the
commit logs looking for the applicable patch. The text should be written in such
detail so that when read weeks, months or even years later, it can give the
reader the needed details to grasp the reasoning for **why** the patch was
created.

If a patch fixes a compile failure, it may not be necessary to include \_all\_
of the compile failures; just enough that it is likely that someone searching
for the patch can find it. As in the `summary phrase`, it is important to be
both succinct as well as descriptive.

The `---` marker line serves the essential purpose of marking for patch handling
tools where the changelog message ends.

One good use for the additional comments after the `---` marker is for a
`diffstat`, to show what files have changed, and the number of inserted and
deleted lines per file. A `diffstat` is especially useful on bigger patches. If
you are going to include a `diffstat` after the `---` marker, please use
`diffstat` options `-p 1 -w 70` so that filenames are listed from the top of the
kernel source tree and don't use too much horizontal space (easily fit in 80
columns, maybe with some indentation). (`git` generates appropriate diffstats by
default.)

Other comments relevant only to the moment or the maintainer, not suitable for
the permanent changelog, should also go here. A good example of such comments
might be `patch changelogs` which describe what has changed between the v1 and
v2 version of the patch.

Please put this information **after** the `---` line which separates the
changelog from the rest of the patch. The version information is not part of the
changelog which gets committed to the git tree. It is additional information for
the reviewers. If it's placed above the commit tags, it needs manual interaction
to remove it. If it is below the separator line, it gets automatically stripped
off when applying the patch:

&lt;commit message&gt; ... Signed-off-by: Author &lt;author@mail&gt; \-\-\- V2
-&gt; V3: Removed redundant helper function V1 -&gt; V2: Cleaned up coding style
and addressed review comments

path/to/file | 5+++-- ...

See more details on the proper patch format in the following references.

### Backtraces in commit
messages[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#backtraces-in-commit-messages
"Permalink to this heading")

Backtraces help document the call chain leading to a problem. However, not all
backtraces are helpful. For example, early boot call chains are unique and
obvious. Copying the full dmesg output verbatim, however, adds distracting
information like timestamps, module lists, register and stack dumps.

Therefore, the most useful backtraces should distill the relevant information
from the dump, which makes it easier to focus on the real issue. Here is an
example of a well-trimmed backtrace:

unchecked MSR access error: WRMSR to 0xd51 (tried to write 0x0000000000000064)
at rIP: 0xffffffffae059994 (native\_write\_msr+0x4/0x20) Call Trace: mba_wrmsr
update_domains rdtgroup_mkdir

## Explicit In-Reply-To
headers[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#explicit-in-reply-to-headers
"Permalink to this heading")

It can be helpful to manually add In-Reply-To: headers to a patch (e.g., when
using `git send-email`) to associate the patch with previous relevant
discussion, e.g. to link a bug fix to the email with the bug report. However,
for a multi-patch series, it is generally best to avoid using In-Reply-To: to
link to older versions of the series. This way multiple versions of the patch
don't become an unmanageable forest of references in email clients. If a link is
helpful, you can use the [https://lore.kernel.org/](https://lore.kernel.org/)
redirector (e.g., in the cover email text) to link to an earlier version of the
patch series.

## Providing base tree
information[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#providing-base-tree-information
"Permalink to this heading")

When other developers receive your patches and start the review process, it is
often useful for them to know where in the tree history they should place your
work. This is particularly useful for automated CI processes that attempt to run
a series of tests in order to establish the quality of your submission before
the maintainer starts the review.

If you are using `git format-patch` to generate your patches, you can
automatically include the base tree information in your submission by using the
`--base` flag. The easiest and most convenient way to use this option is with
topical branches:

$ git checkout -t -b my-topical-branch master Branch 'my-topical-branch' set up
to track local branch 'master'. Switched to a new branch 'my-topical-branch'

\[perform your edits and commits\]

$ git format-patch --base=auto --cover-letter -o outgoing/ master
outgoing/0000-cover-letter.patch outgoing/0001-First-Commit.patch outgoing/...

When you open `outgoing/0000-cover-letter.patch` for editing, you will notice
that it will have the `base-commit:` trailer at the very bottom, which provides
the reviewer and the CI tools enough information to properly perform `git am`
without worrying about conflicts:

$ git checkout -b patch-review \[base-commit-id\] Switched to a new branch
'patch-review' $ git am patches.mbox Applying: First Commit Applying: ...

Please see `man git-format-patch` for more information about this option.

Note

The `--base` feature was introduced in git version 2.9.0.

If you are not using git to format your patches, you can still include the same
`base-commit` trailer to indicate the commit hash of the tree on which your work
is based. You should add it either in the cover letter or in the first patch of
the series and it should be placed either below the `---` line or at the very
bottom of all other content, right before your email signature.

##
References[¶](https://www.kernel.org/doc/html/latest/process/submitting-patches.html#references
"Permalink to this heading")

Andrew Morton, "The perfect patch" (tpp).

&lt;[https://www.ozlabs.org/~akpm/stuff/tpp.txt](https://www.ozlabs.org/~akpm/stuff/tpp.txt)&gt;

Jeff Garzik, "Linux kernel patch submission format".

&lt;[https://web.archive.org/web/20180829112450/http://linux.yyz.us/patch-format.html](https://web.archive.org/web/20180829112450/http://linux.yyz.us/patch-format.html)&gt;

Greg Kroah-Hartman, "How to piss off a kernel subsystem maintainer".

&lt;[http://www.kroah.com/log/linux/maintainer.html](http://www.kroah.com/log/linux/maintainer.html)&gt;

&lt;[http://www.kroah.com/log/linux/maintainer-02.html](http://www.kroah.com/log/linux/maintainer-02.html)&gt;

&lt;[http://www.kroah.com/log/linux/maintainer-03.html](http://www.kroah.com/log/linux/maintainer-03.html)&gt;

&lt;[http://www.kroah.com/log/linux/maintainer-04.html](http://www.kroah.com/log/linux/maintainer-04.html)&gt;

&lt;[http://www.kroah.com/log/linux/maintainer-05.html](http://www.kroah.com/log/linux/maintainer-05.html)&gt;

&lt;[http://www.kroah.com/log/linux/maintainer-06.html](http://www.kroah.com/log/linux/maintainer-06.html)&gt;

NO!!!! No more huge patch bombs to
[linux-kernel@vger.kernel.org](mailto:linux-kernel%40vger.kernel.org) people!

&lt;[https://lore.kernel.org/r/20050711.125305.08322243.davem@davemloft.net](https://lore.kernel.org/r/20050711.125305.08322243.davem@davemloft.net)&gt;

Kernel [Linux kernel coding
style](https://www.kernel.org/doc/html/latest/process/coding-style.html)

Linus Torvalds's mail on the canonical patch format:

&lt;[https://lore.kernel.org/r/Pine.LNX.4.58.0504071023190.28951@ppc970.osdl.org](https://lore.kernel.org/r/Pine.LNX.4.58.0504071023190.28951@ppc970.osdl.org)&gt;

Andi Kleen, "On submitting kernel patches"

Some strategies to get difficult or controversial changes in.

[http://halobates.de/on-submitting-patches.pdf](http://halobates.de/on-submitting-patches.pdf)
