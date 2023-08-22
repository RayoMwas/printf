/**
 * pu_char - writes char to standard output
 * @c: character to print
 *
 * Return: 0 on success - 1 on error
 */
#include "main.h"
int pu_char(char c)
{
	return (write(1, &c, 1));
}
