#include "ternary-logic.h"

ternary negate(ternary a){
  return a * -1;
}

ternary t_and(ternary a, ternary b){
   return a < b ? a : b; 
}

ternary t_or(ternary a, ternary b){
    return a > b? a : b; 
}