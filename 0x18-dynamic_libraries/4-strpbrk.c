#include "main.h"

/**
**_strpbrk - function that count ocurrences of first segmen with accept char
*@s: string of input
*@accept: characters that should compare with s
*Return: the string with coincidences
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
