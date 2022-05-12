#include "monty.h"
/**
 * _rotl - rotates the stack to the top
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tail = *stack;
	stack_t *tmp = *stack;
	(void)line_number;

	if (*stack && (*stack)->next)
	{
		while (tail->next)
			tail = tail->next;

		*stack = (*stack)->next;
		tail->next = tmp;
		(*stack)->prev = NULL;
		tmp->next = NULL;
		tmp->prev = tail;
		tail = tmp;
	}
	else
		return;
}
