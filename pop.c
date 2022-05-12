#include "monty.h"
/**
 * _pop - erase a node at the beginning
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		error = 1;
		return;
	}
	*stack = (*stack)->next;
		if (*stack)
			(*stack)->prev = NULL;
		free(tmp);
}
