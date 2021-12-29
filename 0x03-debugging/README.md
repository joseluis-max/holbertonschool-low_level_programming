# Debugging 

**What is debugging**

  In computer programming and software development, debugging is the process of finding and
  resolving bugs (defects or problems that prevent correct operation) within computer programs, software, or systems.

  Debugging tactics can involve interactive debugging, control flow analysis, unit testing,
  integration testing, log file analysis, monitoring at the application or system level, memory
  dumps, and profiling. Many programming languages and software development tools also offer programs
  to aid in debugging, known as debuggers.
  
**What are some methods of debugging manually**

- Brute Force Method: 
This is the foremost common technique of debugging however is that the least economical method.
during this approach, the program is loaded with print    statements to print the intermediate
values with the hope that a number of the written values can facilitate to spot the statement in error.
This approach becomes a lot of systematic with the utilisation of a symbolic program (also known as a source code debugger),
as a result of values of various variables will be simply checked and breakpoints and watch-points can be easily set to check
the values of variables effortlessly. 

- Backtracking: 
This is additionally a reasonably common approach. during this approach, starting from the statement at
which an error symptom has been discovered, the source code is derived backward till the error is discovered.
sadly, because the variety of supply lines to be derived back will increase, the quantity of potential backward
methods will increase and should become unimaginably large so limiting the utilisation of this approach. 


- Cause Elimination Method: 
In this approach, a listing of causes that may presumably have contributed to the error symptom is developed and
tests are conducted to eliminate every error. A connected technique of identification of the error from the error
symptom is that the package fault tree analysis. 


- Program Slicing: 
This technique is analogous to backtracking. Here the search house is reduced by process slices.
A slice of a program for a specific variable at a particular statement is that the set of supply
lines preceding this statement which will influence the worth of that variable 

**How to read the error messages**

  You can read this blog for more information about [read error messages](https://hackernoon.com/how-to-read-programming-error-messages-22795982c217)
  
**Extra Resources**

[Rubber Duck Debugging: The Psychology of How it Works](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)


