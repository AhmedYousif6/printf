#include "main.h"

/**
 * print_int - prints number
 * @nm: number to be printed
 * Return: count of printed
 */

int print_int(int nm)
{
	int count = 0;
	const char *min;

	if (nm = INT_MIN)
	{
		*min = "-2147483648";
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
			_putchar('-');
			count++;
			nm = -nm;
		}
		if (nm == 0)
		{
			_putchar('0');
			count++;
		}
		else
		{
		if (nm / 10 != 0)
		{
			count += print_int(nm / 10);
		}
		_putchar('0' + nm % 10);
		}
	}

	return (count);
}



/**
 * print_bin - prints binary.
 * @nm: to be printed.
 * Return: count of printed.
*/

int print_bin(unsigned int nm)
{
	int count = 0;

	if (nm / 2 != 0)
	{
		count += print_bin(nm / 2);
	}
	_putchar('0' + nm % 2);
	return (count + 1);
}



/**
 * print_ui - print unsigned integer
 * @nm: takes integer
 * Return: count of printed
*/

int print_ui(unsigned int nm)
{
	int count = 0;

	if (nm / 10 != 0)
	{
		count += print_ui(nm / 10);
	}
	_putchar('0' + nm % 10);
	return (count + 1);
}





/**
 * print_octal - print octal (in base 8)
 * @nm: takes integer
 * Return: count of printed
*/

int print_octal(unsigned int nm)
{
	int count = 0;

	if (nm / 8 != 0)
	{
		count += print_octal(nm / 8);
	}
	_putchar('0' + nm % 8);
	return (count);
}




/**
 * print_hex - print hexadecimal (upper and lower)
 * @nm: takes integer
 * @up: check if upper or lower
 * Return: count of printed
*/

int print_hex(unsigned int nm, int up)
{
	int count = 0, r;

	if (nm / 16 != 0)
	{
		count += print_hex(nm / 16, up);
	}
	r = nm % 16;
	if (r < 10)
	{
		_putchar('0' + r);
	}
	else
	{
		if (up)
		{
			_putchar('A' + r - 10);
		}
		else
		{
			_putchar('a' + r - 10);
		}
	}
	return (count + 1);
}
