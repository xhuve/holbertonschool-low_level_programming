#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_ch - check code
 * @char_list: char
 *
 * Return: thing
 */
void print_ch(va_list char_list)
{
	printf("%c", va_arg(char_list, int));
}


/**
 * print_int - check code
 * @int_list: char
 *
 * Return: thing
 */
void print_int(va_list int_list)
{
	printf("%i", va_arg(int_list, int));
}


/**
 * print_float - check code
 * @float_list: char
 *
 * Return: thing
 */
void print_float(va_list float_list)
{
	printf("%f", va_arg(float_list, double));
}


/**
 * print_string - check code
 * @str_list: char
 *
 * Return: thing
 */

void print_string(va_list str_list)
{
	char *str;

	str = va_arg(str_list, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}


/**
 * print_all - check code
 * @format: char
 *
 * Return: thing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	va_list arg_list;

	print_funcs prints[] = {
		{"c", print_ch},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arg_list, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (prints[j].type != NULL)
		{
			if (*prints[j].type == format[i])
			{
				printf("%s", sep);
				sep = ", ";
				prints[j].print_func(arg_list);
			}
			j++;
		}
		i++;
	}


	printf("\n");
}
