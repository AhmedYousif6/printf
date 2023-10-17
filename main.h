#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
/**
 * struct specifier - structure contain two members,
 * specifieres and caller function.
 * @s: format of arguments.
 * @callf: function pointer to call handle functions.
*/

typedef struct specifier
{
	char s;
	int (*callf)(va_list);
} formater;


int _printf(const char *format, ...);
int _putchar(char c);
int handle_char(va_list list);
int handle_string(va_list list);
int handle_percent(va_list list);
int handle_int(va_list list);
int print_num(int nm);
int print_bin(unsigned int nm);
int handle_bin(va_list list);
int handle_format(const char *format, va_list list);

#endif
