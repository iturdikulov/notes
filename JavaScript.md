---
created: 2023-10-06T00:00+03:00
tags:
  - blog
  - WEAPON
sr-due: 2025-07-23
sr-interval: 2
sr-ease: 144
---

# JavaScript (dialect of ECMAScript), often abbreviated as JS

> JavaScript (/ˈdʒɑːvəskrɪpt/), often abbreviated as JS, is a [[programming_language]] that is one of the core technologies of the World Wide Web, alongside HTML and CSS. As of 2023, 98.7% of websites use JavaScript on the client side for webpage behavior, often incorporating third-party libraries. All major web browsers have a dedicated JavaScript engine to execute the code on users' devices.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/JavaScript)</cite>

## Learning path

- [JavaScript reference | MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference)
- [Современный учебник JavaScript](https://learn.javascript.ru/)
- [JavaScript — Дока](https://doka.guide/js/)
- [Debounce на примере формы поиска — JavaScript — Дока](https://doka.guide/js/debounce/).
- [JavaScript on Exercism](https://exercism.org/tracks/javascript)

- Miguel - React Mega Tutorial
- [From 0 to Production - The Modern React Tutorial (RSCs, Next.js, Shadui, Drizzle, TS and more) - YouTube](https://www.youtube.com/watch?v=d5x0JCZbAJs)
- [Thinking in React](https://react.dev/learn/thinking-in-react)
- Complete Intro to React.
- [ ] [Thinking in React – React](https://react.dev/learn/thinking-in-react)
- [ ] [Essential Typescript for React](https://www.jacobparis.com/content/react-ts)

- [ ] [Современный учебник JavaScript](https://learn.javascript.ru/)
  - Kantor - browser
  - Kantor - JavaScript
  - Kantor - thematic sections

- [[Flanagan-JavaScript]]
- [Why async: JavaScript and the real world](https://frontarm.com/courses/async-javascript/promises/why-async/)
- [JavaScript | MDN](https://developer.mozilla.org/en-US/docs/Web/JavaScript)
- [1000x FASTER JavaScript? - YouTube](https://www.youtube.com/watch?v=B76gFi43HvM)
- [Examples of how to do query, style, dom, ajax, event etc like jQuery with plain javascript.](https://github.com/camsong/You-Dont-Need-jQuery)
- [Cheatsheet for the JavaScript knowledge you will frequently encounter in modern projects.](https://github.com/mbeaudru/modern-js-cheatsheet)
- [Infinitely Better UIs with Finite Automata - YouTube](https://www.youtube.com/watch?v=VU1NKX6Qkxc)
- [XState Catalogue](https://xstate-catalogue.com/)

- [Comparison of JavaScript-based web frameworks - Wikipedia](https://en.wikipedia.org/wiki/Comparison_of_JavaScript-based_web_frameworks)
- [GitHub - codemirror/dev: Development repository for the CodeMirror editor project](https://github.com/codemirror/dev/)

- [/] [[JavaScript_cheat-sheeet]]

## React

A ==component== is a piece of reusable code that represents a part of a user interface. It used to render, manage, and update UI elements. <!--SR:!2024-08-31,4,203-->

Your own react components, like `Board` and `Square` must start with a ==capital== letter. <!--SR:!2024-09-03,4,222-->

```tsx
export default function Square() { // define main exportable function
  return <button className="square">X</button>; // return JSX element to function caller
}
```

To "remember" things, components use ==state, `useState`==. <!--SR:!2024-08-31,4,203-->
