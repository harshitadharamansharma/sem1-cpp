#include<iostream>
using namespace std;
#include<math.h>
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int i=10,j=20;
	double k=10.24,l=10.95;
	char a='x',b='y';
	cout<< "original value="<<i<<j;
	cout<< "original value="<<k<<l;
	cout<< "original value="<<a<<b;
	swap(i,j);
	swap(k,l);
	swap(a,b); 
	cout<< "function value="<<i<<j;
	cout<< "function value="<<k<<l;
	cout<< "function value="<<a<<b;
}
