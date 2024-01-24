#include<stdio.h>
int main()
{
	int x,y,z,largest;
	printf("Enter any three numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	largest=((x>y&&x>z)?x:(y>z)?y:z);
	printf("\nLargest of three numbers is:%d",largest);
	return 0;
}
