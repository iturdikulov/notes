---
created: 2023-03-21T00:00+03:00
tags:
  - blog
sr-due: 2025-07-14
sr-interval: 1
sr-ease: 130
---

# Pseudocode

This note is based on great "Pseudocode Standard" [^1] article.

Kind of structured English for describing algorithms. Used to focus on the logic
of the algorithm without being distracted by details of language syntax. Good
pseudocode describe the entire logic of the algorithm and it's implementation
became mechanical task of translating line by line into source code.

Vocabulary used in pseudocode should be the vocabulary of the problem domain
(not realisation). So someone who understand requirements (problem domain) can
easily read it.

```
Extract the next word from the line (good)
set word to get next token (poor)

Append the file extension to the name (good)
name = name + extension (poor)

FOR all the characters in the name (good)
FOR character = first to last (ok)
```

Avoid too vague expressions, logic should be decomposed to the level of single
loop or decision.

Style of pseudocode is free, but better to use some common convections, for
example this "structured" part of pseudocode (notation of base constructs):
SEQUENCE, WHILE, IF-THEN-ELSE, REPEAT-UNTIL, FOR, and CASE.

- SEQUENCE is a linear progression where one task is performed sequentially
  after another.
- IF-THEN-ELSE is a decision (selection) in which a choice is made between two
  alternative courses of action.
- WHILE is a loop (repetition) with a simple conditional test at its beginning.
- CASE is a multiway branch (decision) based on the value of an expression. CASE
  is a generalization of IF-THEN-ELSE.
- REPEAT-UNTIL is a loop with a simple conditional test at the bottom.
- FOR is a "counting" loop.

## SEQUENCE

Sequential control is indicated by writing one action after another, each action
on a line by itself, and all actions aligned with the same indent. The actions
are performed in the sequence (top to bottom) that they are written.

Example (non-computer)

```
Brush teeth
Wash face
Comb hair
Smile in mirror
```

Example of pseudocode

```
READ height of rectangle
READ width of rectangle
COMPUTE area as height times width
```

Several keywords are often used to indicate common input, output, and processing
operations.

```
Input: READ, OBTAIN, GET
Output: PRINT, DISPLAY, SHOW
Compute: COMPUTE, CALCULATE, DETERMINE
Initialize: SET, INIT
Add one: INCREMENT, BUMP
```

## IF-THEN-ELSE

Binary choice on a given Boolean condition is indicated by the use of four
keywords: IF, THEN, ELSE, and ENDIF. The general form is:

```
IF condition THEN
    sequence 1
ELSE # optional keyword and sequence
    sequence 2
ENDIF
```

Example

```
IF HoursWorked > NormalMax THEN
    Display overtime message
ELSE
    Display regular time message
ENDIF
```

## WHILE

The WHILE construct is used to specify a loop with a test at the top. The
general form is:

```
WHILE condition
    sequence  # loop is entered only if the condition is true
ENDWHILE
```

Example

```
WHILE Population < Limit
    Compute Population as Population + Births - Deaths
ENDWHILE
```

Example

```
WHILE employee.type NOT EQUAL manager AND personCount < numEmployees
    INCREMENT personCount
    CALL employeeList.getPerson with personCount RETURNING employee
ENDWHILE
```

## CASE

A CASE construct indicates a multiway branch based on conditions that are
mutually exclusive. Four keywords, CASE, OF, OTHERS, and ENDCASE, and conditions
are used to indicate the various alternatives. The general form is:

```
CASE expression OF
    condition 1 : sequence 1
    condition 2 : sequence 2
    ...
    condition n : sequence n
    OTHERS: default sequence  # optional default sequence
ENDCASE
```

Example CASE Title OF Mr : Print "Mister" Mrs : Print "Missus" Miss : Print
"Miss" Ms : Print "Mizz" Dr : Print "Doctor" ENDCASE

## REPEAT-UNTIL

This loop is similar to the WHILE loop except that the test is performed at the
bottom of the loop instead of at the top. Two keywords, REPEAT and UNTIL are
used. The general form is:

```
REPEAT
    sequence # Sequence prefomred at least once, before the test
UNTIL condition # repeat if condition is True and stop if False
```

## FOR

This loop is a specialized construct for iterating a specific number of times,
often called a "counting" loop. Two keywords, FOR and ENDFOR are used. The
general form is:

```
FOR iteration bounds # from x to y
    sequence
ENDFOR
```

In cases where the loop constraints can be obviously inferred it is best to
describe the loop using problem domain vocabulary.

Example

```
    FOR each month of the year (good)
    FOR month = 1 to 12 (ok)

    FOR each employee in the list (good)
    FOR empno = 1 to listsize (ok)
```

## NESTED CONSTRUCTS

The constructs can be embedded within each other, and this is made clear by use
of indenting. Nested constructs should be clearly indented from their
surrounding constructs.

Example

```
    SET total to zero
    REPEAT

        READ Temperature
        IF Temperature > Freezing THEN
            INCREMENT total
        END IF

    UNTIL Temperature < zero
    Print total
```

In the above example, the IF construct is nested within the REPEAT construct,
and therefore is indented.

## INVOKING SUBPROCEDURES

Use the CALL keyword. For example:

```
CALL AvgAge with StudentAges
CALL Swap with CurrentItem and TargetItem
CALL Account.debit with CheckAmount
CALL getBalance RETURNING aBalance
CALL SquareRoot with orbitHeight RETURNING nominalOrbit
```

## EXCEPTION HANDLING

```
BEGIN
    statements
EXCEPTION
    WHEN exception type
        statements to handle exception
    WHEN another exception type
        statements to handle exception
END
```

## EXAMPLES

"Adequate"

```
FOR X = 1 to 10 # can be replaced with domain vocabulary
    FOR Y = 1 to 10
        IF gameBoard[X][Y] = 0 # used specific syntax instead domain vocabulary
            Do nothing # can be avoided
        ELSE
            CALL theCall(X, Y) (recursive method)
            increment counter                 
        END IF
    END FOR
END FOR
```

"Better"

```
Set moveCount to 1
FOR each row on the board
    FOR each column on the board
        IF gameBoard position (row, column) is occupied THEN
            CALL findAdjacentTiles with row, column
            INCREMENT moveCount
        END IF
    END FOR
END FOR

(Note: the logic is restructured to omit the "do nothing" clause)
```

"Not So Good"

```
FOR all the number at the back of the array
    SET Temp equal the addition of each number
    IF > 9 THEN
        get the remainder of the number divided by 10 to that index
        and carry the "1"
    Decrement one
Do it again for numbers before the decimal
```

"Good Enough (not perfect)", mixed verbs: COMPUTE, SET, STORE, and SUBTRACT are
used inconsistently, better to unify, for example `SET`.

```
SET Carry to 0
FOR each DigitPosition in Number from least significant to most significant

    COMPUTE Total as sum of FirstNum[DigitPosition] and SecondNum[DigitPosition] and Carry  

    IF Total > 10 THEN
        SET Carry to 1
        SUBTRACT 10 from Total
    ELSE
        SET Carry to 0
    END IF

    STORE Total in Result[DigitPosition] #  could be confusing in some pseudocode conventions 

END LOOP  

IF Carry = 1 THEN
    RAISE Overflow exception
END IF
```

"Pretty Good" This example shows how pseudocode is written as comments in the
source file. Note that the double slashes are indented.

```python
def move_robot(robot: Robot):
    //IF robot has no obstacle in front THEN
        // Call Move robot
        // Add the move command to the command history
        // RETURN true
    //ELSE
        // RETURN false without moving the robot
    //END IF
```

Source code statements are interleaved with pseudocode. Comments that correspond
exactly to source code are removed during coding.

Example Python Implementation

```python
def move_robot(a_robot: Robot):
    # IF robot has no obstacle in front THEN
    if a_robot.is_front_clear():
        # Call Move robot
        a_robot.move()
        # Add the move command to the command history
        cmd_history.append(RobotAction.MOVE)
        return True
    else:  # don't move the robot
        return False
    # END IF
```

[^1]: [Pseudocode Standard](http://users.csc.calpoly.edu/~jdalbey/SWE/pdl_std.html)
