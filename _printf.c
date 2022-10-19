#include "main.h"
/**
 * _printf - Mimics printf of c standar lib
 * @format: String with zero or more specifiers
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	char buff[3000];
	va_list args;

	if (!format)
	{
		return (-1);
	}
	va_start(args, format);
	i = j = 0;
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				/* Handles Char */
				case 'c':
				{
					j = parse_char(buff, args, j);
					break;
				}
				/* Handles string */
				case 's':
				{
					j = parse_str(buff, args, j);
					break;
				}
				case '%':
				{
					j = parse_p(buff, j);
					break;
				}
				default:
				{
					break;
				}
			}
		}
		else
		{
			buff[j] = format[i];
			j++;
		}
		i++;
	}
	print_buff(buff, j);
	return (j);
}
