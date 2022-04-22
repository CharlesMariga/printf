#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct structformat - structure that maps formats with functions
 * @type: type of format
 * @f: function pointer
 */
struct structformat
{
	char *type;
	int (*f)(va_list);
};

/**
 * struct structformat - structure format type
 */
typedef struct structformat structformat_t;

int _printf(const char *format, ...);
int print_operations(const char *format, struct structformat *opsArr,
va_list args);
int _putchar(char c);
int print_char(va_list character);
int print_string(va_list string);


#endif
