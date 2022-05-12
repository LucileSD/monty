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

	if (*stack)
	{
		tmp = tmp->next;
		free(*stack);
		tmp->prev = NULL;
		*stack = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		error = 1;
		return;
	}
}
