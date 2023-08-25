---
title: "Effective Python Testing With Pytest"
author: Dane Hillard
dateAdded: 2023-04-29
canonicalUrl: https://realpython.com/pytest-python-testing/
citekey: DaneHillardEffectivePythonTesting
tags:
  - research
  - code-tip
localLibrary: zotero://select/items/1_VE3KQUQY
cloudLibrary: http://zotero.org/users/9108355/items/VE3KQUQY
draft: true
---

## Survey & Questions (need remove all after find answers)

Pip search?
Palindrome?
Overhead?
Test doubles?
Test coverage?
BDD?
Gherkin?
Pytest main benefits, what it makes useful?
Why less boilerplate code?
Python assertion?
Pytest discover?
How output is nicer?
Pytest output?
Why less to learn?
Why easier to manage state and dependiencies?
How easy to filter and run tests?
What and why allow test parmeterization?
Plugin-based architecture?
Main purpose of fixtures?
Managing state and dependencies? (meaning and why)?
When to need to create fixtures??
When need to avoid fixtures?
How use fixtures at scale?
How categorize tests?
How compine/parametirize (and why) tests?
Fighting slow tests?
Plugins:?
    - pytest-randomly?
    - pytest-cov (coverage)?
    - pytest-django?
    - pytest-flask?
    - pytest-bdd (bdd method?)?

---

In this tutorial, you'll learn how to take your testing to the next level with
pytest. You'll cover intermediate and advanced pytest features such as fixtures,
marks, parameters, and plugins. With pytest, you can make your test suites fast,
effective, and less painful to maintain.

Testing code bring various benefits, code works as expected, fewer regressions.

This tutorial will cover:
- pytest benefits
- how to ensure your tests are stateless
- how to make repetitious tests more comprehensible
- how to run subsets of tests by name or custom groups
- how to create and maintain reusable testing utilities

First need to intialize a virtual environment and install pytest.

```bash
# or just use function python-venv
python3 -m venv .venv
source venv/bin/activate
python -m pip install pytest
```

## Pytest benefits

### Less boilerplate code.

Most functional tests follow the ==Arrange-Act-Assert== model.

If you check `test_with_unitest.py` you found a lot of boilerplate code to
create test case. And you will repeat this for every test case.

To avoid this boilerplate code, you can use pytest, and it also allows using
python's native `assert` statement
Check `test_with_pytest.py` for example.

### Nicer output

pytest output include:
- System state (python version, platform, plugins)
- The `rootdir`, or the directory to search under for configuration and tests
- The number of tests the runner discovered

pytest use same status indicators as unittest (dot for success, F for failure, E
for exception).

pytest give detailed breakdown of the failures.

Overall pytest output is more readable and informative than unittest.

### Less to learn

You can use `assert` like you use checking for truthiness in python.
Check `test_assert_examples.py`
