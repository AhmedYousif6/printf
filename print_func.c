#include "main.h"

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
