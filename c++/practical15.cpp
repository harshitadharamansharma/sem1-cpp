#include<iostream>
using namespace std;
int main()
{
	int *p,n,i,sum=0;
	cout<<"ENTER THE SIZE OF ARRAY";
	cin>>n;
	p=new int[n];
	cout<<"ENTER THE VALUE OF AN ARRAY";
	for(i=0;i<n;i++)
	{
		cin>>p[i];
		//*(p+i);
		sum=sum+p[i];
	}
	cout<<"SUM OF AN ARRAY="<<sum;
	return 0;
}
