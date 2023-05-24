#include "monty.h"

/**
 * _mode - set or read the mode of the stack
 *			either STACK or QUEUE
 * @data: mode to set
 * @mode: reading or writing
 * Return: mode which is STACK or QUEUE
 */
int _mode(int data, int mode)
{
	static int MODE;

	if (mode)
		MODE = data;

	return (MODE);
}

/**
 * _data - set or read the second operand of a command
 * @data: number to set to
 * @mode: reading or writing
 * Return: data integer value
 */
int _data(int data, int mode)
{
	static int DATA;

	if (mode)
		DATA = data;

	return (DATA);
}

/**
 * _error - set or read the error of the program
 * @data: error to set
 * @mode: reading or writing
 * Return: mode which is READ or WRITE
 */
int _error(int data, int mode)
{
	static int ERROR;

	if (mode)
		ERROR = data;

	return (ERROR);
}
