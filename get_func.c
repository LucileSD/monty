#include "monty.h"
/**
 * get_op_func - choose the correct function for action
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * @token: tokens parses
 * Return: None
 */
void get_op_func(char *token, stack_t **stack, unsigned int line_number)
{
	instruction_t op[] = {
			{"pall", _pall},
			{"pint", _pint},
			{"pop", _pop},
			{"swap", _swap},
			{"add", _add},
			{"nop", _nop},
			{"sub", _sub},
			{"div", _div},
			{"mul", _mul},
			{"mod", _mod},
			{"pchar", _pchar},
			{"pstr", _pstr},
			{"rotl", _rotl},
			{NULL, NULL}
	};
	int i = 0;

	if (token[0] == '#')
		_nop(stack, line_number);
	else
	{
		while (op[i].opcode)
		{
			if (strcmp(token, op[i].opcode) == 0)
			{
				op[i].f(stack, line_number);
				return;
			}
			i++;
		}
	
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		error = 1;
		exit(EXIT_FAILURE);
	}
}
