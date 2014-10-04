/*
 * Check if a string has all unique character
 */
#include<stdio.h>
/*
 *check for unique char using some other datastructure
 */
int check_unique_char_ds(char*);

int main(int argc, char **argv)
{
	if(check_unique_char_ds("hello"))
	printf("\nhas all unique char\n");
	else printf("\n hell no\n");
}

int check_unique_char_ds(char *str)
{
	int i,check[26];
	for(i=0; i<26;i++)
		check[i]=0;
	while(*str)
	{
		if(check[*str-'a'])
			return 0;
		else check[*str-'a']=1;	
	}
	return 1;
}

