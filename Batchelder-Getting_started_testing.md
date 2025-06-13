---
author:
  - Ned Batchelder
date: 2024-04-24T00:00+03:00
external:
  - https://www.youtube.com/watch?v=FxSsnHeWQBY
tags:
  - blog
  - computer_testing
  - annotation_video
sr-due: 2024-01-29
sr-interval: 2
sr-ease: 226
---

# Getting Started Testing - PyCon 2014

If you've never written tests before, you probably know you _should_, but view
the whole process as a bureaucratic paperwork nightmare to check off on your
ready-to-ship checklist. This is the wrong way to approach testing. Tests are a
solution to a problem that is important to you: does my code work? I'll show how
Python tests are written, and why.

Slides can be found at:
- https://speakerdeck.com/pycon2014
- https://github.com/PyCon/2014-slides

## Features

Features of unit-testing?
<br class="f">
- Know if your code works
- Save time
- Better code
- Remove fear
- "Debugging is hard, testing is easy"
- Test defending from chaos

## Roadmap

- Growing tests
- unittest
- Mocks

## Growing tests

How tests must be written?
<br class="f">
- automated (low effort and repeatable)
- tests must be repeatable with low effort (run independently, fast)
- explicit expected results
- checked automatically
- reliable (really tests something)
- informative (to quickly find the problem)
- focused (little code as possible, help with debugging)

## unittest (automated test)

- python standard library
- infrastructure for well-structured tests
- patterned on xUnit

A simple unit test

```python
import unittest
from portfolio import Portfolio

class PortfolioTest(unittest.TestCase):
    def test_buy_one_stock(self):
        p = Portfolio()
        p.buy('IBM', 100, 176.48)
        assert p.cost() == 17648.0

# Under the covers
# unittests runs the tests as if I had written
# if I had more methtods, they will run in same behavior (for each test use
# try/except/else)
testcase = PortfolioTest()
try:
    testcase.test_buy_one_stock()
except AssertionError:
    [record the failure]
else:
    [record the success]
```

You execute unittest by this command `python -m unittest test_portfolio.py`
Possible output:

```
F..E
======================================================================
FAIL: test_buy_one_stock (test_portfolio.PortfolioTest)
...
Run 3 tests in 0.000s
```

Dots indicate passing tests. `F` indicates a failing test. `E` indicates an
exception in a test. Usually it's a bug in the test code.

tests isolation

- all tests get a new test object (it's preferable, to avoid side effects from
  previous tests)
- tests can't affect each other
- failure doesn't stop next tests

Use `assertEqual` instead of `assert`, because it gives value which generated
the failure.

Other assert helpers:

```python
assertEqual(a, b)
assertNotEqual(a, b)
assertTrue(x)
assertFalse(x)
assertIn(a, b)
assertNotIn(a, b)
assertIs(a, b)
assertIsNot(a, b)
assertAlmostEqual(a, b)
assertNotAlmostEqual(a, b)
assertGreater(a, b)
assertLess(a, b)
assertRegexpMatches(s, r)
assertRaises(exc, fun, *args, **kwds)
assertSequenceEqual(a, b)
assertItemsEqual(a, b)
...
```

Pro-tip: you own base class to write domain specific helpers/asserts

```python
class PortfolioTest(unittest.TestCase):
    """Base class for all Portfolio tests"""
    def assertCostEqual(self, p, cost):
        """Assert that `p`'s cost is equal to `cost`"""
        self.assertEqual(p.cost(), cost)

class PortfolioTest(...):
...
```

Unittest can't call the function to test (for example with wrong number of
arguments), you need use special `assertRaises` method with context manager.

```python
with self.assertRaises(TypeError):
    p.buy('IBM', 100)
```

If you see repetition you need refactor code. You can use `setUp` (before each
test) and `tearDown` (after each test) methods to avoid repetition.

Under the covers:

```python
testcase = PortfolioTest()
try:
    testcase.setUp()
except:
    [record error]
else:
    try:
        testcase.test_method()
    except AssertionError:
        [record the failure]
    except:
        [record the error]
    else:
        [record the success]
    finally:
        try:
            testcase.tearDown()
        else:
            [record error]
```

`setUp` and `tearDown` give you isolation!:

- establish context
- common `per-` or `post-` work
- isolation, even with failures
- also: `fixtures`

Tests are real code!

- helper functions, classes, etc. (so use real code, which used in your program)
- can become significant
- might need tests!

## Mocks

Mocks solve the problem of dependencies which can be really slow.

Fake results can solve the problem of dependencies and give predictable test
results (you not depending on external factors) but some code in some time isn't
tested!

So you use sort-of real objects, but with using for example "monkey patching" or
patching (don't forget to unpatch it in `tearDown`) which give a predictable
result of the function and in same time you test it.

Even better: mock objects (`import mock`)

- Automatic chameleons
- Act like any object
- Record what happened to them
- You can make assertions afterward
- It can `patch` objects for you (for example `urlopen`)

Test doubles:

- powerful: isolates code
- focuses tests
- removes speed bumps and randomness
- BUT: fragile tests!
- Also: "dependency injection"

## Additional

Tools

- `addCleanup`: nicer than tearDown
- `doctest`: only for testing docs!!!
- `nose, py.test`: better test runners
- `ddt`: data driven tests
- `coverage`: you'll wonder how you lived without it
- `Selenuim`: in-browser testing
- `Jenkins, Travis`: run tests all the time

Topics

- `TDD`: write tests first
- `BDD`: describe external behavior
- `integration tests`: test the whole system, bigger chunks
- `load testing`: how many users can your system handle
- ...
