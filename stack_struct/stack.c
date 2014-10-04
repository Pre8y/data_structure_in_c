
#include<stdio.h>
#include "stack.h"
#include<stdlib.h>

stack* init()
{
	stack *tos=NULL;
	return tos;
}

int is_empty(stack *st)
{
	if(st==NULL)
		return TRUE;
	else return FALSE;
}


void push(stack **st, void* data)
{
	stack *node = (stack*)malloc(sizeof(stack));
	node->data = data;
	node->next = *st;
	*st=node;
}

void* pop(stack **st)
{
	if(is_empty(*st))
		exit(1);
	stack *temp = *st;
	void *result = temp->data;
	*st = temp->next;
	return result;

}

void* peek(stack *st)
{
	if(is_empty(st))
		exit(1);
	return st->data;
}

void print_stack(stack *temp)
{

	while(!is_empty(temp))
	{
		printf("%d\n", *(int *)temp->data);
		temp=temp->next;
	}

}
