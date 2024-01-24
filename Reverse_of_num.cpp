#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("Enter the number to be reversed: ");
	scanf("%d",&x);
	printf("Reverse of the given number is:");
	while(x>0){
	y=x%10;
	printf("%d",y);
	x=x/10;
	}
	getch();
}
