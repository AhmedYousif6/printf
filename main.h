#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier - structure contain two members,
 * specifieres and caller function.
 * @s: format of arguments.
 * @callf: function pointer to call handle functions.
*/

typedef struct specifier
{
	char s;
	int* (*callf)(va_list, int *);
} formater;


int _printf(const char *format, ...);
int _putchar(char c);
int *handle_char(va_list list, int *count);
int *handle_string(va_list list, int *count);
int *handle_percent(va_list list, int *count);


#endif
