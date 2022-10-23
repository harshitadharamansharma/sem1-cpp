//Harshita Sharma
#include<iostream>
using namespace std;
main() 
{ int no,a,sum=0,pro=1;
cout<<"enter an integer no.\n";
cin>>no;
while (no>0||no!=0)
{a=no%10;
no=no/10;
sum+=a;
pro*=a;
}
cout<<"sum of the digits of the integer number:"<<sum<<"\n and product of the digits of the number:"<<pro<<endl;
int i=0;
int j[30] ;
int n=no;
int b;
cout<<"reverse of the integer number is:";
while(no>0)
{b=n%10;
n=n/10;
j[i]=b;
cout<<j[i];
i++;
}
cout<<"reverse of the integer number is:";

return 0;
}

