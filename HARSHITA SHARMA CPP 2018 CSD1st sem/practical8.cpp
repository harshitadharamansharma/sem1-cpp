#include<iostream>
#define swap(x,y) int t;t=x;x=y;y=t;
using namespace std;
main()
{
	int a,b ;
	cout<< "enter the value of a"<<"\n";
	cout<< "\nenter the value of b"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<< " the value of a="<<a;
	cout<< " the value of b="<<b;
	return 0;
}

