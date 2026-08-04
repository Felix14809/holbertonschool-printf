#include "main.h"
/**
  *int_to_hex - Converts and interger to hexadecimal string
  *
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
	temp = 0;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	str[len] = '\0';
	while (len > 0)
	{
		temp = num % 16;
		num /= 16;
		len--;
		if ((temp) > 9)
		{
			switch (temp)
			{
				case 10:
					str[len] = 'a';
					break;
				case 11:
					str[len] = 'b';
					break;
				case 12:
					str[len] = 'c';
					break;
				case 13:
					str[len] = 'd';
					break;
				case 14:
					str[len] = 'e';
					break;
				case 15:
					str[len] = 'f';
					break;
			}
			if (cap == 'X')
				str[len] = str[len] - 32;
		}
		else
			str[len] = temp + '0';
	}
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}	
