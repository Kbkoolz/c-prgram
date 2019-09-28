#include<stdio.h>
#include<math.h>
main()
{
	long n,i,m,c=0,a,r,sum=0;
	printf("-----------------------task 6------------------------\n");
	printf("enter the number to be checked as armstrong no:\n");
	scanf("%d",&n);
	m=n;
	a=n;
	while(n!=0)
	{
		c++;
		n/=10;
	}
	while(m!=0)
	{
		r=m%10;
		sum+=pow(r,c);
		m/=10;
	}
	printf("the evaluation your output is : %d\n",sum);	
	if(a==sum)
	printf("it is armstrong no.");
	else
	printf("not an armstrong no.");
}
