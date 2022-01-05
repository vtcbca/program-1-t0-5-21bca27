/* write a program to enter any number and check number is palidrom or not */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t,p=0;
	clrscr();
	printf("\n Enter value of a:");
	scanf("%d",&a);
	for(t=a;a>0;a=a/10)
	{
		b=a%10;
		p=b+p*10;
	}
	if(t==p)
		printf("\n Number is palidrom");
	else
		printf("\n Numer is not palidrom");
	getch();
}

