#include<stdio.h>
main()
{
	struct info
	{
		char a[100],b[100],c[100];
		int bookno;		
	};
	struct info book1;
	printf("-----------------------task 11--------------------------\n");
	printf("\nentetr the book code : ");
	scanf("%d",&book1.bookno);
	printf("\nentetr the book title : ");
	gets(book1.a);
	printf("\nentetr the book author's name : ");
	gets(book1.b);
	printf("\nentetr the genre of the book : ");
	gets(book1.c);
	printf("--------------------------------------------------------\n");
	printf("the various details about the book are as follows-->\n\n1. book code : %d\n2. book title : %s\n3. author's name : %s\n4. book genre : %s\n",book1.bookno,book1.a,book1.b,book1.c);
}
