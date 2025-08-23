---
author:
  - Ned Batchelder
created: 2024-04-24T00:00+03:00
external:
  - https://www.youtube.com/watch?v=FxSsnHeWQBY
tags:
  - blog
  - work-tool
  - literature
sr-due: 2025-09-14
sr-interval: 66
sr-ease: 206
---

# Getting Started Testing - PyCon 2014

If you've never written tests before, you probably know you _should_, but view the whole process as a bureaucratic paperwork nightmare to check off on your ready-to-ship checklist. This is the wrong way to approach testing. Tests are a solution to a problem that is important to you: does my code work? I'll show how Python tests are written, and why.

Slides can be found at:

- https://speakerdeck.com/pycon2014
- https://github.com/PyCon/2014-slides

## Features

Features of unit-testing, what are the benefits of unit testing?
<br class="f">
- Know if your code works, eliminate fear and worrying
- Save time by catching bugs and issues early
- Improve you code and product
- "Debugging is hard, testing is easy"
- Reduce entropy and chaos

## Growing tests

How to tests must be written?
- [ ] rewrite
<br class="f">
- Automated (low effort and repeatable)
- Tests must be repeatable with low effort (run independently, fast)
- Explicit expected results
- Checked automatically
- Reliable (really tests something)
- Informative (to quickly find the problem)
- Focused (little code as possible, help with debugging)

## Unittest (automated test)

What is `unittest`?
<br class="f">
- Python standard library
- Infrastructure for well-structured tests
- Patterned on xUnit
A simple unit test:
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
You execute Unittest by this command `python -m unittest test_portfolio.py` Possible output:
```
F..E
======================================================================
FAIL: test_buy_one_stock (test_portfolio.PortfolioTest)
...
Run 3 tests in 0.000s

Dots indicate passing tests. `F` indicates a failing test. `E` indicates an exception in a test. Usually it's a bug in the test code.
```

What ensures test isolation in Unittest?
<br class="f">
- All tests get a new test object (it's preferable, to avoid side effects from previous tests).
- Tests can't affect each other.
- Failure doesn't stop next tests.

Use ==`assertEqual`== instead of `assert`, because it gives value which generated the failure.
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
- [ ] test

Can you write own base class with custom assert method?
<br class="f">
Yes, you can write you own base class to write domain specific helpers/asserts
```python
class PortfolioTest(unittest.TestCase):
    """Base class for all Portfolio tests"""
    def assertCostEqual(self, p, cost):
        """Assert that `p`'s cost is equal to `cost`"""
        self.assertEqual(p.cost(), cost)

class PortfolioTest(...):
...
```

How to call function in unittest to test?
- [ ] not clear
<br class="f">
Unittest can't call the function to test (for example with wrong number of arguments), you need use special `assertRaises` method with context manager.
```python
with self.assertRaises(TypeError):
    p.buy('IBM', 100)
```

If you see repetition you need refactor code. You can use `setUp` (before each test) and ==`tearDown`== (after each test) methods to avoid repetition.
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
`setUp` and `tearDown` gives isolation!:
- establish context
- common `per-` or `post-` work
- isolation, even with failures
- also: `fixtures`

Is there difference between real and test code?
<br class="f">
No. Tests are the real code:
- Helper functions, classes, etc. So use real code, which used in your program
- Can become significant
- Might need tests! <!--SR:!2025-08-04,5,226-->

## Mocks

What main problem mocks solve?
<br class="f">
Mocks solve the problem of dependencies which can be really slow.
Fake results can solve the problem of dependencies and give predictable test results (you not depending on external factors) but some code in some time isn't tested!

So you use sort-of real objects, but with using for example "monkey patching" or patching (don't forget to unpatch it in `tearDown`) which give a predictable result of the function and in same time you test it.

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
