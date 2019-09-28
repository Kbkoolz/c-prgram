#include<stdio.h>
main()
{
	int a[50],i,small,large=0,n;
	printf("--------------------------task 13---------------------------");
	printf("\nenter the no elements that you want in your array : ");
	scanf("%d",&n);
	printf("\nenter the elements that you want in your array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
		large=a[i];
		}
		else if(a[i]<small)
		{
		small=a[i];
		}
	}
	printf("the largest element of an array is : %d\n",large);
	printf("the smallest element of an array is : %d\n",small);
}
