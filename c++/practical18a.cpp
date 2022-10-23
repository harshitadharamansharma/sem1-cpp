#include<iostream>
using namespace std;
int rec_fibo(int n)
{
    if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return rec_fibo(n-1)+rec_fibo(n-2);
}
int main()
{
	int n,i;
	cout<<"ENTER THE TOTAL NUMBER OF ELEMNTS IN THE SERIES";
	cin>>n;
	cout<<"\nTHE FIBONACCI SERIES IS:\n";
	for(i=0;i<n;i++)
	{
		cout<<rec_fibo(i)<<" ";
	}
}
