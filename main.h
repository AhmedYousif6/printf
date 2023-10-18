#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 1024


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
int print_int(int nm);
int print_bin(unsigned int nm);
int handle_bin(va_list list);
int handle_format(const char *format, va_list list);
int handle_custom(va_list list);
int handle_ui(va_list list);
int handle_octal(va_list list);
int handle_hex(va_list list);
int handle_hex_up(va_list list);
int print_ui(unsigned int nm);
int print_octal(unsigned int nm);
int print_hex(unsigned int nm, int up);

#endif
