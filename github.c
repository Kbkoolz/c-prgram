#include<stdio.h>
main()
{
	int age=0;
	long m=0;
	char a[20],b[20];
	printf("user basic information menu\n");
	printf("----------------------------------\n");
	printf("enter your first name\n");
	scanf("%s",&a);
	printf("enter your last name\n");
	scanf("%s",&b);
	printf("enter your age\n");
	scanf("%d",&age);
	printf("enter your phone no.\n");
	scanf("%d",&m);
	printf("the name you entered is : %s %s\nthe age you entered is : %d\nthe phone no. you entered is : %d\n",a,b,age,m);
	return ;
}
