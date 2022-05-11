#include "monty.h"
/**
 * @brief 
 * 
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	stack_t *val = *stack;

	if ((*stack)->next)
	{
		tmp = tmp->next;
		val->n = tmp->n;
		tmp->n = (*stack)->n;
		(*stack)->n = val->n;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}


}
