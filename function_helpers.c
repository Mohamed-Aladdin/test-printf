#include "main.h"
/**
 * print_number - prints an integer.
 * @num: The number to be printed.
 *
 * Return: Int.
 */

int print_number(unsigned int num)
{
	int value;
	unsigned int tmp = num;

	if ((tmp / 10) > 0)
		print_number(tmp / 10);
	value = _putchar('0' + num % 10);

	return (value);
}

/**
* count_numbers - number count.
* @num: the given number.
*
* Return: Int.
*/

int count_numbers(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}

	return (count);
}
