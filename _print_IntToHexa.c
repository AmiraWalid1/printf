#include "main.h"
/**
 * _print_IntToHexa - convert int argumen to octal.
 * @list: pointer
 *
 * Return: len of int in binary
*/
int _print_IntToHexa(va_list list)
{
	int i = 0, num = va_arg(list, int), len = 0, val;
	char hexaNum[100];
	
	while (num)
	{
		hexaNum[i] = num % 16;
		val = num;
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
