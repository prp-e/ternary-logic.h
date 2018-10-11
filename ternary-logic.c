#include "ternary-logic.h"

ternary negate(ternary a){
  return a * -1;
}

ternary t_and(ternary a, ternary b){
    if(a == TRUE && b == TRUE){
        return TRUE; 
    }
    else if(a == TRUE && b == MAYBE){
        return MAYBE; 
    }
    else if(a == TRUE && b == FALSE){
        return FALSE; 
    }
    else if(a == MAYBE && b == TRUE){
        return MAYBE; 
    }
    else if(a == MAYBE && b == MAYBE){
        return MAYBE; 
    }
    else if(a == MAYBE && b == FALSE){
        return FALSE;
    }
    else if(a == FALSE, b == TRUE){
        return FALSE; 
    }
    else if(a == FALSE, b == MAYBE){
        return FALSE; 
    }
    else {
        return FALSE; 
    }
}

ternary t_or(ternary a, ternary b){
    if(a == TRUE && b == TRUE){
        return TRUE; 
    }
    else if(a == TRUE && b == MAYBE){
        return TRUE; 
    }
    else if(a == TRUE && b == FALSE){
        return TRUE; 
    }
    else if(a == MAYBE && b == TRUE){
        return TRUE; 
    }
    else if(a == MAYBE && b == MAYBE){
        return MAYBE; 
    }
    else if(a == MAYBE && b == FALSE){
        return MAYBE; 
    }
    else if(a == FALSE && b == TRUE){
        return TRUE;
    }
    else if(a == FALSE && b == MAYBE){
        return MAYBE; 
    }
    else {
        return FALSE;
    }
}