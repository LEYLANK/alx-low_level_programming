#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string,
 * @s: function parameter
 * @c: second function parameter
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
