#include "main.h"

/**
* _strcmp - function that compares two strings
* @s1 : number one to compare
* @s2: number two to compare
* Return: 0 is numbers are equal result of sustraction if not.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
			return (*s1 - *s2);
}
