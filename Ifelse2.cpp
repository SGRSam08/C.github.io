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
		printf("The number entered is odd\n");
	}
	printf("\nEnd of the program");
	getch();
	return 0;
}
