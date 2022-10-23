#include<iostream>
using namespace std;
main(){
      int n,i,sum;
      cout<<"Enter a number";
      cin>>n;
      sum=0;
      i=1;
      while(i<=n){
      	if(i%2==0)
      	  sum-=i;
      	  else
      	  sum+=i;
      	  i++;
      }
      
      cout<<sum<<endl;
}
