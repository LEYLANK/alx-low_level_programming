#include  "main.h"
/**
  * main - print_alphabet - a function that prints the alphabet, in lowercase
  *
  * Return: Always 0 (Succes)
  */
void print_alphabet(void);
{
	int j;
	for (j = 'a' ; j <= 'z' ;j++)
	{
		print_alphabet(j);
	}
	_putchar('\n');
}
