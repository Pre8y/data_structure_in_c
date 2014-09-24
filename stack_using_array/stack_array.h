#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0
#define MAX 10

typedef int stack_data;
typedef struct intstack {
	int tos;
	stack_data item[MAX];	
} stack;

stack* init();
void push(stack *st, stack_data data);
stack_data pop(stack *st);
int is_empty(stack *st);
int is_full(stack *st);
#endif
