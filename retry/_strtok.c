#include "monty.h"

/**
 * is_in_str - Tells if character is in a string
 * @c: Character to look for
 * @str: String to search in
 * Return: 1 if @c is found, 0 if not
 */
int is_in_str(char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

/**
 * _strtok - Tokenizes a string
 * @str: String to tokenize
 * @delim: String of separating bytes
 * Return: Pointer to first token in string
 */
char *_strtok(char *str, const char *delim)
{
	static char *ptr;
	char *next, *tok = NULL;
	size_t len;

	if (str)
		ptr = str;
	while (ptr && is_in_str(*ptr, delim))
		ptr++;
	if (!*ptr)
		return (NULL);
	next = _strpbrk(ptr, delim);
	if (next || *ptr)
	{
		if (next)
			len = next - ptr;
		else
		{
			for (len = 0; ptr[len]; len++)
				;
		}
		tok = ptr;
	}
	ptr = next;
	while (ptr && is_in_str(*ptr, delim))
		ptr++;
	tok[len] = '\0';
	return (tok);
}
/**
 * _strpbrk - Searches for any of the bytes of a substring in another string
 * @s: String to search into
 * @accept: Set of bytes to search
 * Return: Pointer to first match
 */
char *_strpbrk(char *s, const char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] && accept[j] != s[i]; j++)
			;
		if (accept[j])
			return (s + i);
	}
	return (0x0);
}
