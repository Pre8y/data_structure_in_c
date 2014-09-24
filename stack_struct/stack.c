
#include<stdio.h>
#include "stack_array.h"
#include<stdlib.h>

void init()
{
	tos=NULL;
}

int is_empty(stack *st)
{
	if(tos==NULL)
		return TRUE;
	else return FALSE;
}


void push(stack *st, void* data)
{
	if(is_empty(st))
}

stack_data pop(stack *st)
{
	if(is_empty(st))
		exit(1);
	else return(st->item[st->tos--]);
}
