#include<stdio.h>
#include<conio.h>
int main()
{
	int s_id;
	char s_name[20];
	float s_percentage;
	printf("Enter Student ID: ");
	scanf("%d",&s_id);
	printf("Enter Student Name: ");
	scanf("%s",&s_name);
	printf("Enter Student Percentage: ");
	scanf("%f",&s_percentage);
	printf("\nThe student details are:");
	printf("\nStudent id:%d\nStudent name:%s\nStudent percentage:%f",&s_id,&s_name,&s_percentage);
	getch();
	return 0;
}
