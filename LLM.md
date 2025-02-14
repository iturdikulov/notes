---
date: 2023-08-20T00:00+03:00
tags:
  - blog
  - AI
---

# Large language model (LLM)

Modal of [[computation]] capable of language generation or other natural
language processing tasks. How as language models, LLMs acquire these abilities?
<br class="f">
By learning **statistical relationships** from vast amounts of text during a
self-supervised and semi-supervised training process.

Hugging Face platform [^1] is like [[GitHub]] for AI models, it's contains a lot
of large language models for a variety of tasks,

## Learing LLM

- [ ] Build a Large Language Model (From Scratch)
- [[LLM]]
- [Generating documentation from tests using files-to-prompt and LLM | Simon Willison’s TILs](https://til.simonwillison.net/llms/docs-from-tests)
- [ ] [What's your biggest Claude hack? : r/ClaudeAI](https://www.reddit.com/r/ClaudeAI/comments/1gg7211/whats_your_biggest_claude_hack/?chainedPosts=t3_1b7wh1i)
- [ ] [Summarizing Hacker News discussion themes with Claude and LLM | Simon Willison’s TILs](https://til.simonwillison.net/llms/claude-hacker-news-themes)

## LLM questions examples

Some information from Entropic Thoughts [^2] llm article. How llm can answer
simple and complex questions with CLI workflow.

- q 'If I asked you to generate 20 random lines of code that look like
  something one might find in the Linux kernel, what would you print? I fully
  undrstand you don’t have access to the real kernel source code, so you’d be
  making stuff up and that is okay. Please put them in <scratchpad>. Then
  count how many of them are assignment statements (including things like
  memset).'
- git grep -n itur | q Where is iturdikulov defined?
- q What is a better word for self-development used in professional contexts? Not strictly about professional development, but just becoming a better person more generally.
- q 'What is a software developer paid per minute? Show your work in <scratchpad> then report the result.'
- q Suggest 20 silly-sounding software-development sounding task, a little like \"reticulating splines\" but not that, and not as manual
- q Is there an option in pd.dataset to skip specific columns?
- q How do I use the cons optic from Control.Lens to add an element to a list inside another datatype?
- q I do not care about collecting an audience, BMAC is enough. What does BMAC mean?
- q Can you give me the normal width unicode box drawing characters in the shape of boxes? I.e. it is fine to duplicate characters etc. to make a sensible-looking box. The reason I want this is to make it easier to copy-paste the characters I need in the right places.
- q How do I combine many PDL vectors into a matrix?
- q How do I compute the correlation between rank and a binary tag applied to some of the elements? Can you give a concrete formula for the point-biserial correlation?
- q How do I interpolate a perl variable in a regex without accidentally entering a $ anchor?

- Summarization and context generation:
 - This chat is getting long. Summarize, as an artifact, all key points we've covered, lessons learned and include/don't include code, so I can pin it to your project knowledge.
- Clarification:
  - Ask me three questions about this to help you understand better.
  - Ask me questions before creating artifacts, preferring iteration over up front complete analysis. Only generate artifacts when specifically directed to do so. Use bullet points only when necessary.
- Read and provide a harsh critical review of <attachment or appended text>, starting with the premise that it must be perfect. Do not pull punches. Do not give any credit beyond acknowledging correctness of any particular point.

- Debug this code snippet and explain the error
- Optimize this database query for better performance
- Suggest a design pattern for this use case
- Write a unit test for this function
- Refactor this code to be more maintainable
- Implement error handling for this API
- Convert this synchronous code to async/await
- Create a CI/CD pipeline configuration
- Write a regex for this pattern
- Implement rate limiting for this endpoint
- Add authentication to this service
- Fix this memory leak
- Optimize this algorithm's time complexity
- Write a data migration script
- Implement caching for this function
- Create a load balancing strategy
- Handle race conditions in this code
- Write a logging middleware
- Implement retry logic with backoff
- Create a database indexing strategy

[^1]: [Hugging Face – The AI community building the future.](https://huggingface.co/)
[^2]: [q What do I title this article?](https://entropicthoughts.com/q)
