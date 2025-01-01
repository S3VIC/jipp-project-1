#include "stack.h"
#include <stdio.h>

stack* stack_init() {
	stack *container = (stack*)malloc(sizeof(stack));
	if (!container)
		return NULL;
	container->count = 0;
	container->curr = NULL;
	return container;
}

int stack_add(stack* stack, student* data) {
	if (!stack) {
		printf("Invalid stack provided, aborting");
		return 1;
	}
	element* newElem = (struct element*)malloc(sizeof(element));
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
	element* tmp = stack->curr;
	newElem->prev = tmp;
	stack->curr = newElem;
	stack->count++;
	printf("Element added");
	return 0;
}

int stack_free(stack* stack) {
	if (!stack->curr) {
		printf("Empty stack! Aborting memory release");
		return 0;
	}
	element* tmp = NULL;
	while ( stack->curr->prev ) {
		tmp = stack->curr->prev;
		stack_free_elem(&(stack->curr));
		stack->curr = tmp;
		stack->count--;
	}
	stack_free_elem(&(stack->curr));
	stack->count = 0;
	return 0;
}

int stack_free_elem(element** elem) {
	if (!elem || !(*elem)) {
		return 1;
	}
	free((*elem)->data->name);
	free((*elem)->data);
	free(*elem);
	(*elem)->data = NULL;
	*elem = NULL;
}

int stack_pop(stack *stack) {
	if (!(stack->curr) && stack->count == 0) {
		printf("[ERROR] No elements in stack!");
		return 1;
	}
	element *tmp = stack->curr->prev;
	stack_free_elem(&stack->curr);
	stack->count--;
	if (stack->count == 0)
		return 0;
	stack->curr = tmp;
	return 0;
}

student* stack_get_first(stack* stack) {
	if (stack->count != 0 && !stack->curr)
		return stack->curr;
	return NULL;
}
