#include "main.h"

/**
 * _puts - function that print string.
 * @str: pointer int type
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
