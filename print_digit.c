#include "main.h"

/**
 * print_digit - prints digits.
 * @list: The given arguments.
 *
 * Return: Int.
 */

int print_digit(va_list list)
{
	int count = 0, value;
	int n = va_arg(list, int);

	if (n < 0)
	{
		value = _putchar('-');
		return (print_digit(-n));
	}
}
