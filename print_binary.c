#include "main.h"
/**
  * int_to_binary - Converts and interger to hexadecimal string
  * @num: Integer to print as binary
  * 
  * Return: Number of characters printed
  */
int int_to_binary(unsigned int num)
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
		temp /= 2;
		len++;
	}
	temp = 0;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	str[len] = '\0';
	while (len > 0)
	{
		temp = num % 2;
		num /= 2;
		len--;	
		str[len] = temp + '0';
	}
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}	
