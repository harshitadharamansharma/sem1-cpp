#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Student
{
	int roll_no;
	string name;
	int clas;
	int year;
	float total_marks;
	void input();
	void print();
}
;
void Student::input()
{
	cout<<"Enter student's name : "<<endl;
	cin>>name;
	cout<<"Enter roll number : "<<endl;
	cin>>roll_no;
	cout<<"Enter class : "<<endl;
	cin>>clas;
	cout<<"Enter the year of appearing : "<<endl;
	cin>>year;
	cout<<"Enter the marks : "<<endl;
	cin>>total_marks;
	cout<<endl;
}
void Student::print()
{
	cout<<"Roll number :  "<<roll_no;
	cout<<"Student's name :  "<<name;
	cout<<"Marks :  "<<total_marks;
}
int main()
{
	ifstream f;
	Student s[10];
	f.open("Marks.txt");
	for(int i=0;i<3;i++)
	{
	f.read((char*)&s[i],sizeof(s[i]));
	s[i].print();
	}	
	f.close();
	return 0;
}
