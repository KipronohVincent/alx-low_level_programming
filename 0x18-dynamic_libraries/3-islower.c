#include "main.h"
#include <ctype.h>
/**
 * _islower - return one if c is lowercase else return zero
 *
 *Return: 0
 *@c: number for evaluate
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	return (0);
}
