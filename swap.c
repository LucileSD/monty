#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if ((*stack)->next && *stack)
	{
		tmp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		error = 1;
		return;
	}

}
