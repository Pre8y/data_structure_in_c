#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

int main(int argc, char** argv)
{
	node *list = init();
	int a = 5;
	int b = 7;
	int c = 1;
	int d = 9;
	add_at_start(&list, &a);
	add_at_start(&list, &b);
	print_list(list);
	add_at_end(&list, &c);
	add_at_end(&list, &d);
	print_list(list);
	remove_from_start(&list);
	print_list(list);
	remove_from_end(&list);
	print_list(list);
	return 0;
}
