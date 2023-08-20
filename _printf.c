#include "main.h"
/**
 * _printf - Prints any character
 * @format: Pointer to char
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	unsigned int a;
       	int s;

	s = 0;

	va_list args;
	va_start(args, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		s = va_args(args, int);
		pu_char(s);
	}
	pu_char('\n');
	va_end(args);
	return (0);
}
