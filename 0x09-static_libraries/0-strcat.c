#include "main.h"
#include <string.h>

/**
 * *_strcat - concentrates two strings
 * @dest: func para
 * @src: second func para
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
