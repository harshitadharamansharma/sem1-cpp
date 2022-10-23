#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<< "enter the number of lines";
	cin>>n;
	for(int i=1;i<=n;i++)
	{ for (int k=1; k<=n-i;k++)
	{
	cout<<" ";
	}
	for (int j=1;j<i*2;j++)
	{cout<< "*";
	}
	cout<< "\n";
}
return 0;
}
