---
created: 2023-03-18T00:00+03:00
tags:
  - blog
  - now
file:
  - ./articles/Real_Python_-_SOLID_Principles.html
sr-due: 2025-09-12
sr-interval: 64
sr-ease: 208
---

# SOLID

> In software engineering, SOLID is a mnemonic acronym for five design principles intended to make object-oriented designs more understandable, flexible, and maintainable. The principles are a subset of many principles promoted by American software engineer and instructor Robert C. Martin, first introduced in his 2000 paper Design Principles and Design Patterns discussing software rot.\
> — <cite>[Wikipedia](https://en.wikipedia.org/wiki/SOLID)</cite>

The SOLID acronym was introduced later, around 2004, by Michael Feathers.

SOLID principles help build architecture with object-oriented design ([[OOD]]). This isn't simple process and challenge for your skills. Usually OOD is must be done before you start coding.

Main purpose of SOLID principles?
<br class="f">
Make your classes more maintainable, flexible, improve their structure and make scalable. But don't forget about overhead and over-engineering. You should use SOLID principles when you **need to** use them.

> Abstract code that repeats. Don't cross abstraction boundaries. Encapsulate into sensible logical units. Use interfaces for classes with common partial data contracts. But please don't go on a puritanical crusade and demand everything be abstracted to the nth degree and wrapped in endless single-use interfaces. That helps nobody and makes the code both unreadable and unscalable.

- The Single-responsibility principle: "There should never be more than one reason for a class to change." In other words, every class should have only one responsibility.

- The Open–closed principle: "Software entities ... should be open for extension, but closed for modification."

- The Liskov substitution principle: "Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it." See also design by contract.

- The Interface segregation principle: "Clients should not be forced to depend upon interfaces that they do not use."

- The Dependency inversion principle: "Depend upon abstractions, not concretions."

Although the SOLID principles apply to any object-oriented design, they can also form a core philosophy for methodologies such as agile development or adaptive software development.

TODO: add critical information about SOLID principles.

## Single-Responsibility Principle (SRP)

The **S**ingle-responsibility principle (SRP):
<br class="f">
"There should **never** be more than **one** reason for a class to change." Every class should have only one responsibility, each section of program must address a separate concern.

Example which violate SRP:

```python
# file_manager_srp.py
from pathlib import Path
from zipfile import ZipFile

class FileManager:
    def __init__(self, filename):
        self.path = Path(filename)

    def read(self, encoding="utf-8"):
        return self.path.read_text(encoding)

    def compress(self):
        with ZipFile(self.path.with_suffix(".zip"), mode="w") as archive
            archive.write(self.path)
```

Fixed example:

```python
# file_manager_srp.py
from pathlib import Path
from zipfile import ZipFile

class FileManager:
    """
    Class responsible for file operations
    reason to change - new file operation (write, delete, ...)
    """
    def __init__(self, filename):
        self.path = Path(filename)

    def read(self, encoding="utf-8"):
        return self.path.read_text(encoding)

class ZipFileManager:
    """
    Class responsible for archiving
    reason to change - new archiving operation (decompress, verify)
    """
    def __init__(self, filename):
        self.path = Path(filename)

    def compress(self):
        with ZipFile(self.path.with_suffix(".zip"), mode="w") as archive
            archive.write(self.path)
```

Be aware, having a single responsibility doesnʼt necessarily mean having a single method.

## The Open–closed principle (OCP)

The Open–closed principle:
<br class="f">
"Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification."

Example which violate OCP:

```python
# shapes_ocp.py

"""
We pass completely different args to this class (their type) and store
this object type specific logic here.
If you add more custom shapes support, this will become more
unpredictable, and potentially hard to maintain.
"""

from math import pi

class Shape:
    def __init__(self, shape_type, **kwargs):
        self.shape_type = shape_type

        # Open to modification, which isn't recommended
        if self.shape_type == "rectangle":
            self.width = kwargs["width"]
            self.height = kwargs["height"]
        elif self.shape_type == "circle":
            self.radius = kwargs["radius"]

    def calculate_area(self):
        # Open to modification, which isn't recommended
        if self.shape_type == "rectangle":
            return self.width * self.height
        elif self.shape_type == "circle":
            return pi * self.radius**2
```

Fixed example:

```python
# shapes_ocp.py

"""
Eeach Shape subclass has set of own properties and own calculate_area method
algorithm. ABC used to provide what’s called **interface inheritance**.
"""

from abc import ABC, abstractmethod
from math import pi

class Shape(ABC):
    def __init__(self, shape_type):
        self.shape_type = shape_type

    # Requires that the metaclass is ABCMeta or derived from it.  A
    # class that has a metaclass derived from ABCMeta cannot be
    # instantiated unless all of its abstract methods are overridden.
    @abstractmethod
    def calculate_area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        super().__init__("circle")
        self.radius = radius

    def calculate_area(self):
        return pi * self.radius**2

class Rectangle(Shape):
    def __init__(self, width, height):
        super().__init__("rectangle")
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height

class Square(Shape):
    def __init__(self, side):
        super().__init__("square")
        self.side = side

    def calculate_area(self):
        return self.side**2
```

## The Liskov substitution principle (LSP)

The Liskov substitution principle:
<br class="f">
Subtypes must be substitute for their base types, so anytime I can replace base class with any of their subclass, and nothing will be broken (other classes expectations). "Functions that use pointers or references to base classes must be able to use objects of derived classes without knowing it." See also design by contract.\
  ![Liskov: The Liskov Substitution Principle - YouTube](https://www.youtube.com/watch?v=-Z-17h3jG0A)\
  _Subtypes behave like supertypes, explaning the principle first hand._

Example which violate LSP:

```python
# shapes_lsp.py

class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height

# Square class from Rectangle in order to reuse the code.
# It makes setting .width and .height attributes not independed, which other
# classes don't expect (suprising and unwanted behaviour).
#
# You **can’t** replace instances of Rectangle with their Square counterparts.
class Square(Rectangle):
    def __init__(self, side):
        super().__init__(side, side)

    def __setattr__(self, key, value):
        super().__setattr__(key, value)
        # when one side changes, the other side also changes
        if key in ("width", "height"):
            self.__dict__["width"] = value
            self.__dict__["height"] = value
```

Fixed example (don't violate Liskov substitution):

```python
# shapes_lsp.py

from abc import ABC, abstractmethod

class Shape(ABC):
    """
    Shape can be substitute through polymorphism with either Rectangle or Square
    """
    @abstractmethod
    def calculate_area(self):
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def calculate_area(self):
        return self.side ** 2

def get_total_area(shapes):
    """
    Function only cares about calculate_area() method
    which both Rectangle and Square implement
    """
    return sum(shape.calculate_area() for shape in shapes)

get_total_area([Rectangle(10, 5), Square(5)])
```

## The Interface segregation principle (ISP)

The Interface segregation principle:
<br class="f">
"Clients should not be forced to depend upon interfaces that they do not use." Interfaces belong to clients, not to hierarchies.\
  In this case, clients are classes and subclasses, and interfaces consist of methods and attributes.\
  In other words, if a class doesn’t use particular methods or attributes, then those methods and attributes should be segregated into more specific classes.

Example which violate ISP:

```python
# printers_isp.py

from abc import ABC, abstractmethod

class Printer(ABC):
    @abstractmethod
    def print(self, document):
        pass

    @abstractmethod
    def fax(self, document):
        pass

    @abstractmethod
    def scan(self, document):
        pass

class OldPrinter(Printer):
    def print(self, document):
        print(f"Printing {document} in black and white...")

    def fax(self, document):
        raise NotImplementedError("Fax functionality not supported")

    def scan(self, document):
        raise NotImplementedError("Scan functionality not supported")

class ModernPrinter(Printer):
    def print(self, document):
        print(f"Printing {document} in color...")

    def fax(self, document):
        print(f"Faxing {document}...")

    def scan(self, document):
        print(f"Scanning {document}...")
```

Fixed example:

```python
# printers_isp.py

from abc import ABC, abstractmethod

class Printer(ABC):
    @abstractmethod
    def print(self, document):
        pass

class Fax(ABC):
    @abstractmethod
    def fax(self, document):
        pass

class Scanner(ABC):
    @abstractmethod
    def scan(self, document):
        pass

class OldPrinter(Printer):
    def print(self, document):
        print(f"Printing {document} in black and white...")

class NewPrinter(Printer, Fax, Scanner):
    def print(self, document):
        print(f"Printing {document} in color...")

    def fax(self, document):
        print(f"Faxing {document}...")

    def scan(self, document):
        print(f"Scanning {document}...")
```

## The Dependency inversion principle (DIP)

The Dependency inversion principle:
<br class="f">
"Depend upon abstractions, not concretes".\
  Abstractions should not depend upon details. Details should depend upon abstractions.

Example which violate DIP:

```python
# app_dip.py

"""
FrontEnd abstract class, which depends on specific sentry_backend class.
Both classes are tightly coupled. This coupling can lead to scalability issues.
"""

class FrontEnd:
    def __init__(self, sentry_backend):
        # We depending on concrete backend
        # what if we want to add additional backends?
        self.sentry_backend = sentry_backend

    def display_data(self):
        data = self.back_end.get_data_from_database()
        print("Display data:", data)


class BackEnd:
    def get_data_from_database(self):
        return "Data from the database"
    # add get_data_from_api() method?, but this will require to violate OCP
    # principle in FrontEnd class
```

Fixed example (apply the dependency inversion principle):

```python
# app_dip.py

from abc import ABC, abstractmethod

class FrontEnd:
    """
    FrontEnd abstract class.
    """
    def __init__(self, data_source):
        # Abstract data source object
        self.data_source = data_source

    def display_data(self):
        # Get data from abstract data source object by using abstract method
        data = self.data_source.get_data()

        print("Display data:", data)

class DataSource(ABC):
    """
    DataSource abstract class.
    """
    @abstractmethod
    def get_data(self):
        pass

class PikaDatabase(DataSource):
    """
    PikaDatabase, concrete implementation of details class.
    Inheritance from DataSource class.
    """
    def get_data(self):
        return "Data from the database"

class SentryAPI(DataSource):
    """
    SentryAPI, concrete implementation of details class.
    Inheritance from DataSource class.
    """
    def get_data(self):
        return "Data from the API"

db = PikaDatabase()
api = SentryAPI()

FrontEnd(db).display_data()
FrontEnd(api).display_data()
```

## TODO

- [x] [SOLID Principles: Improve Object-Oriented Design in Python – Real Python](https://realpython.com/solid-principles-python/), research article.
- [ ] [A Solid Guide to SOLID Principles - Baeldung](https://www.baeldung.com/solid-principles)
- [ ] [Evolving Software: SOLID principles as a continuum | Kislay Verma](https://kislayverma.com/programming/evolving-software-solid-principles-as-a-continuum/)
- [ ] [Как писать чистый код — советы для разработчиков с примерами / Хабр](https://habr.com/ru/articles/864758/)
- [ ] [Why SOLID principles are still the foundation for modern software architecture - Stack Overflow](https://stackoverflow.blog/2021/11/01/why-solid-principles-are-still-the-foundation-for-modern-software-architecture/),
- [ ] [I don't love the single responsibility principle](https://sklivvz.com/posts/i-dont-love-the-single-responsibility-principle)
