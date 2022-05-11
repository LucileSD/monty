#include "monty.h"
/**
 * main - first call of the program
 * @argc: argument counter
 * @argv: argument value
 * Return: success
 */
int main(int argc, char **argv)
{
	FILE *fd;
	unsigned int line_number = 0;
	int size = 1024;
	char str[1024];
	char *token = NULL;
	stack_t *stack;

	if (argc != 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	stack = malloc(sizeof(stack_t));
	if (!stack)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	while (fgets(str, size, fd) != NULL)
	{
		line_number++;
		token = _strtok(str, " ");
		stack->n = token[1];
		get_op_func(token)(&stack, line_number);
	}
	free(stack);
	fclose(fd);
	return (EXIT_SUCCESS);
}
