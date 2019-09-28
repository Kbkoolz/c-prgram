#include<stdio.h>
main()
{
	int n,i,m;
	printf("----------------------task 8--------------------------\n");
	printf("enter the no of whose table you want :\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("%d * %d = %d\n",n,i,m);
	}
	printf("end\n");
}
