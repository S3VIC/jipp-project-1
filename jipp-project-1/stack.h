#pragma once
#include <stdlib.h>
#include "student.h"

/// <summary>
/// Element representation in stack implementation
/// </summary>
struct element {
	struct student *data;
	struct element *prev;
};

/// <summary>
/// Stack container structure
/// </summary>
struct stack {
	struct element *curr;
	size_t count;
};

/// <summary>
/// Initialises stack instance
/// </summary>
/// <returns>Returns pointer to a stack if memory was allocated successfuly, NULL otherwise</returns>
struct stack* stack_init();

/// <summary>
/// Frees the memory allocated for a stack
/// </summary>
/// <returns>Returns 0 if success and non-zero value otherwise</returns>
int stack_free(struct stack *stack);

/// <summary>
/// Adds item to stack
/// </summary>
/// <returns>Returns 0 if success and non-zero value otherwise</returns>
int stack_add(struct student *item);

/// <summary>
/// Removes an item from stack
/// </summary>
/// <returns>Returns 0 if item was successfuly removed and non-zero value otherwise</returns>
int stack_pop();

/// <summary>
/// Searches stack for a particular value
/// </summary>
void stack_search();


