#include<stdio.h>
#include<conio.h>
int main(void)
{
	int x;
	float cel,fah;
	printf("\n Enter the conversation option 1 or 2");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter the Fahrenheit value");
			scanf("%d",&fah);
			cel=(fah-32)*(5/9);
			printf("\n Enter the celsius value");
			scanf("%f",&cel);
			fah=9*(cel/5)+32;
			printf("\n the Fahrenheit value is %f",fah);
			break;
	}
	getch();
	return 0;
}
