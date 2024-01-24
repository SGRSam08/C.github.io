#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the number: ",&n);
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The entered number is even\n",n);
	}
	else
	{
		printf("The entered number is odd\n",n);
	}
	printf("End of the program\n");
	getch();
	return 0;
}
