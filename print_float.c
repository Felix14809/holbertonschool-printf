#include "main.h"
/**
 * print_float - Converts a float to a string and prints
 * @num: Float to convert and print
 *
 * Return: Number of characters printed
 */
int print_float(float num)
{
	float temp_float;
	int whole_number = 0;
	int printed = 0;

	whole_number = (int)num;
	temp_float = num - (float)whole_number;
	printed += print_int(whole_number);
	if (num < 0)
	{
		whole_number *= -1;
	}
	whole_number = (int)(temp_float *= 1000000);
	while (whole_number % 10 == 0)
	{
		whole_number /= 10;
	}
	_putchar('.');
	printed += print_int(whole_number);
	return (printed);
}

