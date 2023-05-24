#include "monty.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * exec - execute a Monty statement
 * @stack: stack/queue data structure
 * @tokens: the command, tokenized to strings
 * @line_number: current line number
 * Return: EXIT_SUCCESS, EXIT_FAILURE
 */
int exec(stack_t **stack, char **tokens, unsigned int line_number)
{
	int i, errno = 0;
	void (*f)(stack_t **stack, unsigned int line_number) = NULL;
	instruction_t i_set[] = {{"push", push}, {"pall", pall}, {"nop", nop},
		{"pint", pint}, {"pchar", pchar}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"sub", sub}, {"mul", mul}, {"div", _div}, {"mod", mod},
		{"pstr", pstr},
		{"rotl", rotl}, {"rotr", rotr},
		{"stack", _stack}, {"queue", queue},
		{NULL, NULL}};

	for (i = 0; f == NULL && i_set[i].opcode; i++)
		f = strcmp(i_set[i].opcode, tokens[0]) ? NULL : i_set[i].f;
	if (!f)
	{
		fprintf(stderr, "L%i: unknown instruction %s\n", line_number, tokens[0]);
		return (EXIT_FAILURE);
	}
	errno = error(tokens, stack, line_number);
	if (errno)
		return (errno);
	f(stack, line_number);
	return (EXIT_SUCCESS);
}


