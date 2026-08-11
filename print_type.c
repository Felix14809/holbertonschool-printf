#include "main.h"
/**
 * print_type - Prints the appropriate type based on the format specifier
 * @type: Format specifier character
 * @ap: va_list containing the arguments to be printed
 *
 * Return: Number of characters printed
 */
int print_type(char type, va_list ap)
{
	switch (type)
	{
		case 'c':
			_putchar(va_arg(ap, int));
			return (1);
		case 's':
			return (print_str(va_arg(ap, char *)));
		case 'd':
		case 'i':
			return (print_int(va_arg(ap, int)));
		case 'x':
			return (int_to_hex('x', va_arg(ap, unsigned int)));
		case 'X':
			return (int_to_hex('X', va_arg(ap, unsigned int)));
		case 'b':
			return (int_to_binary(va_arg(ap, unsigned int)));
		case 'o':
			return (int_to_octal(va_arg(ap, unsigned int)));
		case 'u':
			return (int_to_u(va_arg(ap, unsigned int)));
		case '%':
			_putchar('%');
			return (1);
		default:
			_putchar('%');
			_putchar(type);
			return (2);
	}
}
