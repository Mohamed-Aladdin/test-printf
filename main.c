#include "main.h"

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	count = _printf("Heyyo from the new printf\n");
	printf("%d chars\n", count);
	count = _printf("Hello %s\n", "John");
	printf("%d chars\n", count);
	count = _printf("Char-> %c\n", 'a');
	printf("%d chars\n", count);
	count = _printf("Percent:[%%]\n");
	printf("%d chars\n", count);
	count =_printf("Nbr-> %d\n", -42);
	printf("%d chars\n", count);

	return (0);
}
