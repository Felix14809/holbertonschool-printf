#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, str_len, printed;
	char *str;

	printed = 0;
	i = 0;
	str_len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0' && i == 0)
				return (-1);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			printed++;
		}
		if (format[i] == '%' && format[i - 1] != '\'')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					printed += 1;
					break;
				case 's':
					if ((str = va_arg(ap, char *)) == NULL)
						str = "(null)";
					while (str[str_len])
						str_len++;
					write(1, str, str_len);
					printed += str_len;
					str_len = 0;
					break;
				case 'i':
					printed += print_int(va_arg(ap, int));
					break;
				case 'd':
					printed += print_int(va_arg(ap, int));
					break;
				case 'x':
					printed += int_to_hex('x', va_arg(ap, unsigned int));
					break;
				case 'X':
					printed += int_to_hex('X', va_arg(ap, unsigned int));
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					printed += 2;
					break;
			}
			if (format[i])
				i++;
		}
		else if (format[i])
		{
			_putchar (format[i]);
			printed++;
			i++;
		}
	}
	va_end(ap);
	return (printed);
}
