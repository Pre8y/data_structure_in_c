#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
} node;

typedef node *list;
//list head;

void print_list(list);
void add_at_end(list *, int);
void add_at_start(list *, int);
int main(int argc, char **argv)
{
	list head = NULL;
	add_at_start(&head, 5);
	add_at_start(&head, 4);
	add_at_start(&head, 7);
		print_list(head);
	add_at_end(&head, 9);
	add_at_end(&head, 1);
	print_list(head);
	return 0;
}

void add_at_start(list* head,int a)
{
list temp = (list)malloc(sizeof(node));
	if(NULL==temp)
	{
		printf("Space not available\n");
		exit(1);
	}
	else
	{
		temp->data = a;
		if(NULL==*head)
		{
			temp->next = NULL;
			*head = temp;
		}
		else
		{	temp->next = *head;
			*head = temp;
		}
	
	}


}

void add_at_end(list* head, int a)
{
	list temp = (list)malloc(sizeof(node));
	if(NULL==temp)
	{
		printf("Memory not available");
		exit(1);
	}
	else
	{
		temp->data = a;
		temp->next = NULL;
		if(NULL==*head)
		{
			*head = temp;
		}
		else
		{
		list t = *head;
			while(t->next!=NULL)
			{
				t = t->next;
			}
			t->next = temp;
		}
	}
}
void print_list(list l)
{
	list temp = l;
	while(temp!=NULL)
	{
		printf("data is : %d \n", temp->data);
		temp = temp->next;
	}

}
