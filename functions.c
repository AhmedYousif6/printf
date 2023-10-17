#include "main.h"

/**
 * _putchar - prints character to stdout.
 * @c: character to be printed.
 * Return: 1 on success, -1 on error.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * handle_char - prints a character
 * @list: argument to print
 * Return: number of printed characters
*/

int handle_char(va_list list)
{
	int c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}



/**
 * handle_string - prints a string
 * @list: argument to print
 * Return: number of printed characters
*/

int handle_string(va_list list)
{
	const char *str;
	const char *ns;
	int count = 0;

	str = va_arg(list, const char *);
	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			count++;
			str++;
		}
	}
	else
	{
		ns = "(null)";
		while (*ns)
		{
			_putchar(*ns);
			count++;
			ns++;
		}
	}

	return (count);
}

/**
 * handle_percent - prints %
 * @list: argument
 * Return: number of printed characters
*/

int handle_percent(va_list list)
{
	_putchar('%');
	return (1);
}
