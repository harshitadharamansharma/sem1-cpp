#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{

	if(argc<=2)
	{
		cout<<"\tNO COMMAND LINE STATEMENT ";
		getch();
		exit(0);
	}
	int i,count[26];
	for(i=0;i<26;i++)
		count[i]=0;
	for(i=0;i<argc;i++)
	{
		if(*argv[i]=='a'||*argv[i]=='A')
			count[0]++;
		else if(*argv[i]=='b'||*argv[i]=='B')
			count[1]++;
		else if(*argv[i]=='c'||*argv[i]=='C')
			count[2]++;
		else if(*argv[i]=='d'||*argv[i]=='D')
			count[3]++;
		else if(*argv[i]=='e'||*argv[i]=='E')
			count[4]++;
		else if(*argv[i]=='f'||*argv[i]=='F')
			count[5]++;
		else if(*argv[i]=='g'||*argv[i]=='G')
			count[6]++;
		else if(*argv[i]=='h'||*argv[i]=='H')
			count[7]++;
		else if(*argv[i]=='i'||*argv[i]=='I')
			count[8]++;
		else if(*argv[i]=='j'||*argv[i]=='J')
			count[9]++;
		else if(*argv[i]=='k'||*argv[i]=='K')
			count[10]++;
		else if(*argv[i]=='l'||*argv[i]=='L')
			count[11]++;
		else if(*argv[i]=='m'||*argv[i]=='M')
			count[12]++;
		else if(*argv[i]=='n'||*argv[i]=='N')
			count[13]++;
    	else if(*argv[i]=='o'||*argv[i]=='O')
			count[14]++;
		else if(*argv[i]=='p'||*argv[i]=='P')
			count[15]++;
		else if(*argv[i]=='q'||*argv[i]=='Q')
			count[16]++;
		else if(*argv[i]=='r'||*argv[i]=='R')
			count[17]++;
		else if(*argv[i]=='s'||*argv[i]=='S')
			count[18]++;
		else if(*argv[i]=='t'||*argv[i]=='T')
			count[19]++;
		else if(*argv[i]=='u'||*argv[i]=='U')
			count[20]++;
		else if(*argv[i]=='v'||*argv[i]=='V')
			count[21]++;
		else if(*argv[i]=='w'||*argv[i]=='W')
			count[22]++;
		else if(*argv[i]=='x'||*argv[i]=='X')
			count[23]++;
		else if(*argv[i]=='y'||*argv[i]=='Y')
			count[24]++;
		else if(*argv[i]=='z'||*argv[i]=='Z')
			count[25]++;
	}
	cout<<"--------------------------------------------------------";
	cout<<"             OCCURRENCES OF EACH ALPHABET               ";
	cout<<"--------------------------------------------------------";
	char alpha=65;
	for(i=0;i<26;i++,alpha++)
		cout<<"\t"<<alpha<<"\t"<<count[i];

	return 0;
}

