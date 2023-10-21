#include "main.h"

/**
 * handle_format - handle format specifiers.
 * @format: takes specifier.
 * @list: argument.
 * Return: num of printed bites.
*/

int handle_format(const char *format, va_list list)
{
	formater form[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'%', handle_percent},
		{'d', handle_int},
		{'i', handle_int},
		{'b', handle_bin},
		{'u', handle_ui},
		{'o', handle_octal},
		{'x', handle_hex},
		{'X', handle_hex_up},
		{'\0', handle_custom}
	};
	unsigned int i;

	for (i = 0; i < sizeof(form) / sizeof(form[0]); i++)
	{
		if (*format == form[i].s)
		{
			return (form[i].callf(list));
		}
	}
	_putchar('%');
	_putchar(*format);
	return (2);

}



/**
 * handle_int - handle integers
 * @list: passed argument
 * Return: number of printed
 */

int handle_int(va_list list)
{
	int nm, count = 0;
	const char *min = "-2147483648";

	nm = va_arg(list, int);
        if (nm == INT_MIN)
        {
                while (*min)
                {
                        _putchar(*min);
                        min++;
                        count++;
                }
        }
	else
	{
		if (nm < 0)
		{
			_putchar('0');
			count++;
			nm = -nm;
		}
		count += print_int(nm);
	}
	return (count);
}


/**
 * handle_bin - handle binary.
 * @list: argument.
 * Return: count of printed.
 */

int handle_bin(va_list list)
{
	int count = 0;
	unsigned int nm;

	nm = va_arg(list, unsigned int);
	count += print_bin(nm);
	return (count);
}



/**
 * handle_custom - handle unrecognize specifier.
 * @list: argument.
 * Return: count of printed chars
*/

int handle_custom(va_list list)
{
	const char *custr;
	int count = 0;

	custr = va_arg(list, const char *);
	while (*custr != '\0')
	{
		_putchar(*custr);
		custr++;
		count++;
	}
	return (count);
}
