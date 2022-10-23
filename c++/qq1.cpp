#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//(i) part
	int a[20],n,i,j,k,p;
	cout<<"\nenter the numberof elements:";
	cin>>n;
	cout<<"\nenter the set of elements:";
	for(i=0;i<n;i++)
	{
		cout<<"\nenter:";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		if(a[i]==a[j])
		{
			for(k=j;k<n;k++)
			a[k]=a[k+1];
			i--;
			n--;
		}
	}
	cout<<"\nunique set is:";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	//(ii) part
	
	int b;
	cout<<"\nenter the elements to be searched in the set:";
	cout<<"\nenter the first element:";
	cin>>b;
	i=0;
	do
	{
		if(a[i]==b)
		{
			cout<<"\nelement is in the set !";
			break;
			
		}
		else i++;
	} 
	while(i!=n-1);
	//(iii) part.
	int c=0;
	cout<<"\ncardinality of the set u entered is:";
	for(i=0;i<n;i++)
	c++;
	cout<<"\ncardinality of the given set is :"<<c;
	//(iv) part
	cout<<"\nthe unique elements is:";
	int y;
	y=pow(2,n);
	cout<<y;
	
}


