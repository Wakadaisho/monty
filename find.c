#include "monty.h"
#include <string.h>

/**
 * find - find a string in a list of strings
 * @list: list of strings
 * @query: stirng to find
 * Return: index if found, -1 if not found
 */
int find(char **list, char *query)
{
	unsigned int i = 0;

	for (i = 0; list && list[i]; i++)
	{
		if (strcmp(query, list[i]) == 0)
			return (i);
	}

	return (-1);
}
