#include<iostream>
using namespace std;
#include<cstdlib>
int gcd(int n,int m)
{
	if((n>=m)&&((n%m)==0))
	return(m);
	else
	gcd(m,(n%m));
}
int main()
{ 
 int n,m,result;
 cout<< " enter the first number";
 cin>>n;
 cout<<"\n enter the second number";
 cin>>m;
 result=gcd(n,m);
 cout<< "\n gcd="<<result;
 return 0;
}
