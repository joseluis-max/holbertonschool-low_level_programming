# Hello World Project
__Why C programming is awesome?__

- Almost all popular languages are built on top of the C language.
- 500,000 lines of C code powered the Mars Curiosity Rover.
- It's the coding language of choice for kerner development.
- C have more than 30 years old.
- It's portable.

__Who invented C?__

C was invented for Dennis Ritchie.
You can rean more here <a href="https://en.wikipedia.org/wiki/Dennis_Ritchie#C_and_Unix" target="_blank">Dennis Ritchie Wikipedia</a>

__Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds?__

Dennis Ritchie create C, with Brian kernighan and Ken Thompson created Unix, and Linux Torvads create Linux.

__What happens when you type gcc main.c?__

`main.c` will to be compilated to machine code, for this neen throught for follow steps:
- preprocessor
  Delete comments include headers and replace macro with code in the main.c
- compile
  Compile generate assembly code.
- assembly
  Convert assemble code into machine code.
- linker
  linked the machine code with libraries for make the executable file.
  
__What is an entry point?__

  In computers, an entry point is the point in a program, module or function where the code begins; specifically, the memory address where it begins.
  
__What is main?__

  Is the entry point for C languages program.
  
__How to print text using printf, puts and putchar?__

```C
  int i = 0;
  char str1[15] = "1er Hola Mundo";
  
  puts(str1);
  printf("This is %s", str1);
  
  while (str[i])
  {
    putchar(str[i]);
    i++;
  }
```

__How to get the size of a specific type using the unary operator sizeof?__

```C
  int size = typeof(int);
```

__How to compile using gcc?__

```
$ gcc main.c
```

__What is the default program name when compiling with gcc?__

`a.out`

__What is the official C coding style and how to check your code with betty-style__

-  [Linux Kernel coding style](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/plain/Documentation/process/coding-style.rst), but it's slightly modified.

 __How to find the right header to include in your source code when using a standard library function?__
 
 - I think you need to check your function documentation. If you are in Linux you can just use "man" and check for the documentation, that if the function itself has a main function.
For example, if you run "man 3 printf" it will show the library file (stdio.h) you need.
But if what you want to know is which file includes your function, you can run the preprocessor, and read that file, it usually has the unwrapped information.
 
 __How does the main function influence the return value of the program?__
 
 If the execution of the program was succes return 0, if not return 1

## Everything you need to know for this project.

### What's C ?

- C is an imperative (procedural) language, had all your code inner a function, the files C are the source of th program, we need compilate it to create an executable file.
### Comments

- The comments can be inserted anywhere a white-space character is allowed, we can use it for document us code, can't nest, it start with `/*` and end with `*/`

 ```C
 /* single line comment */
 
 /* 
  multi
  line
  comment
 */
 
 /* 
   * multi
   * line
   * comment
 */
 
 /* Does not /* work */ nest comment*/
 ```
 ### Variables
 __Data types__ | __Integer types__ (on most 64bits computers)
 
 | Type            | Storage size | Value Range                    |
 |:----------------|:-------------|:-------------------------------|
 | char            | 1 byte       | -128 to 127                    |
 | unsigned char   | 1 byte       | 0 to 255                       |
 | short           | 2 bytes      | -32,768 to 32, 767             |
 | unsigned short  | 2 bytes      | 0 to 65, 535                   |
 | int             | 4 bytes      | 2,147,483,648 to 2,147,483,647 |
 | unsigned int    | 4 bytes      | 0 to 4,294,967,295             |
 | long            | 8 bytes      | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| unsigned long    | 8 bytes      | 0 to 18,446,744,073,709,551,615 |

__Declaration__
- Variables always have a type.

Syntax
> type var_name;

Example:
```C
int i;
unsigned int age;
```
> **_NOTE:_**  Names of Varibles: [a-zA-Z_][a-zA-Z_0-9]*

Examples: 
- [x] age
- [x] age_Julian
- [x] floor2
- [ ] 2floor
- [ ] #snake
- [ ] @Snake

### GCC
It's a compiler for c and c++, generally does processing, compilation, assembly, linking into a default file name `a.out`
```
$ gcc main.c
```
__Options__

`-E`: to preprocess only.

`-S`: to compile Only.

`-c`: to compile and assemble.

`-o <file>`: place the output into <file>.
  
`-Wall`:  check not only for errors but also for all kinds warning like unused variables errors.
  
`-Werror`:show the warning if any error is there in the program.
  
`-Wextra`: enables some extra warning flags that are not enabled by.
  
`-pedantic`: Issue all the warnings demanded by strict ISO C and ISO C++.
  
`-std=gnu98`:This command will use the gnu98 version of standards for compiling the source.c program.
  
Examples: 
```
  $ gcc hello.c -o hello
```
```
  $ gcc -S -Wall -Werror hello -o only_compile_hello
```
### Printf()
The C library function int printf(const char *format, ...) sends formatted output to stdout 
 - `format` − This is the string that contains the text to be written to stdout.
- It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested.
- Format tags prototype is %[flags][width][.precision][length]specifier.
  
> **_NOTE:_** You can see all specifier, flags, width, .precision, length and your description in <a href="https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm" target="_blank">tutorialspoint printf</a>
  
### putchar()
The C library function int putchar(int char) writes a character (an unsigned char) specified by the argument char to stdout.
  
- `char` − This is the character(ASCII) to be written. This is passed as its int promotion.
  
### puts();
The C library function int puts(const char *str) writes a string to stdout up to but not including the null character. A newline character is appended to the output.
- `str` − This is the C string to be written.
