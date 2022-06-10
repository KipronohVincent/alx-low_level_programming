#include "main.h"

/**
 *_puts - swaps the value of two integers
 * @str: The pointer value one
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
