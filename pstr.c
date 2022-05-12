#include "monty.h"
/**
 * _pstr - transform each value of the stack in letter
 * @stack: the head of the list
 * @line_number: the number of the line
 * Return: None
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void)line_number;

	if (!*stack)
		putchar('\n');
	while (tmp && tmp->n > 0 && tmp->n < 127)
	{
		putchar(tmp->n);
		tmp =  tmp->next;
	}
	putchar('\n');
}
