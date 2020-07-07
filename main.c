#include <stdio.h>
#include "src/printpointervalues.h"

int main() {
    // One of the few things is that,
    // the memory address of y remains same and a 
    // modification of x, modifies y.
    
    int x = 2;
    int *y = &x;
    
    printPointerValues(y);
    printPointerValues(&x);
    
    *y = 7;
    printPointerValues(y);
    printPointerValues(&x);
    
    x = 10;
    printPointerValues(y);
    printPointerValues(&x);
    
    return 0;
}
