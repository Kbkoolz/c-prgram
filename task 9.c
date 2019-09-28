#include<stdio.h>
main()
{
	int n,m=1,i;
	printf("---------------------------task 9-----------------------\n\n");
	printf("enter the no whose factorial to be find : ");
	scanf("%d",&n);
	if(n==1||n==0)
	printf("factorial is : 1");
	else
	{
		for(i=n;i>0;i--)
		{
			m=m*i;
		}
		printf("the factorial of a given no is : %d\n\n",m);
	}
	printf("end\n");
}
