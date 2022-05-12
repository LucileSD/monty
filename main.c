#include "monty.h"

int error = 0;
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
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(str, size, fd) != NULL && error != 1)
	{
		line_number++;
		token = strtok(str, " \n\t");
		if (token == NULL)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " \n\t");
			_push(token, &stack, line_number);
		}
		else
			get_op_func(token, &stack, line_number);
	}
	free_all(stack, fd);
	if (error == 1)
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
