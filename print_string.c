#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_string - prints character
 * @string: string to be printed
 *
 * Description: prints the string passed
 *
 * Return: number of characters printed
 */
int print_string(va_list string)
{
	int i = 0, count = 0;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "";

	while (str[i] != '\0')
	{
		count += _putchar((char)str[i]);
		i++;
	}
	return (count);
}

