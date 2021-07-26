#include "holberton.h"
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return 1.
 */
int print_char(va_list list)
{
	char str;

	str = va_arg(list, int);
	_putchar(str);
	return (1);
}
/**
 * print_string - Prints strings
 * @list: list of arguments
 * Return: Will return leght of string stored.
 */
int print_string(va_list list)
{
	char *str;
	int char_add;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (char_add = 0; str[char_add] != '\0'; char_add++)
	{
		_putchar(str[char_add]);
	}
	return (char_add);
}

/**
 * set_mult - funcion that return acount of digit of string in 10 base
 * @lenght: actual leght to print
 * Return: Will return leght of string stored.
 */
int set_mult(int lenght)
{
	int i = 1;

	while (lenght)
	{
		i *= 10;
		lenght--;
	}
	return (i);
}

/**
 * print_int - Prints strings
 * @list: list of arguments
 * Return: Will return leght of string stored.
 */
int print_int(va_list list)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m / 10)
	{
		id_print(m / 10);
	}
	_putchar(m % 10 + '0');
}
