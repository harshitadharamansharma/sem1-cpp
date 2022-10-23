#include<iostream>
using namespace std;
#include<math.h>
int area(int r)
{int x;
x=3.14*r*r;
return x;
}
int circ(int r)
{
	int y;
	y=2*3.14*r;
	return y;
}
int main()
{
	int a,b,c;
	cout<<" enter the value of radius(r)=";
	cin>>a;
	b=area(a);
	cout<<"area ="<<b;
	c=circ(a);
	cout<<"circumference="<<c;
}
