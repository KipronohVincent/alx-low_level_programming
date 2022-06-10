#include "main.h"

/**
* *_strcat - function tha concatenate two strings
* @dest : place where append de src string
* @src: place of the string for append
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int n;
	int len = _strlen(dest);

	for (n = 0; src[n] != '\0'; n++, len++)
	{
		dest[len] = src[n];
	}

	return (dest);
}

