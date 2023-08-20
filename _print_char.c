#include "main.h"
/**
 * _print_char - print character
 * @list: pointer
 *
 * Return: 1
*/
int _print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
