#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number entered is even\n");
	}
	else
	{
		printf("\nThe number entered is odd");
	}
	printf("\nEnd of the program");
	getch();
	return 0;
}
