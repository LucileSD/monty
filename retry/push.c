#include "monty.h"
/**
 * @brief 
 * 
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = *stack;

	if (*stack && isdigit((*stack)->n) > 0)
	{
		new = malloc(sizeof(stack_t));
		if (!new)
		{
			perror("Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new->n = (*stack)->n;
		while (*stack)
		{
			line_number++;
			new = (*stack)->prev;
		}
		new->prev = NULL;
		new->next = (*stack)->prev;
		*stack = new;
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
}
