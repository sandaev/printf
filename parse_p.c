#include "main.h"
/**
 * parse_p - Handles %
 * @buff: Pointer to buffer
 * @buff_index: buffer idex
 * Return: Buffer index
 */
int parse_p(char *buff, int buff_index)
{
	char c;

	c = '%';

	buff[buff_index] = c;
	buff_index++;
	return (buff_index);
}
