#include "main.h"
#include <string.h>
/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > '\0'; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
