#include "main.h"
/**
 * _print_IntToHexaLarge - convert int argumen to octal.
 * @list: pointer
 *
 * Return: len of int in binary
*/
int _print_IntToHexaLarge(va_list list)
{
	int i = 0, num = va_arg(list, int), len = 0, val;
	char hexaNum[100];

	while (num)
	{
		val = num % 16;
		if (val < 10)
			hexaNum[i] = val + '0';
		else
			hexaNum[i] = val + 55;
		num /= 16;
		i++;
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		write(1, &hexaNum[i], 1);
		len++;
	}
	return (len);
}
