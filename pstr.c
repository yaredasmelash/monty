#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 * author Anteneh Bizuneh for Alx project
 * Return: void.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	int n;
	stack_t *temp = *stack;

	(void) line_number;
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	while (temp != NULL)
	{
		n = temp->n;
		if (!(n >= 1 && n <= 127) || n == 0)
			break;
		printf("%c", n);
		temp = temp->next;
	}
	printf("\n");
}