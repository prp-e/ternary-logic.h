#ifndef TERNARY_LOGIC_H
#define TERNARY_LOGIC_H

typedef int ternary; 

#define TRUE 1
#define MAYBE 0
#define FALSE -1 

ternary negate(ternary a);
ternary t_and(ternary a, ternary b); 
ternary t_or(ternary a, ternary b);

#endif