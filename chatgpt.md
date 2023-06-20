---
canonicalUrl: https://chat.openai.com/chat
date: 2023-03-12
sr-due: 2023-03-16
sr-ease: 268
sr-interval: 3
tags:
- inbox
- definition
sr-due: 2024-01-15
sr-interval: 243
sr-ease: 288
---

# ChatGPT, short for Chat Generative Pre-trained Transformer

> ChatGPT is a sibling model to `InstructGPT`, which is trained to follow an
> instruction in a prompt and provide a detailed response.
>
> We are excited to introduce ChatGPT to get users’ feedback and learn about its
> strengths and weaknesses. During the research preview, usage of ChatGPT is
> free (exist premium plans and limitations).
> -- [OpenAI](https://openai.com/blog/chatgpt)

Live demo is [here](https://chat.openai.com/).

GPT-3 (GPT-4, etc.) [[artificial intelligence]] chatbot developed
by OpenAI.

Currently, very hyped.

## Resources

- [Awesome ChatGPT Prompts](https://github.com/f/awesome-chatgpt-prompts)

## Prompts

- Teacher
  I want you to act as a mathematic and computer science teacher. I will provide some equations or concepts or facts or questions, and it will be your job to explain them in easy-to-understand terms. This could include providing step-by-step instructions for solving a problem, demonstrating various techniques with visuals or suggesting online resources for further study. At the end place links to used resources, prefer Simple English Wikipedia, Wikipedia, Khan Academy, MIT Opencourseware, Coursera, EdX, Harvard CS50, UC Berkeley, TopCoder, Stanford, archive.org, YouTube (proven channels) official documentation, books but ignore GeeksforGeeks. My first request is "I need help understanding how probability works."
- StackOverflow
  I want you to act as a StackOverflow post. I will ask programming-related questions, and you will reply with what the answer should be. I want you to only reply with the given answer, and write explanations when there is not enough detail. do not write explanations. When I need to tell you something in English, I will do so by putting text inside curly brackets {like this}. If possible include links to official documentation. My first question is "How do I download page using Python `http.client` module"

## Customization (UI)

I use [Dark Reader](https://chrome.google.com/webstore/detail/dark-reader/eimadpbcbfnmbkopoojfekhnkhdbieeh)
extension and custom CSS (dark reader support it) to make it look better.

```css
chat.openai.com CSS html {
  font-size: 20px;
}
code,
pre {
  font-family: monospace !important;
}
@media (min-width: 768px) {
  .md\:h-48 {
    height: 170px;
  }
}
```
