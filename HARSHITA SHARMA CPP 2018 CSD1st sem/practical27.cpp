// to copy contents of a existing file to new file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifile;
	ofstream ofile;
	char ch;
	ifile.open("alphabets.txt");
	if(!ifile)
	{cout<<"File does not exist";
	return 100; 
	}
	ofile.open("new.txt");
	while(ifile.get(ch))
	{if(ch==' '||ch=='\n')
		continue;
		else
		ofile.put(ch);
	}
	ifile.close();
	ofile.close();
	ifstream fin;
	fin.open("new.txt");
	while(fin.get(ch))
		cout<<ch;
	fin.close();	
return 0;
}
