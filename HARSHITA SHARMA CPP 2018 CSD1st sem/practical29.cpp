//take 10 integers , store them in array
//and print array elements in sorted manner
#include<iostream>
using namespace std;
void ascend(int []);
void descend(int []);
int main()
{   
    int a[20],i;
    cout<<"\nArray Size : 10 \n";
    cout<<"\nEnter the elements of array:\n";
    for(i=0;i<10;i++)
   	cin>>a[i];    
    cout<<"\nArray in ascending order: \n";
    ascend(a);
    cout<<"\nArray in descending order:\n";
    descend(a);
    cout<<"\nOriginal array is still : \n";
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    return 0;
}

void ascend(int a[])
{    int i,j,*temp[10],*tempadd;
	 for(i=0;i<10;i++)
	 {	temp[i]=a+i;
	 }
     for(i=0;i<9;i++)
     {       for(j=0;j<9-i;j++)
             {       if(*temp[j]>*temp[j+1])
                     {      tempadd = temp[j];
                            temp[j]=temp[j+1];
                        	temp[j+1]=tempadd;
                     }
             }
     }
     for(i=0;i<10;i++)
            cout<<*temp[i]<<" ";
}
void descend(int a[])
{    int i,j,*temp[10],*tempadd;
	 for(i=0;i<10;i++)
	 {	temp[i]=a+i;
	 }
     for(i=0;i<9;i++)
     {       for(j=0;j<9-i;j++)
             {       if(*temp[j]<*temp[j+1])
                     {      tempadd = temp[j];
                            temp[j]=temp[j+1];
                        	temp[j+1]=tempadd;
                     }
             }
     }
     for(i=0;i<10;i++)
            cout<<*temp[i]<<" ";
}             
