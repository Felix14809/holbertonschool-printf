# Integration Project: printf
Directory for Integration Project: printf at Holberton completed by Chris & Felix.
## Header file 
[main.h](./main.h)
## Compiler
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Project File Table 
The following files are included in this project:

| File      | Description |
|---------- |-------------|
|    [_printf.c](./_printf.c)       |      Prints anything and returns characters printed. Accepts b, c, d, i, o, s, u, f, d, x, and X as format specifiers.       |
|     [print_type.c](./print_type.c)      |      Calls the appropriate function and returns the result of that function    |
|     [print_binary.c](./print_binary.c)      |       Prints a positive integer in binary and returns characters printed.      |
|     [print_hex.c](./print_hex.c)      |      Prints a positive integer in upper or lowercase hexidecimal and returns characters printed.       |
|     [print_int.c](./print_int.c)      |      Prints an integer and returns characters printed.       |
|     [print_octal.c](./print_octal.c)      |      Prints a positive integer in octal format and returns characters printed.       |
|     [print_str.c](./print_str.c)      |      Prints a string returns characters printed.       |
|     [print_unsigned_int.c](./print_unsigned.c)      |      Prints a positive integer and returns characters printed.       |
|     [hex_switch.c](./hex_switch.c)      |      Converts a decimal number into hex and returns pointer to a string       |
|     [print_float.c](./print_float.c)      |      Prints a float and returns printed characters      |


## Known limitations
* Doesn't have all the format specifier that printf does
* Float and double is fixed to 6 decimals and the last digit is slightly off
* When converting an integer to a string in different functions the pointer used is not terminated by a null byte
## Advantages
* Better outputs with known specifier but empty argument list
