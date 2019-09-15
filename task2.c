#include<stdio.h>
main()
{
	float n=0,t=0;
	printf("the celcius to farehite converter\n");
	printf("------------------------------------\n");
	printf("enter the temperature in degree celcius\n");
	scanf("%f",&n);
	t=((1.8)*n)+32;		
	printf("the temperature in degree farenhite: %f\n",t);
}s
