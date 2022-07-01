#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number to the variable and each time it is esecuted and prints out 
 * based a condition 
 * Return : Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

