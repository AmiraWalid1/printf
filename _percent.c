#include "main.h"
/**
 * _percent - check type of argument will come and direct it
 * to correct function to print it.
 * @symbol: symbol
 * @list: pointer to argument
 *
 * Return: num of character will print
*/
int _percent(char symbol, va_list list)
{
	printer p[] = {
		{'c', _print_char},
		{'s', _print_string}
	};
	int i = 0;

	while (i < 2)
	{
		if (symbol == p[i].symbol)
		{
			return (p[i].print(list));
		}
		i++;
	}
	return (0);
}
