#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int int_to_hex(char, unsigned int num);
int print_int(int num);
int int_to_binary(unsigned int num);
int int_to_octal(unsigned int num);
int int_to_u(unsigned int num);
int print_str(char *str);
char *hex_switch(unsigned int len, unsigned int num);
int print_type(char type, va_list ap);


#endif
