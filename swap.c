#include "monty.h"
/**
 * swap - swap the top 2 numbers
 * @stack: input the stack address
 * @line_num: current number of line
 */
void swap(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;
	int holder = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	current = *stack;

	holder = current->n;

	current->n = holder;
	current->n = current->next->n;
	current->next->n = holder;
}
