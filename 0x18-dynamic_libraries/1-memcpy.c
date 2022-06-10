#include "main.h"

/**
**_memcpy - function that copy spaces of memory
*@dest:received a char
*@src: char to fill especify the space of memory
*@n:received int the limit
*Return: a pointer to the memory area 'dest'
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
