# Varibles - If else - While Loops
General
__What are the arithmetic operators and how to use them ?__

An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them.
``` C
    int sum;
    
    sum = 10 + 20;
    printf("%d", sum);

```

__What are the logical operators (sometimes called boolean operators) and how to use them ?__

is a symbol or word used to connect two or more expressions such that the value of the compound expression produced depends only on that of the original expressions and on the meaning of the operator.[1] Common logical operators include AND, OR, and NOT.
``` C
 if (conditionA and conditionB)
 {
    printf("Both conditions are true");
 }
```

__What the the relational operators and how to use them ?__

 Relational operators are symbols used to specify a certain relationship between two numbers or numeric values and number-like elements in an equation. 
 ``` C
 if (numberA > numberB)
 {
    printf("Number is greather then numberB");
 }
```

__What values are considered TRUE and FALSE in C ?__

  1. False Values:
     + `false`
     + `null`
     + `undefined`
     + `""`
     + `0`
     + `NaN`
  3. True Values:
     + Any other value and any other object.

__What are the boolean operators and how to use them ?__

  Boolean Operators are the operators that operate on the Boolean values, and   if it is applied on a non-Boolean value, then the value is first typecasted   and then operated upon.
  
 ``` C
    num  = 0101 << 3
    printf("%d", num)
```

__How to declare variables of types char, int, unsigned int ?__

``` C
  int num;
  char a;
  unsigned int;
```

__How to assign values to variables ?__

``` C
  int num;
  char a;
  unsigned int num2;
  
  num = 1;
  a = 'a';
  num2 = 5;
```

__How to print the values of variables of type char, int, unsigned int with printf ?__

  ``` C
  int num;
  char a;
  unsigned int num2;
  
  num = 1;
  a = 'a';
  num2 = 5;
  
  printf("%c | %d | %u");
```

__What are the purpose of the gcc flags -m32 and -m64 ?__

  - `-m32`: compile for 32bit machine
  - `-m64`: compile for 64bit machine

__Keywords and identifiers__
C keeps a small set of keywords for its own use, keywords can'tbe uset as identifiers.
    
| Table |  Keywords ||      |
|------|--------|------|------|
| auto | double | int | struct|
| break | else | long | switch |
| case | enum | register | typedef |
| char | extern | return | union|
| const | float | short | unsigned |
| continue | for | signed | void |
| default | goto | sizeof | volatile |
| do | if | static | while |

Identifier is the fancy term used to mean ‘name’. In C, identifiers are used to refer to a number of things: we've already seen them used to name variables and functions. They are also used to give names to some things we haven't seen yet, amongst which are labels and the ‘tags’ of structures, unions, and enums.

__Arithmetic Operators in C__

> **_NOTE:_**  A = 10, B = 20 then:

| Operator | Description           | Example     |
| ---      | ---                   | ---         |
| +        | Adds two operands     | A + B = 30  |
| -        | Subtracts operands    | A - B = -10 |
| *        | Multiplies operands   | A * B = -200|
| /        | Divide operands       | A / B = 2   |
| %        | Modulus or remainder  | A % B = 0   |
| ++       | Increment             | A++ = 11    |
| --       | Decrement             | A-- = 9     |

__If statement__

``` C
if ( TRUE ) {
    /* between the braces is the body of the if statement */
    Execute all statements inside the body
}
```

__If else statement__

``` C
  if ( TRUE ) {
      /* Execute these statements if TRUE */
  }
  else {
      /* Execute these statements if FALSE */
  }
```

__If else if statement__

``` C
  #include <stdio.h>    
 
int main()                            /* Most important part of the program!  */
{
    int age;                          /* Need a variable... */
   
    printf( "Please enter your age: " );  /* Asks for age */
    scanf( "%d", &age );                 /* The input is put in age */
    if ( age < 100 ) {                  /* If the age is less than 100 */
        printf ("You are pretty young!\n" ); /* Just to show you it works... */
    }
    else if ( age == 100 ) {            /* I use else just to show an example */ 
        printf( "You are old\n" );       
    }
    else {
        printf( "You are really old\n" );     /* Executed if no other statement is */
    }
  return 0;
 
}
```

__Relation Operators__

> **_NOTE:_**  A = 10, B = 20 then:
> 
| Operator | Description           | Example     |
| ---      | ---                   | ---         |
| ==       | Ckeck if the value of two operands are equal  | (A == B) is false |
| !=       | Checks if the values of two operands aren't equal | (A != B) is true |
| >        | Checks if the value of left operand is greater than the value of right operand | (A > B) is false |
| <        | Checks if the value of left operand is less than the value of right operand | (A < B) is true|
| >=       | Checks if the value of left operand is greater than or equal to the value of right operand.  | (A >= B) is false   |
| <=       | Checks if the value of left operand is less than or equal to the value of right operand.  | (A <= B) is true |

__While loop statement__

``` C
while(condition) {
   statement(s);
}
```

__ASCII__ 

[ASCII](https://man7.org/linux/man-pages/man7/ascii.7.html) character set encoded in octal, decimal, and hexadecimal
