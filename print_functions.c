#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - prints character
 * @character: character to be printed
 *
 * Description: prints a character
 *
 * Return: number of characters printed
 */
int print_char(va_list character)
{
	char ch = va_arg(character, int);
	int count = _putchar(ch);

	return (count);
}


/**
 * print_str - prints character
 * @arg: string to be printed
 *
 * Description: prints the string passed
 *
 * Return: number of characters printed
 */
int print_str(va_list arg)
{
	int i = 0;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

