---
date: 2022-12-29
tags:
  - inbox
  - IRL
sr-due: 2024-01-30
sr-interval: 3
sr-ease: 252
---
# ledger

> Ledger is a powerful, double-entry accounting system that is accessed from the
> UNIX command-line.\
> — <cite>[ledger](https://www.ledger-cli.org/)</cite>

I'm almost not used ledger-cli before. But I want to try to use it IRL.

Ledger offer double-entry accounting journal, where you track your transactions
(plain text file). It's use a standard bookkeeping approach.

Ledger transaction example:

```
2042/02/21 Shopping
    Expenses:Food:Groceries                 $42.00
    Assets:Checking                        -$42.00
```

In accounting every type of income or expense and every "place" which holds some
value is "account" (sort of category).

Accounts examples:

- expenses;
- income;
- assets;
- liabilities;
- receivables;
- equity.

We track the flow of money from one account to another, amount of money figures
twice, total balance of all accounts is always zero.

## Journal example

```
; The opening balance (first transaction) sets up your initial financial state.
2041/12/31 * Opening Balance
    Assets:Checking                       $1000.00
    Equity:OpeningBalances

; The money comes from the employer and goes into the bank account.
2041/01/31 * Salary
    Income:Salary                           -$1337
    Assets:Checking                          $1337

; Groceries were paid using the bank account's electronic cash card
; so the money comes directly from the bank account.
2042/02/15 * Shopping
    Expenses:Food:Groceries                 $42.00
    Assets:Checking

; Although we know the cash sits in the wallet, everything in cash is
; considered as "lost" until recovered (see next transaction and later chapters).
2042/02/15 * ATM withdrawal
    Expenses:Unknown                       $150.00
    Assets:Checking

; Paying food with cash: Moving money from the Expenses:Unknown
; account to the food account.
2042/02/15 * Shopping
    Expenses:Food:Groceries                 $23.00
    Expenses:Unknown

; Ledger automatically reduces 'Expenses:Unknown' by $69.
2042/02/22 * Shopping
    Expenses:Food:Groceries                 $23.00
    Expenses:Clothing                       $46.00
    Expenses:Unknown

; You can use positive (add money to an account) or negative
; (remove money from an account) amounts interchangeably.
2042/02/22 * Shopping
    Expenses:Food:Groceries
    Expenses:Unknown                       -$42.00
```

## Quickstart

First install `ledger`, for me, it's aviable in ArchLinux/NixOS community repo.

Then you need to create `journal.txt` file, use example above.

Then run this commands to quickly understand how it's basicaly working:

```
$ # Usage: ledger -f <journal-file> [...]
$ ledger -f journal.txt balance
$ ledger -f journal.txt balance Groceries
$ ledger -f journal.txt register

# Start an interactive session
# and type "balance", then  press Enter
# (press ctrl+d to quit)
$ ledger -f journal.txt
```

## References

- [ ] [Getting Started With Ledger - August 28, 2019 201f047](https://rolfschr.github.io/gswl-book/latest.html)
- [ ] [Ledger: Command-Line Accounting](https://www.ledger-cli.org/3.0/doc/ledger3.html)
- [ ] [pig-monkey.com ledger](https://pig-monkey.com/search.html?q=ledger)
- [ ] [finance | pig-monkey.com](https://pig-monkey.com/tag/finance/)
