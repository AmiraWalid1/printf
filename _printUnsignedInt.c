#include "main.h"
/**
 * _print_number_recUnsigned - print full number recursion.
 * @n: number
 *
 * Return: length of num
*/
int _print_number_recUnsigned(unsigned int n)
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
 * _printUnsignedInt - print integer.
 * @list: pointer
 *
 * Return: len of int
*/
int _printUnsignedInt(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char Number;

	cnt = 0;
	if (n == 0)
	{
		Number = n + '0';
		write(1, &Number, 1);
		cnt++;
	}
	if (n > 0)
	_print_number_recUnsigned(n);
	return (cnt);
}
