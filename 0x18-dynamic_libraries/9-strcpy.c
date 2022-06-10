#include "main.h"

/**
 *_strcpy - return the copy pointed string por src
 *@dest: copy source to here
 *@src: source for copy
 *Return: copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);

}
