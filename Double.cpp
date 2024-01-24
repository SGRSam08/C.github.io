#include<stdio.h>
int main()
{
	double d=10.0000000000;
	long double d1=2.5e-2;
	printf("The value and size of d is: %1f and %d",d,sizeof(d));
	printf("\n The value and size of d1 is:%Lf and %d",d1,sizeof(d1));
	return 0;
}
