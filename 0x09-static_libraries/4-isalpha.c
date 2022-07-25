#include "main.h"
#include <ctype.h>

/**
 *  _isalpha - func
 *  @c: print
 *  Description : print
 *  Return: 0 
 */

int _isalpha(int c)
{
	if (islower(c) || isupper(c) || (c <= 'a' && c >= 'z'))
	{
		return(1);
	}
	else if (c <= 'A' && c >= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
