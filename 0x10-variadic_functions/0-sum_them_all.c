#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of functions
 * @...: number of parameters to cal sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
