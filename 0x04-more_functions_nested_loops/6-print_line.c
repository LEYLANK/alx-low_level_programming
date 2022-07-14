#include "main.h"

/**
  * print_line - check for a digit
  * @n : number of _ to be printed
  * Return:void
  */

void print_line(int n)
{
	int count;
	int n;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
