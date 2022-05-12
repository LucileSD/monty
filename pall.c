#include "monty.h"
/**
 * _pall - display the linked list
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tail = *stack;

	(void)line_number;

	while (tail)
	{
		printf("%d\n", tail->n);
		tail = tail->next;
	}
}
