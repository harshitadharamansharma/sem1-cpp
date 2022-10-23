
/* Program to write combination of 3 digit number
   Author : Rachit Tyagi
   Date : 23-Dec-2006 2345 IST
*/
 
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 
 const int s = 3;
 int a[s],i;
 int x,y,z;
 for (i=0; i<s; i++)
  cin >> a[i];
  x = a[0];
  y = a[1];
  z = a[2];
  i = 0;
  cout<<x<<y<<z;
  cout<<"n";
  while(1){
  a[s] = a[i];
  if (i != s - 1){
   a[i] = a[i+1];
   a[i+1] = a[s];
  }
  else {
   a[i] = a[0];
   a[0] = a[s];
   i=-1;
  }
  i++;
  if (a[0] == x && a[1] == y && a[2] == z)
   break;
  for (int j = 0; j < s; j++)
   cout<<a[j];
  cout<<"/n";
  }
  getch();
  return 0;
}
