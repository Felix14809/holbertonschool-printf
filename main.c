#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    unsigned int ui;
    ui = (unsigned int)INT_MAX + 1024;
    len = _printf("%b\n", 0);
    _printf("%b\n", 127);
    _printf("%u\n", 127);
    _printf("%o\n", 1258);

    
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s] and another one [%s]\n", "I am a string !", "Am I a string?");
    printf("String:[%s] and another one [%s]\n", "I am a string !", "Am I a string?");
    _printf("String:[%s] and another one [%c]\n", "I am a string !", 'H');
    printf("String:[%s] and another one [%c]\n", "I am a string !", 'H');
    return (0);
}
