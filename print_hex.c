#include "main.h"
/**
  * int_to_hex - Converts and interger to hexadecimal string
  * @cap: Character to determine if the hex is capitalized or not
  * @num: Integer to print as hexadecimal
  *
  * Return: Number of characters printed
  */
int int_to_hex(char cap, unsigned int num)
{
	char *str;
	unsigned int temp, len;

	len = 0;
	temp = num;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (temp > 0)
	{
		temp /= 16;
		len++;
	}
	str = hex_switch(len, num);
	len = 0;
	while (str[len])
	{
		if (str[len] >= 'a' &&  str[len] <= 'z' && cap == 'X')
			str[len] = str[len] - 32;
		_putchar(str[len]);
		len++;
	}
	return (len);
}
