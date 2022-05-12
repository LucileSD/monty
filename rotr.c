#include "monty.h"
/**
 * _rotr - rotates the stack to the bottom
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tail = *stack;
	stack_t *tmp = *stack;
	(void)line_number;

	if (*stack && (*stack)->next)
	{
		while (tail->next)
			tail = tail->next;

		tmp = tail->prev;
		(*stack)->prev = tail;
		tmp->next = NULL;
		tail->next = *stack;
		tail->prev = NULL;
		*stack = tail;
	}
	else
		return;
}
