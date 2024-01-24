#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>18)
	{
		printf("your eligible to vote");
	}
	else
	{
		printf("your not eligible to vote");
	}
	getch();
}
