#pragma once
#include <stdlib.h>
#include <stdint.h>
#include "student.h"
/// <summary>
/// Element representation in stack implementation
/// </summary>
typedef struct element {
	student *data;
	struct element *prev;
} element;

/// <summary>
/// Stack container structure
/// </summary>
typedef struct {
	element *curr;
	size_t count;
} stack;

/// <summary>
/// Initialises stack instance
/// </summary>
/// <returns>Returns pointer to a stack if memory was allocated successfuly, NULL otherwise</returns>
stack* stack_init(); 

/// <summary>
/// Frees the memory allocated for a stack
/// </summary>
/// <returns>Returns 0 if success and non-zero value otherwise</returns>
int stack_free(stack *stack);

/// <summary>
/// Frees the memory for a singular element
/// </summary>
/// <param name="elem">Element for which memory should be released</param>
/// <returns>Returns 0 if success and non-zero value otherwise</returns>
int stack_free_elem(element **elem); //TODO: Generic

/// <summary>
/// Adds item to stack
/// </summary>
/// <returns>Returns 0 if success and non-zero value otherwise</returns>
int stack_add(stack* stack, student *item); //TODO: Generic

/// <summary>
/// Removes an item from stack
/// </summary>
/// <returns>Returns 0 if item was successfuly removed and non-zero value otherwise</returns>
int stack_pop();

/// <summary>
///	Returns top element of the stack
/// </summary>
/// <returns>Top element of the stack, if error occurs (ex. stack is empty) NULL pointer will be returned</returns>
student* stack_get_first(); //TODO: Czy pierwszy element rozumiany jako szczyt stacka?

/// <summary>
/// Searches stack for a particular value
/// </summary>
void stack_search(); //TODO: Generic
