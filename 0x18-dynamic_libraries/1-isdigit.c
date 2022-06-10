#include "main.h"

/**
 *_isdigit - check if the entry is upper or lowercase
 *@c: receive character
 *Return: 0 || 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
