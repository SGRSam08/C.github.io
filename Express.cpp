#include<stdio.h>
#include<conio.h>
int main()
{
	int l,m,n;
	float p,q,r;
	printf("Enter the value of l,m,n\n");
	scanf("%d%d%d",&l,&m,&n);
	p= 2+m*5-n/3+1;
	q= 2+m*(5-n)/(3+1);
	r= (2+m*5)-(n/3+1);
	printf("%f\n%f\n%f\n",p,q,r);
	getch();
}
