# LEX13 INSTRUCTIONS

## Introduction

You have been tasked with writing the code to compute the date after a
given date.  For example, the date after March 10, 2020 is March 11,
2020. Your code must handle all dates between January 1, 1582 and
December 31, 2500.

The algorithm for determining whether a year is a leap year can be
found here: https://en.wikipedia.org/wiki/Leap_year#Algorithm

## Main task

Your main task is to define the nextDay function.  You will find its
declaration in Date.h along with a stubbed out implementation in
Date.c).  The nextDay function must construct a new Date struct
representing the day after its argument, and then return a pointer to
that new struct.

## Process

Remember to follow the process we have discussed:

- Understand the requirements.

- Follow a Test-Driven Development approach, first writing black-box
tests (and any supporting functions needed, such as the sameDay
function) using a testing framework (CUnit).

- Next, work incrementally to develop an implementation that passes all
the black-box tests you wrote.

- Once the implementation compiles (gcc) and passes the black-box tests,
incrementally write white-box tests to get full test coverage (gcov).

- Use the debugger (gdb) as needed to track down bugs.

- Write an appropriate makefile for use with your build tool (make).

- Make sure the use your git repo diligently, branching and merging
as appropriate, committing and pushing to the remote repo
frequently, and always using meaningful commit messages.

You may refer to any of your previous work in this class (i.e. LEX01
to LEX12, PRE, and EXP01) as well as documentation for any tools we
have discussed so far.

## Finishing up

Make sure you remember to **add/commit/push to your repo on GitHub** - if you don't we can't grade your work!

After lab is finished fill in [the LEX 13 reflection form](https://docs.google.com/forms/d/e/1FAIpQLSev4wyuNvFOB6vOkcAHGeSwNzirnNFaIcNyz3UYuMCrPTgnyg/viewform?usp=sf_link).
