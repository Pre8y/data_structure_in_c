#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

node* init(void){
	node *head =NULL;
	return head;
}
void add_at_start(node **head, void *data)
{
	node *temp = (node*)malloc(sizeof(node));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next = *head;
	*head = temp;
}

void add_at_end(node **head, void *data)
{
	node *temp = (node*)malloc(sizeof(node));
	if(NULL==temp)
		exit(1);
	temp->data = data;
	temp->next = NULL;
	node *t = *head;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next = temp;
}

void print_list(node *head)
{
	puts("your list is here\n");
	while(head!=NULL)
	{
		printf("%d\t", *(int *)head->data);
		head = head->next;
	}
	puts("\n----\n\n");
}

void* remove_from_start(node **head)
{
 node *temp = *head;
 *head = temp->next;
 temp->next = NULL;
 return temp->data;
}

void* remove_from_end(node **head)
{
	node *temp = *head;
	node *k;
	while(temp->next->next!=NULL)
	{
		temp = temp->next;
	}
	k=temp->next;
	temp->next = NULL;
	return k->data;
}
