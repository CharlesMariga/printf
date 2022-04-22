#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list character);
int print_str(va_list string);
int print_int(va_list arg);
int print_binary(va_list list);

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

/* Helper functions */
unsigned int base_len(unsigned int, int);
char *rev_string(char *s);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
