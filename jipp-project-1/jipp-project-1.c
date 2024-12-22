// jipp-project-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "stack.h"

int main()
{
		struct stack* my_stack = stack_init();
		struct student* student = (struct student*)malloc(sizeof(struct student));
		if(!student) {
			printf("Error during memory allcoation");
			return 1;
		}
		student->age = 5;
		stack_add(my_stack, student);
		stack_free(my_stack);
		free(my_stack);
		my_stack = NULL;
    printf("Hello World!\n");
		return 0;
}
