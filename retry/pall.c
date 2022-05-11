#include "monty.h"
/**
 * @brief 
 * 
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	const stack_t *tail = *stack;

	(void)line_number;

	if (*stack)
	{
		while (tail)
			tail = tail->next;
		
		while (tail)
		{
			printf("%d\n", tail->n);
			tail = tail->prev;
		}
	}
}
