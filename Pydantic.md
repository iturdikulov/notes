---
created: 2024-11-13T21:24+03:00
tags:
  - blog
external: https://docs.pydantic.dev/latest/
sr-due: 2025-07-20
sr-interval: 7
sr-ease: 220
---

# Pydantic library

Python library to perform data validation. Has great typing support.

You declare the "shape" of the data as classes with attributes. And each
attribute has a type. Then you create an instance of that class with some
values, and it will validate the values, convert them to the appropriate type
(if that's the case) and give you an object with all the data.

```python
from datetime import datetime
from pydantic import BaseModel


# Declare the shape of the data
class User(BaseModel):
    id: int  # attribute with type
    name: str = "John Doe"
    signup_ts: datetime | None = None
    friends: list[int] = []


external_data = {
    "id": "123",
    "signup_ts": "2017-06-01 12:22",
    "friends": [1, "2", b"3"],
}
user = User(**external_data)  # create instance of the User class with values

# Pydantic converted values with validation and type conversion
print(user)
# > User id=123 name='John Doe' signup_ts=datetime.datetime(2017, 6, 1, 12, 22) friends=[1, 2, 3]
print(user.id)
# > 123
```

## Learning path

- [ ] [Advanced Pydantic Usage Guide · GitHub](https://gist.github.com/shiningflash/f17eabef18b38a70a38fb510130be58b)
