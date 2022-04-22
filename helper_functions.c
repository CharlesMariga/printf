#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}


/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 *hex_conv - converts a number to any base specified by user
 *@num:number to convert
 *Return:pointer to converted string
 */
char *hex_conv(int num)
{
	char *str;
	int i, len;

	i = 0;
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (num == 0)
	{
		str[i] = 0;
	}
	i = 0;
	while (num > 0)
	{
		if ((num % 16) < 10)
		{
			str[i] = (num % 16) + 48;
			i++;
		}
		else
		{
			str[i] = (num % 16) + 55;
			i++;
		}
		num /= 16;
	}
	rev_string(str);
	return (str);
}
