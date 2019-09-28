#include<stdio.h>
main()
{
	int i,n,j;
	printf("---------------------------task 10---------------------------\n");
	printf("enter the no. upto which you want the series : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
printf("\nend");
}
