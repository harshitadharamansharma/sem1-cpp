#include <iostream>
#include <algorithm>
using namespace std;

int arr[10]={0,1,2,3,4,5,6,7,8,9};
void switc(int a, int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;

    return;
}

void print(int size){
      for (int i=0;i<size;i++)
        cout << arr[i] << " ";
    cout << endl;
    return;
}
long Factorial(long val) 
{ 
long Result = 1; 
for(long i = 1; i <= val; i++) 
{ 
Result *= i; 
} 
return Result;
} 
long Combination(long N, long R) 
{ 
return (Factorial(N)) / ((Factorial(N-R)) * Factorial(R)); 
} 

void comb(int n, int r){
	int i;
	int k= Combination(n, r);
    if (k==0)
        print(r);
    else{
        for (i=k-1;i>=0;i--){
            switc(i,k-1);
            comb(k-1,r);
            switc(i,k-1);
        }
   }
return;
}

int main(){
	while (1){
	int n, n1;
	cout<<"Enter a number: ";
	cin>>n>>n1;
	
	comb(n, n1);

	cout<<"The Factoral for the combination is "<<Combination(n,n1)<<endl;
    return 0;
	
	}}
