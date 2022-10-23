#include<iostream>
using namespace std;
int main()
{
	int a,n,k;
	cout<< " enter the number";
	cin>>a;
	for( int n=2;n<a;n++)
	{
		if (a%n==0)
		{
			k=1;
			cout<< " not a prime number ";
			break;
		}
	}
	if (k!=1)
	cout<< " it is a prime number"<<endl<<endl;

	return 0;
}
