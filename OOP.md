---
created: 2023-03-12T00:00+03:00
tags:
  - blog
  - computer_programming_patterns
sr-due: 2025-09-13
sr-interval: 65
sr-ease: 178
---

# Object-oriented programming (OOP)

> ==Object-Oriented Programming, or "OOP"= is way (pattern) of writing computer
> programs using "objects" to stand for data and methods. Often, computer
> programs that are not object-oriented are a list of instructions for the
> computer, telling it to do certain things in a certain way.\
> — <cite>[Wikipedia](https://simple.wikipedia.org/wiki/Object-oriented_programming)</cite>

Paradigms like object-oriented programming and functional programming are all
about making code easier to work with and understand, but need always keep
balance and avoid over-engineering.

[[programming_principles_and_design_patterns|Programming principles]] are commonly used to make
object-oriented designs better.

Be careful, OOP can produce a lot of boilerplate code. It's not always the best
solution.

If you need to change it, you have to change it in multiple places
If you forget to change it in one place, you'll have a bug
It's more work to write it over and over again

Usually object-oriented programming techniques using various
[[programming_principles_and_design_patterns]] and take advantage of [[software_quality]].

This is main point of =="clean code"==.
> Any fool can write code that a computer can understand. Good programmers write
> code that humans can understand.\
> — <cite>Martin Fowler</cite>

Reason to write "clean code"?
<br class="f">
- Make code easier to work with
- Make it easier to find and fix bugs
- Make the development process faster
- Help us retain our sanity

A class is a special type of value in an object-oriented programming language
like Python. It's similar to a ==dictionary== in that it usually stores other
types inside itself.

Difference between function and method (Python):
<br class="f">
Method has all the same properties as a function, but it is tied directly to a
class and has access to all its properties.
A method can operate on data that is contained within the class. <!--SR:!2024-09-24,2,198-->

Their first method parameter (`self` convention) is always the ==instance== of
the class.
```python
class Rise:
    def __init__(self, name="Rise", age=1):
        self.name = name
        self.age = age

    # Class method (function tied to the class)
    def composition(self, *args):
        return f"{self.name} is {self.age} years old. Examples: {args}"

one_rise = Rise()  # instantiate a class
print(one_rise.composition("Aquatica", "Jasmine"))  # call a method

rice = [Rise() for i in range(100)]  # create a list of 100 objects (rise instances)
print(len(rice))

class Archer:
    def __init__(self, name, health, num_arrows):  # required parameters
        self.name = name
        self.health = health
        self.num_arrows = num_arrows

    def get_shot(self):
        self.health -= 1
        if self.health <= 0:
            raise Exception(f"{self.name} is dead")

    def shoot(self, target):
        if self.num_arrows:
            self.num_arrows -= 1
        else:
            raise Exception(f"{self.name} can't shoot")

        target.get_shot()

legolas = Archer("Legolas", 100, 10)
orc = Archer("Orc", 10, 10)

while True:
  legolas.shoot(orc)
  orc.shoot(legolas)

  if legolas.health <= 0 or orc.health <= 0:
      break
```

Why `Class` methods often don't return anything explicitly?
<br class="f">
Methods often don't return anything explicitly because they can mutate the
properties of the object (class instance) instead, usually by modifying the
instance's `self` parameter.

Which programming style is better, functional or object-oriented?
<br class="f">
Because functions are more explicit, some developers argue that functional
programming is better than object-oriented programming. In reality, neither
paradigm is "better", and the best developers learn and understand both styles
and use them as they see fit.
\
For example, while methods are more implicit and often make code more difficult
to read, they also make it easier to group a program's data and behavior in one
place, which can lead to a more organized codebase.

Class variables remain the same between instances of the same class and are
declared at the top level of a class definition. In other languages these types
of variables are often called static variables. How we are able to show
differences between instance and class variables in Python?
```python
# Let's assume we show difference for this class
class Wall:
    height = 10
```
<br class="f">
```python
class Wall:
    height = 10

south_wall = Wall()
north_wall = Wall()
print(south_wall.height, north_wall.height)

Wall.height = 50 # updates all instances of a Wall

print(south_wall.height, north_wall.height)
```

What is encapsulation?
<br class="f">
Encapsulation is the practice of hiding complexity inside a "black box" so that
it's easier to focus on the problem at hand. Encapsulation prevents external
code from being concerned with the internal workings of an object.

Is encapsulation a security feature?
<br class="f">
Encapsulation is about organization, not security. <!--SR:!2024-10-22,4,198-->

Private data members are how we encapsulate logic and data within a class. Which
items in code are private, and which are public, does this code fully works?
```python
class Wall:
    def __init__(self, armor, magic_resistance):
        # Implementation details, after creating the wall we don't care about
        # them anymore
        self.__armor = armor
        self.__magic_resistance = magic_resistance

    def get_defense(self):
        return self.__armor + self.__magic_resistance

front_wall = Wall(10, 20)

print(front_wall.__armor)
print(front_wall.get_defense())
```
<br class="f">
In code above `get_defense()` is a public method, but `armor` and
`magic_resistance` are private data members.
Code will raise an error, when we try to access `armor`, if we really want to
get it (not recommended), need to use `front_wall._Wall__armor`.


## External links

- [ ] [Composition over inheritance - Wikipedia](https://en.wikipedia.org/wiki/Composition_over_inheritance)
- [ ] [Uncle Bob SOLID principles - YouTube](https://www.youtube.com/watch?v=zHiWqnTWsn4)
