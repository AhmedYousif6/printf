#include "main.h"

/**
 * _printf - custom printf.
 * @format: format string.
 * Return: number of printed characters.
*/

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list list;
	formater form[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'%', handle_percent}
	};

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < sizeof(form) / sizeof(form[0]); i++)
			{
				if (*format == form[i].s)
				{
					count += form[i].callf(list);
					break;
				}
			}
				if (i == sizeof(form) / sizeof(form[0]))
				{
					_putchar('%');
					_putchar(*format);
					count += 2;
				}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
		count++;
	}
	va_end(list);
	return (count);
}
