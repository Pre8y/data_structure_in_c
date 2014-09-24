#ifndef LIST_H
#define LIST_H

typedef struct node {
	void *data;
	struct node *next;
} node;

node* init(void);
void add_at_start(node **, void *);
void add_at_end(node **, void *);
void print_list(node *);
void* remove_from_start(node **);
void* remove_from_end(node **);
#endif

