#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: the head of the linked list
 * @line_number: the number of the line in the file
 * Return: None
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		error = 1;
		return;
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
