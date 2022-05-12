#include "monty.h"
/**
 * _mod - computes the rest of the division of the second top element
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int result = 0;

	if ((*stack)->next)
	{
		if ((*stack)->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			error = 1;
			return;
		}
		else
		{
			tmp = tmp->prev;
			result = tmp->n % (*stack)->n;
			tmp->n = result;
			free(*stack);
			tmp->prev = NULL;
			*stack = tmp;
		}
	}
	else
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		error = 1;
		return;
	}
}
