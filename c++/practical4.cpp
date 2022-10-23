#include<iostream>
using namespace std;
int main()
{
	int a,s=0,k;
	cout<< " enter the number";
	cin>>a;
	for (int k=1;k<=a;k+=2)
	s+= k-(k+1);
	cout<<" the sum of series="<<s;
	return 0;
}
