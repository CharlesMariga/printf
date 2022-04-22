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

/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{
	unsigned int divisor = 1, i, resp, charPrinted = 0;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		charPrinted++;
		n *= -1;
	}

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (charPrinted);
}


/**
 *print_S - handles custom conversion S which for instance
 *         -prints '\n' as \x and hex equivalent of n
 *@list:list to increment
 *Return:no. of characters printed
 */

int print_S(va_list list)
{
	char *hex;
	char *s = va_arg(list, char *);
	unsigned int i = 0, j;
	int c = 0, len;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = base_len(s[i], 16);
			if (len != 2)
			{
				_putchar('0');
				c++;
			}
			c += 2;
			hex = hex_conv(s[i]);
			for (j = 0; hex[j]; j++)
			{
				_putchar(hex[j]);
				c++;
			}
		}
		else
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
