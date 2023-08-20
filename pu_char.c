#include "main.h"

/**
 * pu_char - printts c
 * @c: character to be printed
 *
 * Return: 0 on succes, -1 on error
 */
int pu_char(char c)
{
	return (write(1, &c, 1));
}
