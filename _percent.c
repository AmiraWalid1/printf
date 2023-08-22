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
		{'s', _print_string},
		{'b', _UnsignedIntToBinary},
		{'d', _print_number},
		{'i', _print_number},
		{'o', _print_IntToOctal},
		{'x', _print_IntToHexaSmall},
		{'X', _print_IntToHexaLarge},
		{'u', _printUnsignedInt}
	};
	int i = 0;
	char percent = '%';

	while (i < 9)
	{
		if (symbol == p[i].symbol)
		{
			return (p[i].print(list));
		}
		i++;
	}

	write(1, &percent, 1);
	write(1, &symbol, 1);
	return (2);
}
