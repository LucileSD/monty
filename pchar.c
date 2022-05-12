#include "monty.h"
/**
 * _pchar - transform the value in letter
 * @stack: the head of the list
 * @line_number: the number of the line
 * Return: None
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		if ((*stack)->n >= 65 && (*stack)->n <= 90)
		{
			putchar((*stack)->n);
			putchar('\n');
		}
		else
		{
			fprintf(stderr, "L%d: can't pchar, value out of range", line_number);
			error = 1;
			return;
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, stack empty", line_number);
		error = 1;
		return;
	}
}
