
#ifndef VARIADIC_FUNCTIONS_C
#define VARIADIC_FUNCTIONS_C

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
* struct print_funcs - check code
*
* @type: type
* @print_func: func
*/
typedef struct print_funcs
{
	char *type;
	void (*print_func)(va_list list);
} print_funcs;

void print_ch(va_list char_list);
void print_int(va_list int_list);
void print_float(va_list float_list);

#endif
