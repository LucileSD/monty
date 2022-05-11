#include "monty.h"
/**
 * _get_op_func - choose the correct function for action
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * @token: tokens parses
 * Return: None
 */
void (*get_op_func(char *token))(stack_t **, unsigned int line_number)
{
	instruction_t op[] = {
			{"push", _push},
			{"pall", _pall},
			{"pint", _pint},
			{"pop", _pop},
			{"swap", _swap},
			{"add", _add},
			{"nop", _nop},
			{"sub", _sub},
			{NULL, NULL}
	};
	int i = 0;

	while (op[i].opcode)
	{
		i++;
		printf("%stokengetopfunc\n", token);
	}
	return (op[i].f);

}
