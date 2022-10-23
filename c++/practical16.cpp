#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
	int n;
	char s[100],*c,s1[100],s2[200];
	gets(s1);
	gets(s2);
	gets(s);
	int l=strlen(s);
	cout<<"\n welcome to the menu ";
	cout<<"\n 1.show address of each character in the string";
	cout<<"\n 2.concatenate two strings without using using strcat function";
	cout<<"\n 3.concatenate two strings using strcat function";
	cout<<"\n 4.compare two strings";
	cout<<"\n 5.calculate the length of string (using pointers)";
	cout<<"\n 6.convert all lowercase characters to uppercase";
	cout<<"\n 7.convert all uppercase charactersb to lower case";
	cout<<"\n 8.calculate the number of vowels";
	cout<<"\n 9.reverse the string";
	cout<<"\n 10.else move out";
	cout<<"\n enter your choice";
	cin>>n;
	switch(n)
	{
	case 1:cout<<"enter a string"<<"\n";
	for(int i=0;i<1;i++)
	{
		cout<<" address of"<<s[i]<<"="<<&s[i];
	}
	break;
	case 2:{
		    cout<<s1;
		    cout<<s2;
	       }
	   break;
	case 3: {
		    cout<<"enter 1st string:\n";
		    cout<<"enter 2nd string:\n";
		    cout<<strcat(s1,s2);
	        }   
	   break;
	case 4: {
		    cout<<"enter 1st string: \n";
		    cout<<"enter 2nd string: \n";
		    if(strcmp(s1,s2)==0)
		    cout<<"strings are equal ";
		    else
		    cout<<"strings are not equal ";
	        }
	   break;
	case 5: {
		    char *p=s;
			cout<<"enter a string \n";
			int c=0;
			while(*p!='\0')
			{
				c++;
			} 
			cout<<"length of the string is"<<c;
	        }
	   break;
	case 6:{
		cout<<"enter a string \n";
		for(int i=0;i<1;i++)
		{
			if(islower(s[i]))
			s[i]=toupper(s[i]);
		}
		for(int i=0;i<1;i++)
		{
			cout<<s[i];
		}
	    }
		break;
	case 7:{
		   cout<<"enter a string";
		   for(int i=0;i<1;i++)
		   {
		   if(isupper(s[i]));
		   s[i]=tolower(s[i]);
	       }
		   for(int i=0;i<1;i++)
		   {
		   	cout<<s[i];
		   }
	       }
	       break;
	case 8:{
		    int k=0;
		    int p=0;
		    cout<<"enter a string: \n";
		    int l=strlen(s);
		    for(int i=0;i<1;i++)
		    {
		    	if(strchr("aeionAEIOU",s[i]))
		    	k++;
		    	else
		    	p++;
		    }
		    cout<<" no. of vowels are";
		
	       }
		   break;
	case 9:{
		   cout<<"enter a string \n:";
		   int i=strlen(s);
		   for(int i=l-1;i>=0;i--)
		   {
		   	cout<<s[i];
		   }
	       }
		   break;
	default:cout<<"you have entered a wrong choice";
	break;	   	          
	}
	return 0; 
}
