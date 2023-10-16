#include "main.h"

/**
 * _printf - custom printf.
 * @format: format string.
 * Return: number of printed characters.
*/

int _printf(const char *format, ...)
{
	unsigned long int i;
	int count = 0;
	va_list list;
	formater form[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'%', handle_percent}
	};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		for (i = 0; i < sizeof(form) / sizeof(form[0]); i++)
		{
			if (*format == form[i].s)
			{
				form[i].callf(list, &count);
				break;
			}
		}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
