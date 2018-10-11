# Ternary logic implementation for C 
This is a personal project, I decided to implement "Three-valued logic" in C, as a hobby and also, a fun project. Hope you enjoy it!

## How to use 
Just copy `ternary-logic.h` and `ternary-logic.c` files in your project's directory and create a `.c` file, for example `canary.c`. Then add the header file and write your desired code : 

```c
#include "ternary-logic.h" 
#include <stdio.h>

int main(){
    ternary a = TRUE; 
    ternary b = FALSE; 
    ternary c = MAYBE; 
    printf("%d", negate(a));
    printf("%d", t_and(a, b));

    return 0;
}
``` 

consider my current implementation only supports 2-input logic functions. 
for compiling just use : 
```
gcc -o output canary.c ternary-logic.c
``` 

## To Do 
1. making multiple-input functions 
2. adding XOR 