#include<stdio.h>
#include "stack_array.h"
#include<stdlib.h>

stack* init()
{
	stack *st = (stack *)malloc(sizeof(stack));
	st->tos = -1;
	return st;
}

int is_empty(stack *st)
{
	if(st->tos<=-1)
		return TRUE;
	else return FALSE;
}

int is_full(stack *st)
{
	if(st->tos>=MAX-1)
		return TRUE;
	else return FALSE;	
}
void push(stack *st, stack_data data)
{
	if(is_full(st))
		exit(1);
	else st->item[++st->tos]=data;
}

stack_data pop(stack *st)
{
	if(is_empty(st))
		exit(1);
	else return(st->item[st->tos--]);
}
