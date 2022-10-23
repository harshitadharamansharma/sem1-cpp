#include<iostream>
using namespace std;
main()
{
	int n,i,first=0,second=1,next;
	cout<< " enter the number of terms you want in fibonacci series";
	cin>>n;
	cout<<"first"<<n<<"tems of fibonacci series";
	for (i=0;i<n;i++)
	{
		if(i<=1)
		next=i;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next;
	}
	return 0;
}
