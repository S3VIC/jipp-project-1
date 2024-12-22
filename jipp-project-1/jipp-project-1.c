// jipp-project-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "stack.h"

int main()
{
		struct stack* my_stack = stack_init();
		stack_free(my_stack);
		free(my_stack);
    printf("Hello World!\n");
}
