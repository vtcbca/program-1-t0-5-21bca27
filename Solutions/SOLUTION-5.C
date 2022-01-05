/* write a program to enter any number and check number is prime or not */
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,c=0;
	clrscr();
	printf("\n Enter any value");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	  printf("\n This is not a prime number");
	else
	  printf("This is a prime number");
	getch();
}