
#ifndef STACK_H
#define STACK_H

#define TRUE 1
#define FALSE 0
#define MAX 10

typedef struct stack_node{
	void *data;
	struct stack_node *next;
}stack ;


stack* init();
void push(stack **st, void *data);
void* pop(stack **st);
int is_empty(stack *st);
void* peek(stack *st);
void print_stack(stack *st);
#endif
