#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[10];
	printf("-------------------------task 7--------------------------\n");
	printf("enter the ting value to check whether it is palindrome--->\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(b,a)==0)
	printf("the entered string is palindrome");
	else
	printf("entered string is not a palindrome");
}
