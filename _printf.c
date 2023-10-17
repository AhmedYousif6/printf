#include "main.h"

/**
 * _printf - custom printf.
 * @format: format string.
 * Return: number of printed characters.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += handle_format(format, list);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(list);
	return (count);
}
