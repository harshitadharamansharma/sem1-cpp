/*Harshita Sharma 
B.Ss.(H) Computer Science first year
PROGRAMMING FUNDAMENTALS USING C++
"2.PROGRAM TO reverse AN INTEGER"
*/

#include<iostream>
using namespace std;
main()
{
	int a,b,n=0;
	cout<<" Enter a number:\n";
	cin>>a;
	do
	{
		b=a%10;
		n=n*10+b;
		a=a/10;
	}
	while(a>0);
	cout<<n;
	return 0;
}
