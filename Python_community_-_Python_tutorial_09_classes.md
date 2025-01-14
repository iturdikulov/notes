---
external:
  - https://docs.python.org/3/tutorial/classes.html
tags:
  - blog
  - Python
date: 2025-01-14T11:41+03:00
---

# 9. Classes

<!-- NEXT: nedd re-read -->

[class_computer_programming|Classes]] provide a means of bundling data and
functionality together. Creating a new class creates a new *type* of object,
allowing new *instances* of that type to be made. Each class instance can have
attributes attached to it for maintaining its state. Class instances can also
have ==methods== (defined by its class) for modifying its state.

Python classes provide all the standard features of [[OOP]]: the class
inheritance mechanism allows multiple base classes, a derived class can override
any methods of its base class or classes, and a method can call the method of a
base class with the same name. Objects can contain arbitrary amounts and kinds
of data. As is true for modules, classes partake of the dynamic nature of
Python: they are created at ==[[runtime]]==, and can be modified further after
creation.

In C++ terminology, normally class members (including the data members) are
==*public*== (except see below [Private
Variables](https://docs.python.org/3/tutorial/classes.html#tut-private)), and
all member functions are *virtual*. As in Modula-3, there are no shorthands for
referencing the object’s members from its methods: the method function is
declared with an explicit first argument representing the object, which is
provided implicitly by the call. As in Smalltalk, classes themselves are
objects. This provides semantics for importing and renaming. Unlike C++ and
Modula-3, built-in types can be used as base classes for extension by the user.
Also, like in C++, most built-in operators with special syntax (arithmetic
operators, subscripting etc.) can be redefined for class instances.

(Lacking universally accepted terminology to talk about classes, I will make
occasional use of Smalltalk and C++ terms. I would use Modula-3 terms, since its
object-oriented semantics are closer to those of Python than C++, but I expect
that few readers have heard of it.)

Objects have individuality, and multiple names (in multiple scopes) can be bound
to the same object. This is known as aliasing in other languages. This is
usually not appreciated on a first glance at Python, and can be safely ignored
when dealing with immutable basic types (numbers, strings, tuples). However,
aliasing has a possibly surprising effect on the semantics of Python code
involving mutable objects such as lists, dictionaries, and most other types.
This is usually used to the benefit of the program, since aliases behave like
pointers in some respects. For example, passing an object is cheap since only a
==pointer== is passed by the implementation; and if a function modifies an
object passed as an argument, the caller will see the change — this eliminates
the need for two different argument passing mechanisms as in Pascal.

A *namespace* is a mapping from names to objects. Most namespaces are currently
implemented as ==Python dictionaries==, but that’s normally not noticeable in any
way (except for performance), and it may change in the future. Examples of
namespaces are: the set of built-in names (containing functions such as
"`abs`", and built-in exception names); the global names in a module; and the
local names in a function invocation. In a sense the set of attributes of an
object also form a namespace.

The important thing to know about namespaces is that there is absolutely
==no relation between names== in different namespaces; for instance, two
different modules may both define a function `maximize` without confusion —
users of the modules must prefix it with the module name.

In the expression `z.real`, `real` is an ==attribute== of the object `z`.

In the expression `modname.funcname`, `modname` is a module object and
`funcname` is an attribute of it. In this case there happens to be a
straightforward mapping between the module’s attributes and the global names
defined in the module: they share the same ==namespace==!
Except for one thing. Module objects have a secret read-only attribute called
`__dict__`, which returns the dictionary used to implement the module’s
namespace; the name `__dict__` is an attribute but not a global name. Obviously,
using this violates the abstraction of namespace implementation, and should be
restricted to things like post-mortem debuggers.

Can we read/write attributes of an object?
&#10;<br>
Attributes may be read-only or writable. In the latter case, assignment to
attributes is possible. Module attributes are writable: you can write
`modname.the_answer = 42`.

How to delete an attribute of an object?
&#10;<br>
Writable attributes may also be deleted with the `del` statement. For example,
`del modname.the_answer` will remove the attribute `the_answer` from the object
named by `modname`.

When namespace with built-in names is created/deleted?
&#10;<br>
The namespace containing the built-in names is created when the Python
interpreter starts up, and is never deleted.

The global namespace for a module is created when the module definition is
==read in==; normally, module namespaces also last until the interpreter quits.
The statements executed by the top-level invocation of the interpreter, either
read from a script file or interactively, are
considered part of a module called `__main__`: The environment where top-level
code is run. Covers command-line interfaces, import-time behavior, and `__name__
== '__main__'`., so they have their own global namespace.

The built-in names actually also live in a module; this is called
==`__builtins__`, `dir(__builtins__)`==: The module that provides the built-in
namespace.

<!-- TODO: Need to research -->

How local namespace for a function is created/deleted?
&#10;<br>
The local namespace for a function is created when the function is called, and
deleted when the function returns or raises an exception that is not handled
within the function. (Actually, forgetting would be a better way to describe
what actually happens.) Of course, recursive invocations each have their own
local namespace.

A *scope* is a ==textual region of a Python program== where a namespace is
directly accessible. “Directly accessible” here means that an unqualified
reference to a name attempts to find the name in the namespace.

Although scopes are determined statically, they are used dynamically. At any
time during execution, there are 3 or 4 nested scopes whose namespaces are
directly accessible:

1. the innermost scope, which is searched first, contains the ==local names==
2. the scopes of any enclosing functions, which are searched starting with the
nearest enclosing scope, contain non-local, but also ==non-global== names
3. the next-to-last scope contains the current module’s ==global names==
4. the outermost scope (searched last) is the namespace containing ==built-in
   names==

What's the scope of a variable initialized in an if statement in Python?
&#10;<br>
Python variables are scoped to the innermost function, class, or module in
which they're assigned. Control blocks like `if` and `while` blocks don't count,
so a variable assigned inside an if is still scoped to a function, class, or
module.

If a name is declared global, then all references and assignments go directly to
the ==next-to-last== scope containing the module’s global names. To rebind
variables found outside of the innermost scope, the `nonlocal` statement can be
used; if not declared nonlocal, those variables are read-only (an attempt to
write to such a variable will simply create a *new* local variable in the
innermost scope, leaving the identically named outer variable unchanged).

Usually, the local scope references the local names of the (textually)
==current function==. Outside functions, the local scope references the same
namespace as the global scope: the module’s namespace. Class definitions place
yet another namespace in the local scope.

What this code will print?
```python
a = "global"
class C:
    a = "class"
    def f():
        print(a)
    f()
```
&#10;<br>
The code will print `global`. The `a` in the `print` statement is not qualified
by a namespace, so it refers to the global `a` rather than the class `a`.
If you remove `a` from the global scope, the code will raise a `NameError`.

It is important to realize that scopes are determined textually: the global
scope of a function defined in a module is that ==module’s namespace==, no
matter from where or by what alias the function is called.

On the other hand, the actual search for names is done
==dynamically, at run time== — however, the language definition is evolving
towards static name resolution, at “compile” time, so don’t rely on it! (In
fact, local variables are already determined statically.)

If no `global` or `nonlocal` statement is in effect – assignments to names
always go into the ==innermost== scope.

Assignments do not copy data — they just ==bind names to objects==. The same is
true for deletions: the statement `del x` removes the binding of `x` from the
namespace referenced by the local scope. In fact, all operations that introduce
new names use the local scope: in particular, `import` statements and function
definitions bind the module or function name in the local scope.

The `global` statement can be used to indicate that particular variables live in
the global scope and should be rebound there; the `nonlocal` statement indicates
that particular variables live in an ==enclosing scope== and should be rebound
there.

This is an example demonstrating how to reference the different scopes and
namespaces, and how `global` and `nonlocal` affect variable binding.
```python
def scope_test():
    def do_local():
        spam = "local spam"

    def do_nonlocal():
        nonlocal spam
        spam = "nonlocal spam"

    def do_global():
        global spam  # module-level binding
        spam = "global spam"

    spam = "test spam" # scope_test binding

    # Step 1.
    do_local()
    print("After local assignment:", spam)

    # Step 2.
    do_nonlocal()
    print("After nonlocal assignment:", spam)

    # Step 3.
    do_global()
    print("After global assignment:", spam)

# Step 4.
# `spam` not exists in module-level binding
scope_test()
# now `spam` exists in module-level binding
print("In global scope:", spam)
```
The output of the example code is:
&#10;<br>
```
After local assignment: test spam
After nonlocal assignment: nonlocal spam
After global assignment: nonlocal spam
In global scope: global spam
```
\
Note how the *local* assignment (which is default) didn’t change *scope_test*'s
binding of *spam*. The `nonlocal` assignment changed *scope_test*'s binding of
*spam*, and the `global` assignment changed the module-level binding.
\
You can also see that there was no previous binding for *spam* before the
`global` assignment.

The simplest form of class definition looks like this:
&#10;<br>
```python
class ClassName:
    <statement-1>
    <statement-N>
```

Class definitions, like function definitions (`def` statements) must be
==executed== before they have any effect. You could conceivably place a class
definition in a branch of an `if` statement, or inside a function.

In practice, the statements inside a class definition will usually be function
definitions, but other statements are allowed, and sometimes useful. The
function definitions inside a class normally have a peculiar form of argument
list, dictated by the calling conventions for ==methods== (how we name functions
in class).

When a class definition is entered, a new namespace is created, and used as the
==local== scope — thus, all assignments to local variables go into this new
namespace. In particular, function definitions bind the name of the new function
here.

When a class definition is left normally (via the end), a ==*class object*== is
created. This is basically a wrapper around the contents of the namespace
created by the class definition; The original local scope (the one in effect
just before the class definition was entered) is reinstated, and the class
object is bound here to the class name given in the class definition header
(`ClassName` in the example).

Class objects support two kinds of operations: ==attribute references and
instantiation==.

*Attribute references* use the standard syntax used for all attribute references
in Python: ==`obj.name`==. Valid attribute names are all the names that were in
the class’s namespace when the class object was created. So, if the class
definition looked like this:
```python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'
```
then `MyClass.i` and `MyClass.f` are valid attribute references, returning an
integer and a function object, respectively. Class attributes can also be
assigned to, so you can change the value of `MyClass.i` by assignment. `__doc__`
is also a valid attribute, returning the docstring belonging to the class: `"A
simple example class"`.

How to create new instance of class?
&#10;<br>
Class *instantiation* uses function notation. Just pretend that the class object
is a parameterless function that returns a new instance of the class. For
example (assuming the above class):
```python
x = MyClass()
```
creates a new *instance* of the class and assigns this object to the local
variable `x`.

The instantiation operation (“calling” a class object) creates an empty object.
Many classes like to create objects with instances customized to a specific
initial state. Therefore a class may define a special method named
==`__init__`, `__init__(self, ...)`== (automatically invokes on class
instantiation).

Now what can we do with instance objects? The only operations understood by
instance objects are ==attribute== references.

There are two kinds of valid attribute names: ==data attributes and methods==.

Do we need to declare data attributes in Python?
&#10;<br>
*data attributes* correspond to “instance variables” in Smalltalk, and to “data
members” in C++. Data attributes need **not be** declared; like local variables,
they spring into existence when they are first assigned to. For example, if `x`
is the instance of `MyClass` created above, the following piece of code will
print the value `16`, without leaving a trace:
```python
x.counter = 1
while x.counter < 10:
    x.counter = x.counter * 2
print(x.counter)
del x.counter
```

A method (kind of instance attribute reference) is a function that
==“belongs to”== an object.
\
Valid method names of an instance object depend on its class. By definition, all
attributes of a class that are function objects define corresponding methods of
its instances. So in our example, `x.f` is a valid method reference, since
`MyClass.f` is a function, but `x.i` is not, since `MyClass.i` is not. But `x.f`
is not the same thing as `MyClass.f` — it is a *method object*, not a function
object.
```python
class MyClass:
    """A simple example class"""
    i = 12345

    def f(self):
        return 'hello world'

# Usually, a method is called right after it is bound:
x = MyClass()
print(x.f())  # returns 'hello world', x here is an instance of MyClass, and
              # we pass here x as the first argument to the method `f`

# However, it is not necessary to call a method right away: `x.f` is a method
# object, and can be stored away and called at a later time.
#
# This will continue to print `hello world` until the end of time.
xf = x.f
while True:
    print(xf())
    break  # avoid infinite loop, remove this line to see the effect
```

In general, calling a method with a list of *n* arguments is equivalent to
calling the corresponding function with an argument list that is created by
inserting the method’s ==instance object== before the first argument.

How Python class methods are working if we are reference non-data attribute of
a class instance with some arguments?
&#10;<br>
When a non-data attribute of an instance is referenced, the instance’s class is
searched.
\
If the name denotes a valid class attribute that is a function object,
references to both the instance object and the function object are packed into a
method object.
\
When the method object is called with an argument list, a new argument list is
constructed from the instance object and the argument list, and the function
object is called with this new argument list.


Generally speaking, instance variables are for data unique to each instance and
class variables are for attributes and methods shared by all
==instances of the class==:

```python
class Dog:
    kind = 'canine'         # class variable shared by all instances

    def __init__(self, name):
        self.name = name    # instance variable unique to each instance

d = Dog('Fido')
e = Dog('Buddy')
d.kind                  # 'canine', shared by all dogs
e.kind                  # 'canine', shared by all dogs
d.name                  # 'Fido', unique to d
e.name                  # 'Buddy', unique to e
```

Possible surprising effect of this code? Can it be improved?
```python
class Dog:
    tricks = []             # mistaken use of a class variable

    def __init__(self, name):
        self.name = name

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
```
&#10;<br>
Shared data can have possibly surprising effects with involving mutable objects
such as lists and dictionaries. For example, the *tricks* list in the following
code should not be used as a class variable because just a single list would be
shared by all *Dog* instances:
```python
class Dog:
    tricks = []             # mistaken use of a class variable

    def __init__(self, name):
        self.name = name

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
d.tricks  # unexpectedly shared by all dogs ['roll over', 'play dead']
```
Correct design of the class should use an instance variable instead:
```python
class Dog:
    def __init__(self, name):
        self.name = name
        self.tricks = []    # creates a new empty list for each dog

    def add_trick(self, trick):
        self.tricks.append(trick)

d = Dog('Fido')
e = Dog('Buddy')
d.add_trick('roll over')
e.add_trick('play dead')
d.tricks  # ['roll over']
e.tricks  # ['play dead']
```

If the same attribute name occurs in both an instance and in a class, then
attribute lookup prioritizes the ==instance==:
```python
class Warehouse:
   purpose = 'storage'
   region = 'west'

w1 = Warehouse()
print(w1.purpose, w1.region) # storage west

w2 = Warehouse()
w2.region = 'east'  # override the class attribute for current instance
print(w2.purpose, w2.region) # storage east

print(Warehouse.purpose, Warehouse.region) # storage west
```

Data attributes may be referenced by methods as well as by ordinary users
(“clients”) of an object. In other words, classes are not usable to implement
pure abstract data types. ==In fact, nothing== in Python makes it possible to
enforce data hiding — it is all based upon convention. (On the other hand, the
Python implementation, written in C, can completely hide implementation details
and control access to an object if necessary; this can be used by extensions to
Python written in C.)

Clients should use data attributes with care — clients may mess up invariants
maintained by the methods by stamping on their data attributes. Note that
clients may add data attributes of their own to an instance object without
affecting the validity of the methods, as long as name conflicts are avoided —
again, a ==naming== convention can save a lot of headaches here.

There is no shorthand for referencing data attributes (or other methods!) from
within methods (need to use ==`self` or `cls`==). I find that this actually
increases the readability of methods: there is no chance of confusing local
variables and instance variables when glancing through a method.

Often, the first argument of a method is called `self`. This is nothing more
than a convention: the name `self` has ==absolutely no== special meaning to
Python. Note, however, that by not following the convention your code may be
less readable to other Python programmers, and it is also conceivable that a
*class browser* program might be written that relies upon such a convention.

Any function object that is a class attribute defines a ==method== for instances
of that class. It is not necessary that the function definition is textually
enclosed in the class definition: assigning a function object to a local
variable in the class is also ok. For example:
```python
# Function defined outside the class
def f1(self, x, y):
    return min(x, x+y)

class C:
    f = f1

    def g(self):
        return 'hello world'

    h = g

# Now `f`, `g` and `h` are all attributes of class `C` that refer to function
# objects, and consequently they are all methods of instances of `C` — `h` being
# exactly equivalent to `g`. Note that this practice usually only serves to
# confuse the reader of a program.
```

Methods may call other methods by using method attributes of the ==`self`==
argument:
```python
class Bag:
    def __init__(self):
        self.data = []

    def add(self, x):
        self.data.append(x)

    def addtwice(self, x):
        self.add(x)
        self.add(x)
```

<!-- https://stackoverflow.com/questions/68117207/how-do-modules-and-scope-interact-when-the-same-module-is-imported-into-the-same -->
<!-- NEXT: need review this and next notes-->

Methods may reference global names in the same way as ordinary functions. The
global scope associated with a method is the ==module== containing its
definition.

A class is never used as a ==global== scope. While one rarely encounters a good
reason for using global data in a method, there are many legitimate uses of the
global scope: for one thing, functions and modules imported into the global
scope can be used by methods, as well as functions and classes defined in it.
Usually, the class containing the method is itself defined in this global scope.

Each value is an object, and therefore has a *class* (also called its *type*).
It is stored as `object.==__class__==`.

To get parent class you can use this dunder variable:
==`object.__class__.__bases__`==.

Of course, a language feature would not be worthy of the name “class” without
supporting inheritance. The syntax for a derived class definition looks like
this:
&#10;<br>
```python
class DerivedClassName(BaseClassName):
    <statement-1>
    <statement-N>
```
The name `BaseClassName` must be defined in a namespace accessible from the
scope containing the derived class definition. In place of a base class name,
other arbitrary expressions are also allowed. This can be useful, for example,
when the base class is defined in another module:
```python
class DerivedClassName(modname.BaseClassName):
```

Execution of a derived class definition proceeds the same as for a base class.
When the class object is constructed, the base class is remembered. This is used
for resolving attribute references: if a requested attribute is not found in the
class, the search proceeds to look in the ==base class==. This rule is applied
recursively if the base class itself is derived from some other class.

There’s nothing special about instantiation of derived classes:
`DerivedClassName()` creates a new instance of the class. Method references are
resolved as follows: the corresponding class attribute is searched, descending
down the chain of ==base== classes if necessary, and the method reference is
valid if this yields a function object.

Derived classes may override methods of their base classes. Because methods have
no special privileges when calling other methods of the same object, a method of
a base class that calls another method defined in the same base class may end up
calling a method of a derived class that ==overrides it.== (For C++ programmers:
all methods in Python are effectively `virtual`.)

An overriding method in a derived class may in fact want to extend rather than
simply replace the base class method of the same name. There is a simple way to
call the base class method directly: just call
==`BaseClassName.methodname(self, arguments)`==. This is occasionally useful to
clients as well. Note: that this only works if the base class is accessible as
`BaseClassName` in the global scope.

Python has two built-in functions that work with inheritance (check type of an
object):
&#10;<br>
- Use `isinstance()` to check an instance’s type: `isinstance(obj, int)` will be
`True` only if `obj.__class__` is `int` or some class derived from `int`
- Use `issubclass()` to check class inheritance: `issubclass(bool, int)` is
`True` since `bool` is a subclass of `int`. However, `issubclass(float, int)` is
`False` since `float` is not a subclass of `int`.


Python supports a form of multiple inheritance as well. A class definition with
multiple base classes looks like this:
```python
class DerivedClassName(Base1, Base2, Base3):
    <statement-1>
    <statement-N>
```
\
For most purposes, in the simplest cases, you can think of the search for
attributes inherited from a parent class as depth-==first, left-to-right==, not
searching twice in the same class where there is an overlap in the hierarchy.
Thus, if an attribute is not found in `DerivedClassName`, it is searched for in
`Base1`, then (recursively) in the base classes of `Base1`, and if it was not
found there, it was searched for in `Base2`, and so on (in fact more complex
logic is used here).

In fact, search for attributes from derived classes more complex than
depth-first, left-to-right; the method resolution order changes dynamically to
support cooperative calls to ==`super()`==. This approach is known in some other
multiple-inheritance languages as call-next-method and is more powerful than the
super call found in single-inheritance languages.

Dynamic ordering is necessary because all cases of multiple inheritance exhibit
one or more diamond relationships (where at least one of the parent classes can
be accessed through multiple paths from the bottommost class). For example, all
classes inherit from `object`, so any case of multiple inheritance provides more
than one path to reach `object`. To keep the base classes from being accessed
more than once, the dynamic algorithm linearizes the search order in a way that
preserves the ==left-to-right== ordering specified in each class, that calls
each parent only once, and that is monotonic (meaning that a class can be
subclassed without affecting the precedence order of its parents). Taken
together, these properties make it possible to design reliable and extensible
classes with multiple inheritance. For more detail, see [The Python 2.3 Method
Resolution Order](https://docs.python.org/3/howto/mro.html#python-2-3-mro).

Do “private” instance variables exist in Python?
&#10;<br>
“Private” instance variables that cannot be accessed except from inside an
object don’t exist in Python. However, there is a convention that is followed by
most Python code: a name prefixed with an underscore (e.g. `_spam`) should be
treated as a non-public part of the API (whether it is a function, a method or a
data member). It should be considered an implementation detail and subject to
change without notice.

Since there is a valid use-case for class-private members (namely to avoid
**name clashes** of names with names defined by subclasses), there is limited
support for such a mechanism, called ==*name mangling*==. Any identifier of the
form `__spam` (at least two leading underscores, at most one trailing
underscore) is textually replaced with `_classname__spam`, where `classname` is
the current class name with leading underscore(s) stripped. This mangling is
done without regard to the syntactic position of the identifier, as long as it
occurs within the definition of a class.

Name mangling is helpful for letting subclasses override methods without
breaking intraclass method calls. For example:
```python
class Mapping:
    def __init__(self, iterable):
        self.items_list = []
        self.__update(iterable)

    def update(self, iterable):
        for item in iterable:
            self.items_list.append(item)

    __update = update   # private copy of original update() method

class MappingSubclass(Mapping):

    def update(self, keys, values):
        # provides new signature for update()
        # but does not break __init__()
        for item in zip(keys, values):
            self.items_list.append(item)
```
Will this example work if `MappingSubclass` introduces a `__update` identifier?
&#10;<br>
Yes. The above example would work even if `MappingSubclass` were to introduce a
`__update` identifier since it is replaced with `_Mapping__update` in the
`Mapping` class and `_MappingSubclass__update` in the `MappingSubclass` class
respectively. Example:
```python
class Mapping:
    __update = "__update"

class MappingSubclass(Mapping):
    __update = "__update"

print(dir(Mapping))          # ['_Mapping__update', '__doc__', '__module__']
print(dir(MappingSubclass))  # ['_MappingSubclass__update', '__doc__', '__module__']
```

Note that the mangling rules are designed mostly to avoid accidents; it
==still is possible== to access or modify a variable that is considered private.
This can even be useful in special circumstances, such as in the debugger.

<!-- NEXT: need to understand why -->

Notice that code passed to `exec()` or `eval()` does not consider the classname
of the invoking class to be the current class; this is similar to the effect of
the `global` statement, the effect of which is likewise restricted to code that
is byte-compiled together. The same restriction applies to `getattr()`,
`setattr()` and `delattr()`, as well as when referencing `__dict__` directly.
\
In other words "magic" of double-underscores will not work with exec or eval, so
consider the following example:
```python
class Foo:
    def __init__(self):
        self.__bar = 42
    def method0(self):
        return self.__bar * 2
    def method1(self):
        return eval('self.__bar * 2')

f = Foo()
f.method0()  # 84

f.method1()
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
#   File "<stdin>", line 7, in method1
#   File "<string>", line 1, in <module>
# AttributeError: 'Foo' object has no attribute '__bar'
# Similarly, for getattr etc:

getattr(f, '__bar')
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
# AttributeError: 'Foo' object has no attribute '__bar'
```

Sometimes it is useful to have a data type similar to the Pascal “record” or C
“struct”, bundling together a few named data items. The idiomatic approach is to
use [`dataclasses`](https://docs.python.org/3/library/dataclasses.html#module-dataclasses).
(generate special methods on user-defined classes) for this purpose, can you
provide simple example?
&#10;<br>
```python
from dataclasses import dataclass

@dataclass
class Employee:
    name: str
    dept: str
    salary: int

john = Employee('john', 'computer lab', 1000)
print(john.dept)    # 'computer lab'
print(john.salary)  # 1000
```

A piece of Python code that expects a particular abstract data type can often be
passed a ==class== that emulates the methods of that data type instead. For
instance, if you have a function that formats some data from a file object, you
can define a class with methods `read()`  and `readline()` that get the data
from a string buffer instead, and pass it as an argument.

[Instance method
objects](https://docs.python.org/3/reference/datamodel.html#instance-methods)
have attributes, too: `m.__self__` is the instance object with the method `m()`,
and ==`m.__func__`==  is the function object corresponding to the method.

By now you have probably noticed that most container objects can be looped over
using a `for`
statement:
\
```python
for element in [1, 2, 3]:
    print(element)
for element in (1, 2, 3):
    print(element)
for key in {'one':1, 'two':2}:
    print(key)
for char in "123":
    print(char)
for line in open("myfile.txt"):
    print(line, end='')
```
\
This style of access is clear, concise, and convenient. The use of iterators
pervades and unifies Python. Behind the scenes, the `for` statement calls
==`iter()`== on the container object. The function returns an iterator object
that defines the method `__next__()` which accesses elements in the container
one at a time. When there are no more elements, `__next__()` raises a
`StopIteration` exception which tells the `for` loop to terminate. You can call
the `__next__()` method using the `next()` built-in function; this example shows
how it all works:
\
```python
s = 'abc'
it = iter(s)
print(it)  # <str_iterator object at 0x10c90e650>
print(next(it))  # 'a'
print(next(it))  # 'b'
print(next(it))  # 'c'
print(next(it))
# Traceback (most recent call last):
#   File "<stdin>", line 1, in <module>
#     next(it)
# StopIteration
```

Can you provide an example of how to create an iterator class?
&#10;<br>
Having seen the mechanics behind the iterator protocol, it is easy to add
iterator behavior to your classes. Define an `__iter__()` method which returns
an object with a `__next__()` method. If the class defines `__next__()`, then
`__iter__()` can just return `self`:
\
```python
class Reverse:
    """Iterator for looping over a sequence backwards."""
    def __init__(self, data):
        self.data = data
        self.index = len(data)

    def __iter__(self):
        return self  # Object with __next__ method

    def __next__(self):
        if self.index == 0:
            raise StopIteration  # Signal the end of iteration
        self.index = self.index - 1  # Offset by -1
        return self.data[self.index]

rev = Reverse('spam')
iter(rev)  # <__main__.Reverse object at 0x00A1DB50>
for char in rev:
    print(char)

# m
# a
# p
# s
```

What is a generator in Python?
&#10;<br>
[Generators](https://docs.python.org/3/glossary.html#term-generator) are a
simple and powerful tool for creating iterators. They are written like regular
functions but use the
[`yield`](https://docs.python.org/3/reference/simple_stmts.html#yield) statement
whenever they want to return data. Each time
[`next()`](https://docs.python.org/3/library/functions.html#next "next") is
called on it, the generator resumes where it left off (it remembers all the data
values and which statement was last executed). An example shows that generators
can be trivially easy to create:
&#10;<br>
```python
def reverse(data):  # Generator function
    for index in range(len(data)-1, -1, -1):
        yield data[index]  # Pause iterations here and return the value to func.
        # Point of execution is saved here, we resume when external code calls
        # the next() method

generator_object = reverse('golf')
print(generator_object)  # <generator object reverse at 0x00A1DB50>
for char in generator_object:
    print(char)

# f
# l
# o
# g
```

Anything that can be done with generators can also be done with class-based
==iterators==. What makes generators so compact is that the `__iter__()` and
`__next__()` methods are created automatically.
\
Another key feature is that the local variables and execution state are
automatically saved between calls. This made the function easier to write and
much more clear than an approach using instance variables like `self.index` and
`self.data`.
\
In addition to automatic method creation and saving program state, when
generators terminate, they automatically raise `StopIteration`. In combination,
these features make it easy to create iterators with no more effort than writing
a regular function.

How to create Generator Expressions? Can you provide some examples?
&#10;<br>
Some simple generators can be coded succinctly as expressions using a syntax
similar to list comprehensions but with parentheses instead of square brackets.
These expressions are designed for situations where the generator is used right
away by an enclosing function. Generator expressions are more compact but less
versatile than full generator definitions and tend to be more memory friendly
than equivalent list comprehensions:
```python
sum(i*i for i in range(10))                 # 285, sum of squares

xvec = [10, 20, 30]
yvec = [7, 5, 3]
sum(x*y for x,y in zip(xvec, yvec))         # 260,  dot product

page = "lorem ipsum dolor"
unique_words = set(word for line in page  for word in line.split())

valedictorian = max((student.gpa, student.name) for student in graduates)

data = 'golf'
list(data[i] for i in range(len(data)-1, -1, -1))
# ['f', 'l', 'o', 'g']
```
