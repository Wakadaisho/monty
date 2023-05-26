#include "monty.h"
#include <string.h>

/**
 * isnumber - check whether a string is a number or not
 *
 *  @str: string to check
 *
 * Return: 0 if number, 1 otherwise
 */
int isnumber(char *str)
{
	int isnumber = 0;

	if (str && (*str == '+' || *str == '-'))
	{
		isnumber = strlen(str) == 1;
		str++;
	}

	while (*str && isnumber == 0)
	{
		isnumber = *str < '0' || *str > '9';
		str++;
	}

	return (isnumber);
}
