#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#define STACK 0
#define QUEUE 1

#define READ 0
#define WRITE 1

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * exec - execute a Monty statement
 * @stack: stack/queue data structure
 * @tokens: the command, tokenized to strings
 * @line_number: current line number
 * Return: EXIT_SUCCESS, EXIT_FAILURE
 */
int exec(stack_t **stack, char **tokens, unsigned int line_number);

/**
 * _free - free a doubly linked list
 * @head: doubly linked list to free
 * Return: void
 */
void _free(stack_t *head);

/**
 * pall - prints all elements of a doubly linked list
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number);

/**
 * pint - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number);

/**
 * pchar - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_number);

/**
 * push - adds node to a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number);

/**
 * pop - remove node from a stack of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number);

/**
 * error - handle different errors that may come up
 * @tokens: command split by whitespalce
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: int, EXIT_FAILURE, EXIT_SUCCESS
 */
int error(char **tokens, stack_t **stack, unsigned int line_number);

/**
 * stack_t_len - returns number of elements in a list
 * @stack: doubly linked list
 * Return: number of nodes
 */
unsigned int stack_t_len(stack_t **stack);

/**
 * peek - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * Return: integer
 */
int peek(stack_t **stack);

/**
 * add - adds top two items in a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number);

/**
 * nop - does nothing
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number);

/**
 * sub - subtracts top two items in a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number);

/**
 * _div - divides top two items in a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_number);

/**
 * mul - multiplies top two items in a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number);

/**
 * mod - modulus of the top two items in a stack or queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_number);

/**
 * swap - swap the top/front two elements in a stack/list
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number);

/**
 * pstr - prints out the stack/queue values as strings
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number);

/**
 * queue - changes the struct to a queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number);

/**
 * _stack - changes the struct to a stack
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void _stack(stack_t **stack, unsigned int line_number);

/**
 * _mode - set or read the mode of the stack
 *			either STACK or QUEUE
 * @data: mode to set
 * @mode: reading or writing
 * Return: mode which is STACK or QUEUE
 */
int _mode(int data, int mode);

/**
 * _data - set or read the second operand of a command
 * @data: number to set to
 * @mode: reading or writing
 * Return: data integer value
 */
int _data(int data, int mode);

/**
 * _error - set or read the error of the program
 * @data: error to set
 * @mode: reading or writing
 * Return: mode which is READ or WRITE
 */
int _error(int data, int mode);

/**
 * rotr - rotates stack/queue to the bottom
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number);

/**
 * rotl - rotates stack/queue to the top
 * @stack: stack/queue data structure
 * @line_number: current line number
 * return: void
 */
void rotl(stack_t **stack, unsigned int line_number);

/**
 * queue - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number);

/**
 * _stack - returns the value at the top of the stack or front of queue
 * @stack: stack/queue data structure
 * @line_number: current line number
 * Return: void
 */
void _stack(stack_t **stack, unsigned int line_number);

/**
 * find - find a string in a list of strings
 * @list: list of strings
 * @query: stirng to find
 * Return: index if found, -1 if not found
 */
int find(char **list, char *query);

/**
 * isnumber - check whether a string is a number or not
 *
 *  @str: string to check
 *
 * Return: 0 if number, 1 otherwise
 */
int isnumber(char *str);

#endif /* _MONTY_H_ */
