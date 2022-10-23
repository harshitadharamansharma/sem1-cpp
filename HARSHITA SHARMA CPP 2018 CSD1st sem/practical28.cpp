//reverse the elements of an array in place
#include<iostream>
using namespace std;
void reverse(int *,int);
int main()
{
	int size,a[20];
	cout<<"Enter size of array : ";
	cin>>size;
	cout<<"Enter elements of array : ";
	for(int i=0;i<size;i++)
	cin>>a[i];
	
	reverse(a,size);
	cout<<"After reversing, the array is :"<<endl;
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
	return 0;
}
void reverse(int *a,int s)
{
	int temp;
	for(int i=0,j=s-1;i<s/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
