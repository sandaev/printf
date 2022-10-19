#include "main.h"
#include <unistd.h>
/**
 * print_buff - Print buffer
 * @buff: Pointer to buffer
 * @size: bytes to be printed
 * Return: Integer
 */
int print_buff(char *buff, int size)
{
	return (write(1, buff, size));
}
