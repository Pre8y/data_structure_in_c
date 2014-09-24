
#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0
#define MAX 10

typedef struct stack_node {
	void *data;
	stack* next;
} stack;

stack* tos;
stack* init();
void push(stack *st, void *data);
void* pop(stack *st);
int is_empty(stack *st);
int is_full(stack *st);
#endif
