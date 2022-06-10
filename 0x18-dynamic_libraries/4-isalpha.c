#include "main.h"
#include <ctype.h>
/**
 *_isalpha - return one if c is lowercase else return zero
 *
 *Return: 0
 *@c: number for evaluate
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
