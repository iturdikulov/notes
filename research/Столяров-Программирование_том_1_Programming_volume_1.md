---
author: Андрей Викторович Столяров
date: 2021
external:
  - http://www.stolyarov.info/books/programming_intro/vol1
tags:
  - research
  - inbox
  - SR_programming
sr-due: 2024-05-03
sr-interval: 99
sr-ease: 227
directory: ~/Computer/programming/Столяров-Программирование
---

# Программирование - Введение в профессию. Том 1.

## Introduction 1, philosophical (Предисловие 1, философское)

Author tell how he wrote this book, what difficulties he had and how crowdfunding
project helped him to write this book.

With crowdfunding project author can exist and write book,
not search for other jobs. In total author spend 2200 hours to write 3 volumes,
books wasn't written from scratch (previous works and lectures was used).

Author also doesn't like current situation with publishers, which make money on
books.

I think this preface is like historical reference, how he wrote this book.
Also was told which topics was touched (Pascal, NASM, C, operating systems,
paradigms, etc.) and reworked during writing this book, who helped author and
other aspects of writing process.

## Introduction 2, methodical (Предисловие 2, методическое)

You can study programming only by yourself (maybe too categorical).

Learning programming by writing GUI applications (event-driven approach) is bad
idea.

Main tool of professional Unix user is **organized** command line
([[Command-line_interface_CLI|CLI]]).

Command line interface is more powerful and flexible than GUI, you can work with
it faster, less stress on hands, operations are easier to remember and so on.

You can write CLI program much easier than GUI program. This open new learning
opportunities and customization of OS (hobby programming).

Reasons why Unix is the most suitable OS for learning programming:

### Mathematical reason (Математическая причина)

Any [[Computer_programming|программа]] is a record of ==algorithm== on some
programming language.

Что такое алгоритм (фундаментальный уровень, конструктив) на самом деле никто в
реальности не знает, поэтому и существуют теория вычислимости, теоретические
составляющее информатики и т.д.

On very fundamental level algorithm no-one knows what it is, that's why we have
[[Computational_problem|computational problems]], theoretical [[Computer_science]]

Algorithm make transformation from set of [[Word|words]](chains of symbols over
some alphabet) into the ==same set==.

For this transformation can exist more than one algorithm (countless) or not
exist.

Algorithm is such a "thing" which read input word, do something **constructive**
and return another word.

The same way works many programs from Unix family. STDIN → transformations →
STDOUT (filters) and you can combine them using pipes.

### Psychological reason (Психологическая причина)

Programming can't be learned in traditional ways, it's more craft and need you
do a lot of practice which solve real world problems (not just write code to
learn some algorithm or theory). This is why pet projects are important, some
pet projects can be transformed into very useful projects (GNU/Linux,
open-source projects, etc.). And when you get real users of your software you
are established as programmer and can congratulate yourself.

### Ergonomic reason (Эргономическая причина)

You can't replace CLI usability with any graphical UI. And you must learn CLI
as soon as possible (I use it every day, but still not very effective).

### Pedagogical reason (Педагогическая причина)

Bad teachers can mislead a newbie student, for example start learning
programming with making GUI (focusing on UI, not a program logic), which is bad
idea. It can traumatize student mindset, and he will have many problems to
relearn programming in future (if he can do it) and think programming is boring
process (will not know what he lost).

### Language determines thinking (Язык определяет мышления)

Stating learning programming from complex programming languages (like Java, C++
and even C) is bad idea, newbie learners will have hard been understanding their
concepts and not really will learn programming.

Don't need to learn someone programming if you don't know what is in fundamental
level. And if you really want to learn someone find good proven education path.

Knowing [[Data_structure|data structures]] is important, if you're not
understanding difference (and in result where they can be used) between `vector`
and `list` in C++ and you won't understand it this is bad sign.

Mixing C and C++ is bad idea (maintainability).

C as first programming language is not suitable, you need to understand pointers
first and work with them (and it's hard).

Understanding code as "magic commands" is not good for good programmers, you
need to understand code on very low level to create truly effective programs.

In C you haven't procedures, only functions. Even assignment, increment are
arithmetic operations. And in C formally any actions (which is core of C) are
creating [[Side_effect|side effect]].

> Side effect can be appeared only occur when evaluating expression.
Side effect this is arbitrary change, which occurring when evaluating expression
and then can be somehow ==detected==.

Unlike C, C++ and functional programming languages, in [[Pascal]] there mostly
no side effects.

```c
while((dest++ = * src++));
```
Why you should not write code like this? To avoid side effects.
Yes in C you can't avoid side effects anyway, but in other languages you can.

## Предисловие 3, напутственное

---

## Введение

## Об учебнике

Учебник состоит из 3 частей:

- вводные сведения
- основы программирования на примере Pascal
- возможности ЦП и программирование на языке Assambler

## Ручной труд

Кроме гениальности конструктора, необходимо очень много человеческого труда,
причем необязательно творческого, чтобы создать что-то удивительное...

Повсюду технический гений натыкается на материальную прозу жизни.

## Роль компьютеров

С появлением программируемых компьютеров стало возможно создать нечто,
действующее само по себе, избежав сложностей с материальным воплощением.

Компьютерная программа - это формальное описание того, что должно произойти. В
отличие от технических проектов (проект дома, самолета), программа сама по себе
есть готовое изделие. Программирование самая творческая из инженерно-технических
профессий. Программиста нельзя выучить, человек может стать программистом только
сам - или не стать им вовсе.

## Unix

Командная строка UNIX, должна стать вашим основным средством повседневной работы
с машиной.

### Программирование это работа

Программирование требует предельного интеллектуального напряжения и выдержать ее
может не каждый человек!

# Предварительные сведения

## 1.1. Компьютер: что это такое?

Исходная функция компьютеров - **считать**. В наше время компьютеры
(вычислители) тратят миллионы операций на представление информации, чем
непосредственно на расчеты (бытовой уровень), эффективность крайне мала.

### 1.1.1 Немного истории

Первой вычислительной машиной называют механический арифмометр Вильгельма
Шиккарда, 1623 г.

Машина блеза Паскаля 1642 год

Допустим есть 5 разрядов, перенос и заем в 6 теряется. Это позволяте при
вычитании использовать прибавление некоторого другого числа. 00500 - 00134 =
00500 + 99866

Магическое число 99866 получено путем вычитаня вычитаемого из 100000.

x-y = x + (100000 - y) - 100000, последнее вычитание происхдит автоматически, за
счет переноса в несуществующий 6 разряд.

y в правой части определяется следующим образом: 100000 - y = 99999 - y + 1 Т.к.
число y 4 разрядное, нужно просто заменить каждую цифру y числом дополняющую ее
до девятки.

00134 = 99865 + 1 = 99866

В самом арифмометере было 2 ряда чисел. Для вычитаемого мы набираем 99999-x (но
видим просто число) Затем мы набираем вычитаемое Арифмометер сложит их К примеру
вводд 99499 (99999 - x), ввод вычитаемого 00134, результат 99633 (нижний ряд),
но оператор видит 00366 (верхний ряд).

### Другие счетные машины

В 1673 году был создан арфимометр Лейбницем. Арфмометр способен выполнять
сложение, вычитание, умножение и деление. Причем умножение и деление выполнялись
примерно так-же как мы производим оперции в столбик (последовательность сложений
и вычитаний).

Минус арфимометра в том что они не моги выполнять расчеты без участия человека,
если расчеты состояли из более чем одного действия.

1822 г. (1823 начата практическая часть) Чарльз Беббидж начинает проект
разностной машины. Машина должна была интерполировать полиномы методом конечных
разностей, для автоматизации построения таблиц разнообразных функций. Проект не
был закончен и в 1842 г. остановлен. Но в 1843 г. Георг Шутц на основе принципов
Беббиджа завершил построение работающей разностной машины.

Беббидж так-же задумал проект аналитической машины (частично реализована в
чертежах), была очень сложной, поэтому не была реализована в то время
(превосходило возможности техники и возможности Беббиджа). Благодоря этому
проекту возникла идея программного управления - выполнения действий (операций)
предписанных программой, так-же появились действия не имеющего прямого отношения
к арифметике (перенос данных, сравнение данных и т.д.).

Ада Лавлейс - переводила конспект Беббиджа по аналитической машины, снабдив
перевод подробными комментариями, превышающими по размерам сам конспект. В дном
из разделов этих комментариев приводится полный набор команд для вычисления
чисел Бернулли на аналитической машине - этот набор команд считается первой в
истории компьютерной программой, а саму Аду Лавлейс часто называют первым
программистом.

Цитата Ады Лавлейс:

> Суть и предназначеие машины изменятся от того, кукую информацию мы в неё
> вложим. Машина сможет писать музыку, рисовать картины и покажет науке такие
> пути, которые мы никогда и нигде не видели. -- Ада Лавлейс.

<!--list-separator-->

- Машина Z серии

  Хронологически первой программируемой машиной считается Z1 - построенная
  Конардом Цузе в Германии в 1938 г. Машина полностью механическая с
  электрическим приводом. Z1 - использует двоичную логику в своей работе. Z2
  1939 г. - использовл ту-же механику для хранения данных но операции
  осуществлялись при помощи электромагнитных реле. Обе машины выполняли
  инструкции получаемые с перфоленты (без отмотки ленты назад). Z3 - использует
  только реле и хранившую программу на пластиковой перфоленте (возможно
  кинопленка). Z3 1941 г. - позволяла организовывать циклы (поддерживалась
  отмотка перфоленты), условные переходы не поддерживались. Z4 1944 г. -
  позволяла организоывывать условные переходы (ветвление)

<!--list-separator-->

- Радиолампа

  Прибор выполненный в виде запаянной стеклянной колбы с электродами, с
  откаченным из него воздухом.

  Простейшая радиолампа - диод (2 рабочих электрода анод и катод и спираль
  разогревающая катод до термоэлектронной эмиссии).

  {{< figure src="/ox-hugo/20220318-120902_screenshot.png" >}}
