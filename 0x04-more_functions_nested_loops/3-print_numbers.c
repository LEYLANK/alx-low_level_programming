#include "main.h"


/**
  * print_numbers - print numbers
  * Return - always 0
  */

void print_numbers(void)
{
	int ii = 0;

	do
	{
		_putchar(ii + '0');
		ii++;
	}
	while (ii < 10);

	_putchar('\n');
}
