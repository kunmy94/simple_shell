#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main (void)
{
	char *c;
	size_t length = 0;

	while (1)
	{
		printf("$ ");
		getline(&c, &length, stdin);
		printf("You typed: %s", c);
	}
	return (0);
}
