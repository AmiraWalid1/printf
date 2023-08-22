#include "main.h"

/**
 * _print - print full number.
 * @n: number
 *
 * Return: void
*/

void _print(int n)
{
	
	if (n!=0)
	{	char number;
		_print(n/10);
		number = n%10 + '0';
		write(1, &number, 1);
	}
	
}

/**
 * _print_number - print integer.
 * @list: pointer
 *
 * Return: len of int
*/
int _print_number(va_list list)
{

	int n = va_arg(list, int);
	_print(n);
	va_end(list);
	return (1);
}