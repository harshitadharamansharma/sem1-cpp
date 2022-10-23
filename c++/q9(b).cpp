#include <iostream>
#include <conio.h>
using namespace std;

class bin_search
{
int num[50],s,search;
public:
void getdata(void);
int searchfun(void);
void display(void);
};

void bin_search :: getdata(void)
{
cout<<endl<<endl;
cout<<"Enter how many Number of array you want to create:-";
cin>>s;
cout<<"\nEnter "<<s<<" Integers in Ascending order\n";
for(int i=0;i<s;i++)
    cin>>num[i];
cout<<"\nEnter your Search :- ";
cin>>search;
}

int bin_search :: searchfun(void)
{
int bottom=0,top=s-1,mid;
while(top >= bottom)
{
    mid=(top+bottom)/2;
   if(num[mid]==search)
      return(mid+1);
   else
   {
      if(num[mid] < search)
            bottom=mid+1;
      else
          top=mid;
   }
}
return(-1);
}

void bin_search :: display(void)
{
int result;
result=searchfun();
if(result==-1)
    cout<<"\n\nEntered search is Invalid\n";
else
    cout<<"\n\nSearch is Located at "<<result<<" Postition\n";
}

int main()
{

bin_search o1;
o1.getdata();
o1.display();
getch();
return 0;
}
