#include "main.h"
#include <stdarg.h>
/**
 * _printf - Prints any character
 * @format: Pointer to char
 *
 * Return: 0
 */
int _printf(const char *format, ...)
{
	unsigned int a, s_count, count = 0;

	va_list mylist;

	va_start(mylist, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			pu_char(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			pu_char(va_arg(mylist, int));
					a++;
		}
		else if (format[a + 1] == 's')
		{
			s_count = putss((va_arg(mylist, char *)));
			a++;
			count += (s_count - 1);
		}
		else if (format[a + 1] == '%')
		{
			pu_char('%');
		}
		count += 1;
	}
	va_end(mylist);
	return (count);
}
