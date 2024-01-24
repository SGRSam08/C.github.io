#include<stdio.h>
#include<conio.h>
int main()
{
	int n,N,N1,chk;
	printf("Please enter the value of n: ");
	scanf("%d",&n);
	printf("\nPRIME NUMBERS FROM 2 to %d ARE:\n\n",n);
	for(N=2;N<=n;N++)
	{
		chk=0;
		for(N1=N-1;N1>1;N1--)
		if(N%N1==0)
		{
			chk++;
			break;
		}
		if(chk==0)
		printf("%d\t",N);
	}
	printf("\n");
	getch();
}
