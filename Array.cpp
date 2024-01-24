#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int array[10],i,n,sum=0;
	printf("Enter the size of One-Dimensional array: ");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("Enter the element number %d: ",i+1);
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	printf("Sum of the array elements=%d",sum);
	getch();
	return 0;
}
