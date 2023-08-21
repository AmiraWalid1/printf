#include "main.h"
/**
 * _UnsignedIntToBinary - convert unsigned int argumen to binary.
 * @list: pointer
 *
 * Return: len of int in binary
*/
int _UnsignedIntToBinary(va_list list)
{
	int binaryNum[32], i = 0, num = va_arg(list, unsigned int), len = 0;
	char curr_byte;

	while (num)
	{
		binaryNum[i] = num % 2;
		num /= 2;
		i++;
	}
	for (i = i - 1 ; i >= 0 ; i--)
	{
		curr_byte = binaryNum[i] + '0';
		write(1, &curr_byte, 1);
		len++;
	}
	return (len);
}
