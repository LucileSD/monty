#include "monty.h"
/**
 * free_all - frees stack and str and close fd
 * @stack: the linked list
 * @str: the line of fgets
 * @fd: the file to close
 * Return: None
 */
void free_all(stack_t *stack, FILE *fd)
{
	stack_t *temp = stack;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	fclose(fd);
}
