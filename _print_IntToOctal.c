#include "main.h"
/**
 * _print_IntToOctal - convert int argumen to octal.
 * @list: pointer
 *
 * Return: len of int in binary
*/
int _print_IntToOctal(va_list list)
{
	int octalNum[32], i = 0, num = va_arg(list, int), len = 0;
	char curr_byte;

	while (num)
	{
		octalNum[i] = num % 8;
		num /= 8;
		i++;
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		curr_byte = octalNum[i] + '0';
		write(1, &curr_byte, 1);
		len++;
	}
	return (len);
}