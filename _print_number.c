#include "main.h"

/**
 * _print_number_rec - print full number recursion.
 * @n: number
 *
 * Return: length of num
*/

int _print_number_rec(int n)
{
	char number;

	if (n != 0)
	{	cnt++;
		_print_number_rec(n / 10);
		number = (n % 10) + '0';
		write(1, &number, 1);
	}
	return (cnt);
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

	cnt = 0;
	_print_number_rec(n);
	return (cnt);
}
