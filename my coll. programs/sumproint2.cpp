#include<iostream>
using namespace std;
int sumproint(int n,int &sum,int &pro)
{
 int a;
 sum=0,pro=1;
 while (n>0)
  {
  a=n%10;
  n=n/10;
  sum+=a;
  pro*=a;
  }
}
 main()
{
int no,s,p;
cout<<"enter an integer no.\n";
cin>>no;
sumproint(no,s,p);
cout<<"SUM="<<s<<"\nPRODUCT="<<p;
cout<<"\n sum of the digits of the integer number:"<<s<<"\n and product of the digits of the number:"<<p<<endl;
return 0;
}
