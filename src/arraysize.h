#ifndef ARRAYSIZE_H
#define ARRAYSIZE_H

/* returns the size of a string */
int array_size_c(char *s);

/*
The functions below are limited
They only work as long as the condition holds
Example, for int array_size_pi(int *pi);, an array of say {1,2,3,4,5} will pass
but {1,0,2,3,4} will fail since zero is not greater than zero
*/

/* returns the size of positivetive integers */
int array_size_pi(int *pi);

/* returns the size of negative integers */
int array_size_ni(int *ni);

/* returns the number of zeros in an array*/
int array_size_zeroes(int *z);


#endif /* ARRAYSIZE_H */
