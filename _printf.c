#include "main.h"
/**
 * _printf - Custom printf function that prints formatted output to stdout
 * @format: Format string containing characters and format specifiers
 * @...: Variable number of arguments to be formatted and printed
 * 
 * Return: Total number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, len, printed;

	printed = 0;
	i = 0;
	len = 0;
	while (format[len])
	{
		if (format[len] == '%' && format[len - 1] != '%' && format[len + 1] == '\0')
			return (-1);
		len++;
	}
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0' && i == 0)
				return (-1);
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
					printed += print_str(va_arg(ap, char *));
					break;
				case 'd':
				case 'i':
					printed += print_int(va_arg(ap, int));
					break;
				case 'x':
					printed += int_to_hex('x', va_arg(ap, unsigned int));
					break;
				case 'X':
					printed += int_to_hex('X', va_arg(ap, unsigned int));
					break;
				case 'b':
					printed += int_to_binary(va_arg(ap, unsigned int));
					break;
				case 'o':
					printed += int_to_octal(va_arg(ap, unsigned int));
					break;
				case 'u':
					printed += int_to_unsigned(va_arg(ap, unsigned int));
					break;
				case '%':
					_putchar('%');
					printed++;
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
