#include <stdio.h>
#include "printpointervalues.h"

void printPointerValues(int *pointerObject) {
    printf("%d has address: %p\n", *pointerObject, &pointerObject);
    //printf("%d\n", pointerObject );
}

