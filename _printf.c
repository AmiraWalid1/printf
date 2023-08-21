#include "main.h"

/**
 * _printf - print
 * @format: character string.
 *
 * Return:number of characters printed
 * (excluding the null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	va_list list;
	int cnt = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				cnt++;
			}
			else
			{
				cnt += _percent(*format, list);
			}
		}
		else
		{
			write(1, format, 1);
			cnt++;
		}
		format++;
	}
	va_end(list);
	return (cnt);
}
