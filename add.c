#include "monty.h"
/**
 * _add - adds the top two elements of the stack
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int result = 0;

	if ((*stack)->next)
	{
		tmp = tmp->next;
		result = tmp->n + (*stack)->n;
		printf("%d", result);
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

