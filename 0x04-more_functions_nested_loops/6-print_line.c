#include "main.h"

/**
  * print_line - check for a digit
  * @n : number of _ to be printed
  * Return:void
  */

void print_line(int n)
{
	int count = n, i;

	for (i = 0; i < count; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
