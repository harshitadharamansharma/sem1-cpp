#include<iostream>
#include<conio.h>
using namespace std;
int fact(int b)
{ int c=1;
for(int a=1;a<b;)
{c=c*b;
b--;
}
return c;
};
int main()
{int P,C,n,r;

 cout<<"enter the n and r respectively\n";
 cin>>n>>r;
 if(n<r)
 cout<<"enter the value of n greater than r";
 else
 {P=(fact(n)/fact(r));
 C=(fact(n)/(fact(r)*fact(n-r)));
 cout<<"permutation of the given n and r is..."<<P<<"\n";
 cout<<"combination of the given n and r is..."<<C;
 }
return 0; 
 }

