#include "main.h"

/**
 * _print_char - print character
 * @list: pointer
 *
 * Return: 1
*/
int _print_char(va_list list)
{
	char c = (char)va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
