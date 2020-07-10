#include <stdio.h>
#include "src/printpointervalues.h"
#include "src/arraysize.h"

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

    printf("\n\n");

    // Find the size of a non-charatcer array
    // was difficult, so I had to compromise
    // to find positive and negative numbers in an array instead

    char *title = "pointers and arrays in c++";

    int posDataSet[] = {2, 5, 73, 6, 79};
    int negDataSet[] = {-2, -5, -73, -6, -79};
    int zeroDataSet[] = {0, 0, 0, 0, 0};

    printf("%d\n", array_size_c(title));
    printf("%d\n", array_size_pi(posDataSet));
    printf("%d\n", array_size_ni(negDataSet));
    printf("%d\n", array_size_zeroes(zeroDataSet));

    return 0;
}
