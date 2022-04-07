#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two positive numbers
 *
 * @argc: argument count, must be 3
 * @argv: arguments, argv[1] and argv[2]
 *
 * Return: product of argv[1] by argv[2]
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i, j, k, len1, len2, len, d1, d2, d1d2, carry, *mul;

	if (argc != 3 || !(_isnumber(argv[1])) || !(_isnumber(argv[2])))
		_error(), exit(98);
	num1 = argv[1], num2 = argv[2];
	len1 = _strlen(num1), len2 = _strlen(num2), len = len1 + len2;
	mul = _calloc(len, sizeof(int));
	if (mul == NULL)
		exit(98);
	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = num2[j] - '0';
			d1d2 = d1 * d2;
			mul[i + j + 1] += d1d2 % 10;
			carry = d1d2 / 10;
			if (mul[i + j + 1] > 9)
			{
				mul[i + j] += mul[i + j + 1] / 10;
				mul[i + j + 1] = mul[i + j + 1] % 10;
			}
			mul[i + j] += carry;
		}
	}
	for (k = 0; mul[k] == 0 && k < len; k++)
		;
	if (k == len)
		_putchar(mul[len - 1] + '0');
	else
	{
		for (i = k; i < len; i++)
			_putchar(mul[i] + '0');
	}
	_putchar('\n');
	free(mul);
	return (0);
}

/**
 * _isnumber - checks for digit-only (0 through 9) numbers
 *
 * @str: parameter hard-coded in main
 *
 * Return: 1 or 0
 */

int _isnumber(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _error - print error
 * Return: void
 */

void _error(void)
{
	int i;
	char error[] = "Error";

	for (i = 0; i < 5; i++)
		_putchar(error[i]);
	_putchar('\n');
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: size of the memory space to allocate in bytes
 * @size: size of type
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: parameter defined in main, pointer to memory area
 * @b: parameter defined in main, constant byte
 * @n: parameter defined in main, number of bytes to be filled
 *
 * Return: memory address of function (memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *tmp = s;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	s = tmp;
	return (s);
}
