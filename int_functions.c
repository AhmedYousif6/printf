#include "main.h"

/**
 * handle_int - handle i and d spesifiers
 * @list: passed argument
 * Return: number of printed
*/

int handle_int(va_list list)
{
	int nm, count = 0;

	nm = va_arg(list, int);
	if (nm < 0)
	{
		_putchar('-');
		count++;
		nm = -nm;
	}
	count += print_num(nm);
	return (count);
}


/**
 * print_num - prints number
 * @nm: number to be printed
 * Return: count of printed
*/

int print_num(int nm)
{
	int count = 0;

	if (nm / 10 != 0)
	{
		count += print_num(nm / 10);
	}
	_putchar('0' + nm % 10);
	return (count + 1);
}
