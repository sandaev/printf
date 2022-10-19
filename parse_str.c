#include "main.h"

/**
 * parse_str - Copies string to ouput buffer
 * @buff: pointer to buffer
 * @args: va_list object
 * @buff_index: index
 * Return: Index
 */
int parse_str(char *buff, va_list args, int buff_index)
{
	char *str;

	str = va_arg(args, char *);
	strcpy(&buff[buff_index], str);
	buff_index += strlen(str);
	return (buff_index);
}
