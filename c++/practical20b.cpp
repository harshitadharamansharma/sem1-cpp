#include<iostream>
using namespace std;
int gcd(int m,int n);
main()
{
	int m,n;
	cout<< " enter two numbers ";
	cin>>m>>n;
	cout<< " the gcd of given numbers is"<<gcd(m,n);
}
int gcd(int m,int n)
{
	if(m==n)
	return m;
	else
	{
		int gcd;
		while(n!=0)
		{
			int d=m%n;
			if(d==0)
			gcd=n;
			m=n;
			n=d;
		}
		return gcd;
	}
}
