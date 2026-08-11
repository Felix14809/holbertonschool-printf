#include "main.h"
/**
*hex_switch - converts a number to hexadecimal
*@len: length
*@num: number to convert
*Return: string
*/
char *hex_switch(unsigned int len, unsigned int num)
{
	unsigned int i = 0;
	char *str;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		i = num % 16;
		num /= 16;
		len--;
		if ((i) > 9)
		{
			switch (i)
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
		}
		else
			str[len] = i + '0';
	}
	return (str);
}
