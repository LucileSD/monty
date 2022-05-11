#include "monty.h"
/**
 * _mul - multiplies the top two elements of the stack
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int result = 0;

	if ((*stack)->next)
	{
		tmp = tmp->prev;
		result = tmp->n * (*stack)->n;
		tmp->n = result;
		free(*stack);
		tmp->prev = NULL;
		*stack = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
