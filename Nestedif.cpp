#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("\nEnter the value of n: ");
	scanf("%d",&n);
	if(n>=0)
	{
		if(n>5)
		{
			printf("\nThe number is greater than 5\n");
		}
		else
		{
			printf("\nThe number is lesser than 5");
		}
	}
	else
	{
		printf("\nThe number entered is less than zero\n");
	}
	printf("\nEnd of the program.");
	getch();
	return 0;
}
