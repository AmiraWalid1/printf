#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
/**
 * struct printer - struct printer
 * @symbol: symbol
 * @print: pointer to print function
*/
typedef struct printer
{
	char symbol;
	int (*print)(va_list list);

} printer;
int _printf(const char *format, ...);
void _putchar(char c);
int _puts(char *str);
int _print_char(va_list list);
int _print_string(va_list list);
int _percent(char symbol, va_list list);

#endif
