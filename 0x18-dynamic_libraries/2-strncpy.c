#include "main.h"

/**
**_strncpy - function tha concatenate two strings
* @dest : place where append de src string
* @src: place of the string for append
* @n: n is number until print src
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
