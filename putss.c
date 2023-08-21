#include "main.h"
/**
 * putss - prints string
 * @c: string to be printed
 *
 * Return: number of byte
 */
int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			pu_char(c[count]);
		}
	}
	return (count);
}
