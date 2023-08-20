#include "main.h"
/**
 * _puts - print string.
 * @str: pointer to string
 *
 * Return: len of string
 */
int _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		_putchar(*str);
		str++;
	}
	return (len);
}
