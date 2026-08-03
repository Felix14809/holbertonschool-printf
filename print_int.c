#include "main.h"
/**
 *
 *
 *
 */
int print_int(int num)
{
	char *str;
	int i, temp, len, neg;

	i = 1;
	len = 1;
	if (num < 0)
	{
		neg = 1;
		num = num * (-1);
	}
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		len++;
	}
	temp = 0;
	str = malloc((len + 1) * sizeof(char));
	if (neg == 1)
	{
		str[0] = '-';
	}
	while (i < len)
	{
		str[len - i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	write(1, str, len);
	return (len);
}


