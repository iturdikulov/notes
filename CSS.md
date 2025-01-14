---
date: 2023-10-06T00:00+03:00
tags:
  - blog
  - web
sr-due: 2024-01-28
sr-interval: 3
sr-ease: 263
---

# Cascading Style Sheets (CSS)

> Cascading Style Sheets (CSS) is a style sheet language used for describing the
> presentation of a document written in a markup language such as [[HTML]] or
> XML (including XML dialects such as SVG, MathML or XHTML). CSS is a
> cornerstone technology of the World Wide Web, alongside HTML and
> [[JavaScript]].
>
> CSS is designed to enable the separation of content and presentation,
> including layout, colors, and fonts. This separation can improve content
> accessibility; provide more flexibility and control in the specification of
> presentation characteristics; enable multiple web pages to share formatting by
> specifying the relevant CSS in a separate .css file, which reduces complexity
> and repetition in the structural content; and enable the .css file to be
> cached to improve the page load speed between the pages that share the file
> and its formatting.
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/CSS)</cite>

## Frequently Used Words in CSS Classes

### Images

- `image`, `img`, `picture`, `pic` — image
- `icon` — icon
- `logo` — logo
- `userpic`, `avatar` — user picture, small user image
- `thumbnail`, `thumb` — thumbnail, a smaller version of an image

### Text

- `title`, `subject`, `heading`, `headline`, `caption` — title
- `subtitle` — subtitle
- `slogan` — slogan
- `lead`, `tagline` — lead paragraph in the text
- `text` — textual content
- `desc` — description, a variation of textual content
- `excerpt` — text excerpt, usually used before a "Read More..." link
- `quote`, `blockquote` — quote
- `snippet` — code example
- `link` — link
- `copyright`, `copy` — copyright

### Lists

- `list`, `items` — list
- `item` — list item

### Blocks

- `page` — root element of the page
- `header` — header (of a page or an element)
- `footer` — footer (of a page or an element)
- `section` — section of content (one of several)
- `main`, `body` — main part (of a page or an element)
- `content` — content of an element
- `sidebar` — sidebar (of a page or an element)
- `aside` — block with additional information
- `widget` — widget, for example, in a sidebar

### Layout

- `wrapper`, `wrap` — wrapper, usually outer
- `inner` — inner wrapper
- `container`, `holder`, `box` — container
- `grid` — layout (of a page or an element) as a grid (usually contains `row` and `col`)
- `row` — container as a row
- `col`, `column` — container as a column

### Controls

- `button`, `btn` — button, for example, for submitting a form
- `control` — control element, for example, forward/backward arrows in a photo gallery, slider control buttons
- `dropdown` — dropdown list

### Media Queries

- `phone`, `mobile` — mobile devices
- `phablet` — large screen phones (6-7")
- `tablet` — tablets
- `notebook`, `laptop` — laptops
- `desktop` — desktop computers

### Sizes

- `tiny`, `xs` — tiny, extra small
- `small`, `sm` — small
- `medium`, `base` — medium
- `big`, `large`, `lg` — large
- `huge`, `xl` — huge, extra large
- `narrow` — narrow
- `wide` — wide

### Miscellaneous

- `search` — search
- `socials` — block of social media icons
- `advertisement`, `adv`, `commercial`, `promo` — advertisement block (AdBlock usually hides them, it's not recommended to use these classes for internal ads)
- `features`, `benefits` — list of main features of a product or service
- `slider`, `carousel` — slider, an interactive element with scrolling content
- `pagination` — pagination
- `user`, `author` — user, author of a post or comment
- `meta` — block with additional information, for example, a block of tags and dates in a post
- `cart`, `basket` — shopping cart
- `breadcrumbs` — navigation trail ("breadcrumbs")
- `more`, `all` — link to full information
- `modal` — modal (dialog) window
- `popup` — popup window
- `tooltip`, `tip` — tooltip
- `preview` — preview, excerpt, for example, news or a post, can consist of title, description and image. It's meant to link to the full version.
- `overlay` — overlaying layer, for example, to darken images or create modal windows

### States

- `active`, `current` — active element, for example, the current menu item
- `visible` — visible element
- `hidden` — hidden element
- `error` — error status
- `warning` — warning status
- `success` — successful task completion status
- `pending` — pending state, for example, before changing the status to error or success

## Examples of Use

Examples with [BEM](https://en.bem.info/methodology/quick-start) metodology.

### Simple List

```html
<ul class="list">
  <li class="item">First</li>
  <li class="item">Second</li>
  <li class="item">Third</li>
</ul>
```

### User Picture (Userpic)

```html
<div class="user">
  <img class="user__img" src="userpic.png" alt="Dormidont Petrovich">
  <a class="user__link" href="#">Dormidont Petrovich</a>
</div>
```

### Gallery

```html
<div class="gallery">
  <ul class="gallery__list">
    <li class="gallery__item">
      <img class="gallery__img" src="flowers.jpg" alt="Blooming like there's no tomorrow">
    </li>
    <li class="gallery__item">
      <img class="gallery__img" src="trees.jpg" alt="Park 'Three Pines'">
    </li>
  </ul>
</div>
```

### Navigation

```html
<nav class="nav">
  <a class="nav__link nav__link_active">Home</a>
  <a class="nav__link" href="#">Secondary</a>
  <a class="nav__link" href="#">Third from the End</a>
  <a class="nav__link" href="#">Penultimate</a>
  <a class="nav__link" href="#">Absolute End</a>
</nav>
```

```html
<nav class="nav">
  <ul class="nav__list">
    <li class="nav__item nav__item_current">
      <a class="nav__link">Home</a>
    </li>
    <li class="nav__item">
      <a class="nav__link" href="#">Articles</a>
    </li>
    <li class="nav__item">
      <a class="nav__link" href="#">Photo Gallery</a>
    </li>
    <li class="nav__item">
      <a class="nav__link" href="#">Contacts</a>
    </li>
  </ul>
</nav>
```

### Widget in Sidebar

```html
<div class="widget">
  <h4 class="widget__title">Growing Jelly</h4>

  <div class="widget__content">
    <p>To grow a communicative, friendly jelly,
    we need a roll of foam rubber, two kilograms of sugar,
    three eggs and half a teaspoon of acetone.</p>

    <a class="widget__link" href="#">Don't Read More...</a>
  </div>
</div>
```

### News Block

```html
<div class="news">
    <h3 class="news__title">Yesterday's News</h3>

    <ul class="news__list">
        <!-- to element's class we are adding block's class,
             to create a new namespace -->
        <li class="news__item item-news">
            <h4 class="item-news__title">Roach's Speed Skating Competition</h4>
            <div class="item-news__text">
              <p>The team of sprat from Petrozavodsk won</p>

              <a href="#" class="item-news__link">Read More</a>
            </div>
        </li>

        <li class="news__item item-news">
            <h4 class="item-news__title">Scientists clarified the role of nail file in nail care</h4>
            <div class="item-news__text">
              <p>British scientists highly praised
                the contribution of the nail file
                to growing 1.5-meter long nails.</p>

              <a href="#" class="item-news__link">Don't Read More</a>
            </div>
        </li>
    </ul>
</div>
```

### Article or Blog Post (Simple Version)

```html
<article class="article">
  <h3 class="article__title">Feeling the Chakras of a Bunch of Parsley</h3>
  <time class="article__datetime">May 32, 10:87</time>

  <div class="article__author author-article">
    <img class="author-article__img" src="userpic.png" alt="Kloshnya Andreevna">
    <a class="author-article__link" href="#">Kloshnya Andreevna Dolgorukaya</a>
    <div class="author-article__desc">Our chakra expert</div>
  </div>

  <div class="article__content">
    Go to the market and buy a bunch of parsley from old ladies for a hundred grams.
    Properly sort it out and cleanse it from beetles and caterpillars. Give
    the beetles to the cat to play with, settle the caterpillars in a pot with
    cacti, let one be John, the other Billy, and now you will have a Wild West
    in your pot. Get back to your bunch of parsley. Look at it tenderly and
    scratch behind its ear, you can scratch yourself or the cat. Tie it up with
    a satin ribbon, be sure to tie a bow. Congratulations! Now you have a fully
    domesticated bunch of parsley that will run after you merrily and grow
    their seeds in your slippers.
  </div>
</article>
```

### Article or Blog Post (Complex Version)

```html
<article class="entry">
  <header class="entry__header">
    <h3 class="entry__title title-entry">
      <a class="title-entry__link" href="#">Rubber Ducks as a Way of Self-Discovery</a>
    </h3>

    <time class="entry__datetime">May 32, 10:87</time>
  </header>

  <div class="entry__author author-entry">
    <img class="author-entry__img" src="userpic.png" alt="Vasilisa Sergeevich">

    <a class="author-entry__link" href="#">Vasilisa Sergeevich</a>
  </div>

  <div class="entry__content">
    Get a box of fifty rubber ducks from the attic,
    left over from New Year’s celebration. From the ducks
    and lit candles, lay out a pentagram on the floor of
    the room. Sit in the middle in lotus position, take a
    German-Brazilian dictionary in each hand, cough, take
    a full breath of air and say loud and confidently,
    with full commitment “Quack!”
  </div>

  <div class="entry__tags tags-entry">
    <h4 class="tags-entry__title">Tags</h4>

    <ul class="tags-entry__list">
      <li class="tags-entry__item">
        <a class="tags-entry__link" href="#">DIY round dance</a>
      </li>
      <li class="tags-entry__item">
        <a class="tags-entry__link" href="#">Porcelain slippers</a>
      </li>
      <li class="tags-entry__item">
        <a class="tags-entry__link" href="#">Shoe polish in cooking</a>
      </li>
    </ul>
  </div>

  <div class="entry__actions actions-entry">
    <ul class="actions-entry__list">
      <li class="actions-entry__item actions-entry__item_read">
        <a class="actions-entry__link" href="#">238 Replies</a>
      </li>
      <li class="actions-entry__item actions-entry__item_write">
        <a class="actions-entry__link" href="#">Write to Sportloto</a>
      </li>
      <li class="actions-entry__item actions-entry__item_share">
        <a class="actions-entry__link" href="#">Share</a>
      </li>
    </ul>
  </div>
</article>
```
