#include<stdio.h>
#include<stdlib.h>
int celcius_to_fahrenite(float n,float t);
int fahrenite_to_celcius(float n,float t);
int main()
{
	int s;
	float n,t;
	printf("---------------------task 12-----------------------\n");
	while(1)
	{
		printf("temperature conversion menu--->\n");
		printf("1.celcius to fahrenite converter \n2.farehite to celcius converter \n3.exit");
		printf("\nnow want you to do?");
		scanf("%d",&s);
		switch(s)
	{
		case 1:	printf("enter the temperature in degree celcius\n");
				scanf("%f",&n);
				celcius_to_fahrenite(n,t);
				break;
		case 2:	printf("enter the temperature in fahrenhite celcius\n");
				scanf("%f",&n);
				fahrenite_to_celcius(n,t);
				break;
		case 3: exit(0);		
	}
	}
	int celcius_to_fahrenite(float n,float t)
	{
		printf("the celcius to fahrenite converter\n");
		printf("------------------------------------\n");
		t=((9.0/5.0)*n)+32;		
		retrun(t);
	}
	int fahrenite_to_celcius(float n,float t)
	{
		printf("the farehite to celcius converter\n");
		printf("------------------------------------\n");
		t=((5.0/9.0)*(n-32));		
		retrun(t);
	}
return(0);
}
