#include "main.h"
/**
 * _print_string - print string
 * @list: pointer
 *
 * Return: size of string
*/
int _print_string(va_list list)
{
	char *str = va_arg(list, char *);

	write(1, str, strlen(str));
	return (strlen(str));
}
