#include"main.h"
/**
  * print_numbers -  checks for checks for a digit (0 through 9).
  *
  * Return: Always 0.
  */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	
	{
		_putchar('0' + n);
		n++;
	}

	_putchar('\n');

}
