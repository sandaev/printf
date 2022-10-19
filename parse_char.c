#include "main.h"

/**
 * parse_char - Converts and append char to
 * output buffer
 * @buff: pointer to buffer
 * @args: va_list object
 * @buff_index: buffer index
 * Return: Buffer index
 */
int parse_char(char *buff, va_list args, int buff_index)
{
	buff[buff_index] = (char)va_arg(args, int);
	buff_index++;
	return (buff_index);
}
