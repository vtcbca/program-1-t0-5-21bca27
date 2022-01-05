/* write a program to enter any number and print sum of it's digit */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,r,sum;
	clrscr();
	printf("\n Enter value of a:");
	scanf("%d",&a);
	for(sum=0;a>0;sum=sum+r)
	{
	  r=a%10;
	  a=a/10;
	}
	printf("\n sum is %d",sum);
	getch();
}

