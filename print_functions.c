#include "main.h"
/* Print chr */
/**
 * print_char - prints a chracter
 * @types: List of args
 * @buffer: Buffer array
 * @flags: Active flags
 * @width: width
 * @precision: Specification
 * @size: size specifier
 *
 * Return: No. of chars printed
 */
int print_char(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/* Print a string */
/**
 * print_string: prints string to stdout
 * @types: List a of args
 * @buffer: Buffer array
 * @flags: active flags
 * @width: get width
 * @precision: specification
 * @size: size specifier
 *
 * Return: No. of chars printend
 */
int print_string(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	int length = 0, i;
}
/**
 * print_binary - binary printed
 * @types: types
 * @buffer: buffers
 * @flags: flags
 * @width: specifier for width
 * @precision: string precision
 * @size: size in bytes
 *
 * Return: 0 or 1
 */
int print_binary(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648;
	a[0]; n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
