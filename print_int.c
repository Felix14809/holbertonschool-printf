#include "main.h"
/**
 * print_int - Prints an integer to stdout
 * @num: Integer to print
 *
 * Return: Number of characters printed
 */
int print_int(int num)
{
	char *str;
	int i = 1, temp = 1, len = 1, neg = 1;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	if (num < 0)
	{
		neg = 0;
		num = num * (-1);
		str[0] = '-';
	}
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	if (num == 0)
	{
		len++;
		str[len - i] = '0';
	}
	else if (num == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		while (i < len)
		{
			str[len - i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
	}
	write(1, str + neg, len - neg);
	free(str);
	return (len - neg);
}
