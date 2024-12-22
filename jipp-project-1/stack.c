#include "stack.h"

struct stack* stack_init() {
	struct stack *container = (struct stack*)malloc(sizeof(struct stack));
	if (!container)
		return NULL;
	container->count = 0;
	container->curr = NULL;
	return container;
}

int stack_add(struct stack* stack, struct student* data) {
	if (!stack) {
		printf("Invalid stack provided, aborting");
		return 1;
	}
	struct element* newElem = (struct element*)malloc(sizeof(struct element));
	if (!newElem) {
		printf("Something went wrong during memory allocation");
		return 1;
	}
	newElem->data = data;
	newElem->prev = NULL;
	if (!stack->curr && stack->count == 0) {
		stack->curr = newElem;
		stack->count++;
		printf("Element added");
		return 0;
	}
	struct element* tmp = stack->curr;
	newElem->prev = tmp;
	stack->curr = newElem;
	stack->count++;
	printf("Element added");
	return 0;
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
