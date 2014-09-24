#include<stdio.h>
#include<stdlib.h>
#include "stack_array.h"

int main(int argc, char **argv)
{
	stack *stack1=	init();
	push(stack1, 1);
	push(stack1, 2);
	push(stack1, 3);

	puts("------------------\n");
	while(!is_empty(stack1))
	{
		printf("%d\n", pop(stack1));
	}
	free(stack1);
}
