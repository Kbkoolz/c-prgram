#include<stdio.h>
void main()
{
	long r,n,m;
	printf("-------------------------task 5----------------------------\n");
	printf("enter the input no. that you want to reverse:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n/=10;
		m=m*10+r;
	}
	printf("the reversed output of the no. is: %d",m);
	
}
