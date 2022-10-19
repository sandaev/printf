#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#ifndef MAINH
#define MAINH
char *_itoa(int, char *, int);
char *_itoa_x(int, char *, int);
void str_revs(char *buff, int size);
int print_buff(char *buff, int size);
int _printf(const char *format, ...);
int parse_char(char *buff, va_list args, int buff_index);
int parse_str(char *buff, va_list args, int buff_index);
int parse_p(char *buff, int buff_index);
#endif /* #ifndef MAINH */
