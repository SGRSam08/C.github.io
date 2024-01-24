#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	printf("\nthe number greater than %d are:",n);
	for(i=1;i>n;i++)
	{
		printf("\n%d",i);
	}
	getch();
	return 0;
}
