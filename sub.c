#include "monty.h"

/**
 * _sub -  subtracts top element of the stack from the second top element.
 * @head: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 * author Anteneh Bizuneh
 * Return: void.
 */
void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;
	int nnodes = 1; /*number of elements in stack*/

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		free_stack_t(*head);

		exit(EXIT_FAILURE);
	}

	while (current->next != NULL)
	{
		current = current->next;
		nnodes++;
	}

	if (nnodes + 1 <= 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	current = *head; /*current equals to head to make substraction*/

	current->next->n = current->next->n - current->n; /*do the substraction*/

	*head = current->next;
	free(current);
	current->prev = NULL;
}