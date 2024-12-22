#include "stack.h"

struct stack* stack_init() {
	struct stack *container = (struct stack*)malloc(sizeof(struct stack));
	if (!container)
		return NULL;
	container->count = 0;
	container->curr = NULL;
	return container;
}

int stack_free(struct stack* stack) {
	if (!stack->curr) {
		printf("Empty stack! Aborting memory release");
		return 0;
	}
	struct element* tmp = NULL;
	while ( stack->curr->prev ) {
		tmp = stack->curr->prev;
		free(stack->curr);
		stack->curr = tmp;
	}
	free(stack->curr);
	stack->curr = NULL;
	return 0;
}
