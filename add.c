#include "monty.h"
/**
 * add - add first two elements
 * @stack: stack address
 * @line_num: current line
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;
	int total = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	total = current->n + current->next->n;

	pop(stack, line_num);

	(*stack)->n = total;
}
