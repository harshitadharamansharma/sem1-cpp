#include<iostream>
using namespace std;
int main()
{
	int a[20],ch,avg,sum=0,max,min,k,j,i=0,n=0;
	cout<<"\n 1. print the even-valued elements";
	cout<<"\n 2. print the odd-valued elements";
	cout<<"\n 3. calculate and print the sum & average of elements of array";
	cout<<"\n 4. print the maximum and minimum elements of array";
	cout<<"\n 5. remove the duplicates from array";
	cout<<"\n 6. print the array in reverse order";
	cout<<"\n enter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"enter the size of array";
		        cin>>n;
				cout<<"\n enter the value of array";
				for(i=0;i<n;i++)
				cin>>a[i];  
		        cout<< "the even numbers are";
		        for(i=0;i<n;i++)
		        {
		        	if(a[i]%2==0)
		        {
		        	cout<<","<<a[i];
		        }
		        }break;
		case 2:	cout<<"enter the size of array";
		        cin>>n;
			    cout<<"\n enter the value of array";
			    for(i=0;i<n;i++)
			    cin>>a[i];
			    cout<<"the odd numbers are";
			    for(i=0;i<n;i++)
			    {
			    	if(a[i]%2!=0)
			    	{
			    		cout<<","<<a[i];
			    	}
			    }break;
		case 3: cout<<"enter the size of array";
			    cin>>n;
			    cout<<"\n enter the value of array";
			    for(i=0;i<n;i++)
			    cin>>a[i];
			    cout<<" the sum and avg of array are:";
			    for(i=0;i<n;i++)
			    {
			    	sum=sum+a[i];
			    }
			    avg=sum/n;
			    cout<<"sum="<<sum;
			    cout<<"avg="<<avg;
			    break;
		case 4: cout<<" enter the size of array";
		        cin>>n;
				cout<<"\n enter the value of array";
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
				max=a[0];
				min=a[0];
				for(int i=0;i<n;i++)
				{
					if(a[i]>max)
					max=a[i];
					if(a[i]<min)
					min=a[i];
				}
				cout<<"maximum value="<<max;
				cout<<"minimum value="<<min;
				break;

		case 5:	cout<<"enter the size of array";
				cin>>n;
				cout<<"\n enter the value of array";
				for(int i=0;i<n;i++)
				{
					cin>>a[i];
				}
				for(int i=0;i<n;i++)
				{
					for(j=i+1;j<n;j++)
					{
					  if( a[i]==a[j])
					{ for(k=j;k<n;k++)
					{a[k]=a[k+1];
				}
				n--;
			    }
		        }
	            }
	            cout<<"\n remaining elements are";
	            for(int i=0;i<n;i++)
	            cout<<a[i];break;
	    case 6: cout<<"enter the size of array";
		        cin>>n;
				cout<<"\n enter the value of array";
				for(int i=0;i<n;i++)
				{
					cin>>a[i];
				} 
				int nar[n];
				for(int i=0,j=n;i<n,j>0;i++,j--)
				{
					nar[j]=a[i];
				}
				cout<<" the reverse order is";
				for(int j=1;j<=n;j++)
				cout<<nar[j]<<",";break;
	   
	}
	return 0;
}
