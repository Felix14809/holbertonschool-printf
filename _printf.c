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
			printed += print_type(format[i], ap);
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
