/*Harshita Sharma 
B.Ss.(H) Computer Science first year
PROGRAMMING FUNDAMENTALS USING C++
"1.PROGRAM TO PRINT PRODUCT AND SUM OF DIGITS OF AN INTEGER"
*/
#include<iostream>
using namespace std;
main()
{   cout<<"Harshita Sharma \nB.Ss.(H) Computer Science first year \nPROGRAMMING FUNDAMENTALS USING C++ \n1.PROGRAM TO PRINT PRODUCT AND SUM OF DIGITS OF AN INTEGER";
	int an,pn=1,sn=0,no;
	cout<< "\nEnter an integer\n";
	cin>>an;
	do
	{
		no=an%10;
		an/=10;
		sn+=no;
		pn*=no;
	}
	while(an>0);
	cout<<" the sum of the digit is="<<sn;
	cout<<" the product of the digit is="<<pn;
	return 0;
}
