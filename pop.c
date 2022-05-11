#include "monty.h"
/**
 * @brief 
 * 
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (*stack)
	{
		tmp = tmp->next;
		free(*stack);
		*stack = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
}
