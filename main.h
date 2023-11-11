#ifndef _MAIN_
#define _MAIN_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct type - Struct type.
 *
 * @specifier: The specifier.
 * @f: The function associated.
 */

typedef struct type
{
	char *specifier;
	int (*f)(va_list); 
} type_t;

int _putchar(char c);
int print_char(va_list list);
int print_string(va_list list);

int (*get_function(const char *specifier))(va_list);

int _printf(const char *format, ...);

#endif /* _MAIN_ */
