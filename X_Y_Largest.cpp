#include<stdio.h>
int main()
{
	int x,y,largest;
	printf("Enter the two numbers:\n ");
	scanf("%d%d",&x,&y);
	if(x==y)
	{
		printf("The values of X and Y are equal\n");
	}
	else
	{
		largest=(x>y)?x:y;
		printf("The largest numebr is %d\n",largest);
		return 0;
	}
}
