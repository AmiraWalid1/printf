#include "main.h"
/**
 * _print_string - print string
 * @list: pointer
 *
 * Return: size of string
*/
int _print_string(va_list list)
{
	return (_puts(va_arg(list, char *)));
}
