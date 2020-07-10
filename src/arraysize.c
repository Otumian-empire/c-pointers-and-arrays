#include "arraysize.h"

int array_size_c(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return n;
}


int array_size_pi(int *pi)
{
	int n = 0;

	while (pi[n] > 0)
	{
		n++;
	}

	return n;
}

int array_size_ni(int *pi)
{
	int n = 0;

	while (pi[n] < 0)
	{
		n++;
	}

	return n;
}

int array_size_zeroes(int *z)
{
	int n = 0;

	while (z[n] == 0)
	{
		n++;
	}

	return n;
}
