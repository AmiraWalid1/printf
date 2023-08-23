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
static int __attribute__((__unused__))cnt;

int _printf(const char *formatbetty, ...);
void _putchar(char c);
int _puts(char *str);
int _print_char(va_list list);
int _print_string(va_list list);
int _UnsignedIntToBinary(va_list list);
int _print_number(va_list list);
int _print_number_rec(int n);
int _print_IntToOctal(va_list list);
int _print_IntToHexaLarge(va_list list);
int _print_IntToHexaSmall(va_list list);
int _printUnsignedInt(va_list list);
int _print_number_recUnsigned(unsigned int n);
int _percent(char symbol, va_list list);


#endif
