# More nested loops and functios.

**What are nested loops and how to use them**
``` C
  while (condition) {
    while (condition) {
      //statement 1
      //statement 2
    }
    // statement 3 
    // statement 4
  }
```
**What is a function and how do you use functions**

  A function is a group of statements that together perform a task.
  Every C program has at least one function, which is main(),
  and all the most trivial programs can define additional functions.
  You can divide up your code into separate functions.
  ``` C
    int function sum (a, b)
    {
      return a + b;
    }
  ```
**What is the difference between a declaration and a definition of a function**

  A function declaration tells the compiler about a function name and how to call the function.
  The actual body of the function can be defined separately.
  A function declaration tells the compiler about a function's name, return type, and parameters.
  A function definition provides the actual body of the function.
  ``` C
    // Declaration function
    int function sum (a, b);
    
    sum(1, 2);
  
    // Definition function
    int function sum (a, b)
    {
      return a + b;
    }
  ```
**What is a prototype**

  The Function prototype serves the following purposes – 
    1) It tells the return type of the data that the function will return. 
    2) It tells the number of arguments passed to the function. 
    3) It tells the data types of each of the passed arguments. 
    4) Also it tells the order in which the arguments are passed to the function.
    Therefore essentially, the function prototype specifies the input/output interlace to the function 
    i.e. what to give to the function and what to expect from the function.
    The prototype of a function is also called the signature of the function.
    
**Scope of variables**

  A scope is a region of the program, and the scope of variables refers to the area of
  the program where the variables can be accessed after its declaration.
  
**What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89**

  Options

  -Wall: check not only for errors but also for all kinds warning like unused variables errors.

  -Werror:show the warning if any error is there in the program.

  -Wextra: enables some extra warning flags that are not enabled by.

  -pedantic: Issue all the warnings demanded by strict ISO C and ISO C++.

  -std=gnu98:This command will use the gnu98 version of standards for compiling the source.c program.
  
  **What are header files and how to to use them with #include**
  
    A header file is a file with extension .h which contains C function declarations and macro definitions
    to be shared between several source files. There are two types of header files: the files that the programmer
    writes and the files that comes with your compiler.

  You request to use a header file in your program by including it with the C preprocessing directive #include,
  like you have seen inclusion of stdio.h header file, which comes along with your compiler.
