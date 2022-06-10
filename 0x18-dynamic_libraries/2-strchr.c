#include "main.h"

/**
**_strchr - function that locates a character in a string
*@s: char to fill especify the space of memory
*@c:received int the limit
*Return: a pointer to the first ocurrence of character c
*/

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	return ('\0');
}
