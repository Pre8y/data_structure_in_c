
#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

int main(int argc, char **argv)
{
	stack *stack1=	init();
	int a = 1;
	int b = 2;
	int c = 3;
	push(&stack1, &a);
	push(&stack1, &b);
	push(&stack1, &c);

	puts("\n#############\n");
	print_stack(stack1);

	puts("------------------\n");
	while(!is_empty(stack1))
	{
		printf("%d\n", *(int *)pop(&stack1));
	}
	free(stack1);
}
