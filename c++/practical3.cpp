//3.series s=1+1/2+1/3+1/4+...
#include<iostream>
using namespace std;
int main()
{
	float n,s=0,k;
	cout<< " Enter the value of n terms for the series s=1+1/2+1/3+1/4+1/5....\n";
	cin>>n;
	for (float k=1;k<=n;k++)
	s=s+1/k;
	cout<<"sum of numbers="<<s;
	return 0; 
}
