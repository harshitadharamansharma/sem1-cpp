#include <iostream>
using namespace std;
int facto(int*a);
int main()
{
	int n,sum,s;
	cout<< " enter a number";
	cin>>n;
	sum=facto(&n);
	cout<< "factorial="<<facto(&n);
	return 0;
}
int facto(int*a)
{
	float sum=1,f=*a;
	for(int i=1;i<=f;i++)
	sum=sum*i;
	return sum;
}
