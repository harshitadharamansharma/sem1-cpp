#include<iostream>
#include<stdio.h>
void swap(int*num1,int*num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
int main()
{
	int num1,num2;
	printf( "\n enter the first number");
	scanf("%d",&num1);
	printf("\n enter second number");
	scanf("%d",&num2);
	swap(&num1,&num2);
	printf("\n first number :%d",num1);
	printf("\n second number: %d",num2);
	return 0;
}
