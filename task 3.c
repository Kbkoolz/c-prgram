#include<stdio.h>
main()
{
	int maths=0,science=0,english=0,sum=0;
	float average=0;
	printf("-----------------------task----------------------------\n");
	printf("enter the marks in maths out of 100 is:\n");
	scanf("%d",&maths);
	printf("enter the marks in science out of 100 is:\n");
	scanf("%d",&science);
	printf("enter the marks in english out of 100 is:\n");
	scanf("%d",&english);
	printf("the sum of three subjects are out of 300 is:\n ");	
	sum=maths+science+english;
	printf("%d\n",sum);
    printf("the average of three subjects are out of 100 is:\n ");	
	average=(maths+science+english)/3;
    printf("%f\n",average);
}

