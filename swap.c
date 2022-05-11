#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
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
