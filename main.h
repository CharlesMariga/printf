#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list character);
int print_str(va_list string);
int print_int(va_list arg);
int print_unsignedToBinary(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);

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
