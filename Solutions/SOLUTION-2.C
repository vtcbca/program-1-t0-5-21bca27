/* write a program to enter any number and print it's revers */

#include<stdio.h>
#include<conio.h>
void main()
{

	int a,r;
	clrscr();
	printf("\n Enter value of a:");
	scanf("%d",&a);
	while(a>0)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}
	getch();
}