#include "main.h"

/**
 * handle_ui - handle unsigned integers.
 * @list: argument.
 * Return: num of printed.
*/

int handle_ui(va_list list)
{
	unsigned int nm;
	int count = 0;

	nm = va_arg(list, unsigned int);
	count = print_ui(nm);
	return (count);
}



/**
 * handle_octal - handle octal numbers.
 * @list: argument.
 * Return: num of printed
*/

int handle_octal(va_list list)
{
	unsigned int nm;
	int count = 0;

	nm = va_arg(list, unsigned int);
	count = print_octal(nm);
	return (count);
}



/**
 * handle_hex - handle hexadecimal
 * @list: argument
 * Return: count of printed
*/

int handle_hex(va_list list)
{
	unsigned int nm;
	int count = 0;

	nm = va_arg(list, unsigned int);
	count = print_hex(nm, 0);
	return (count);
}



/**
 * handle_hex_up - handle upper hexadecimal
 * @list: argument
 * Return: num of printed
*/

int handle_hex_up(va_list list)
{
	unsigned int nm;
	int count = 0;

	nm = va_arg(list, unsigned int);
	count = print_hex(nm, 1);
	return (count);
}


