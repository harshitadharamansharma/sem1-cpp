#include<iostream>
using namespace std;
#include<stdio.h>
void merge(int [], int , int [], int , int[] );
int main()
{
	int a[100], b[100], m,n,c,sorted[200];
	cout<< "\n print the number of elemnts in first array";
	cin>>m;
	cout<< "\n give the value of integers";
	for(c=0;c<m;c++)
	{
		cin>>a[c];
	}
	cout<< "\n print the number of elements in the second array";
	cin>>n;
	cout<< "\n give the value of integers";
	for(c=0;c<n;c++)
	{
		cin>>b[c];
	}
	merge(a,m,b,n,sorted);
	cout<< "\n sorted array=";
	for(c=0;c<m+n;c++)
	{
		cout<<"\n combined array="<<sorted[c];
	}
	return 0;
}
void merge( int a[],int m,int b[],int n,int sorted[])
{int i,j,k;
j=k=0;
for(i=0;i<m+n;)
{if(j<m&&k<n)
{
	if(a[j]<b[k])
	{
		sorted[i]=a[j];
		j++;
	}
	else
	{
		sorted[i]=b[k];
		k++;
	}
	i++;
}
else if(j==m)
{
	for(;i<m+n;)
	{
		sorted[i]=b[k];
		k++;
		i++;
	}
}
else 
{
	for(;i<m+n;)
	{
		sorted[i]=a[j];
		j++;
		i++;
	}
}
}
}
