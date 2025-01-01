#include <stdio.h>
#include "stack.h"

int main()
{
	size_t size = sizeof(student);
	uint8_t initialised = 0;
	stack* my_stack = stack_init();
	student* st1 = create_student("Name 1", 1999, MATH);
	student* st2 = create_student("Name 2", 2000, COMPUTER_SCIENCE);
	stack_add(my_stack, st1);
	stack_add(my_stack, st2);
	stack_free(my_stack);
	free(my_stack);
	return 0;
}
