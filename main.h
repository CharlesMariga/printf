#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list character);
int print_str(va_list string);

/**
 * struct formatstruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct formatstruct
{
	char *indentifier;
	int (*printer)(va_list);
} formatstruct;

#endif
