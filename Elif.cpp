#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b,c values are: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is bigger value");
		}
		else
		{
			printf("c is bigger value");
	    }
	}
	else if(b>c)
	{
		printf("b is bigger value");
	}
	else
	{
		printf("c is bigger value");
	}
	getch();
}
