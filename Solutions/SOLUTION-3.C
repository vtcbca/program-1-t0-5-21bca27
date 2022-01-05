/* write a program to enter any number and check number is Armstong or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n=0,t;
	clrscr();
	printf("\n Enter value of a:");
	scanf("%d",&a);
	for(t=a;a>0;a=a/10)
	{
		b=a%10;
		n=n+b*b*b;
	}
	if(t==n)
		printf("\n Number is Armstrong");
	else
		printf("\n Number is not Armstrong");
	getch();

}





