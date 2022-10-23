#include<iostream>
using namespace std;
#include<stdio.h>
int facto(int);
int main()
{  int num,f;
	cout<<"\n enter a number:";
	cin>>num;
	f=facto(num);
	cout<<"\n factorialis"<<f<< "of "<<num;
	return 0;
}
int facto(int n)
{
	if(n==1)
	return 1;
	else
	return n*facto(n-1);
}
