#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("\nThe number less than %d are: ",n);
	for(;i<n;i++)
	{
		printf("\n%d",i);
	}
	getch();
	return 0;
}
