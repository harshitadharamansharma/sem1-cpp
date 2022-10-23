//structure Student containing Roll No,Name,Class,Year,Total Marks
//and store them in a file
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
};
void Student::input()
{
	cout<<"Enter student's name : ";
	cin>>name;
	cout<<"Enter roll number : ";
	cin>>roll_no;
	cout<<"Enter class : ";
	cin>>clas;
	cout<<"Enter the year of appearing : ";
	cin>>year;
	cout<<"Enter the marks : ";
	cin>>total_marks;
	cout<<endl;
}
void Student::print()
{
	cout<<"Student's name	:"<<name<<endl;
	cout<<"Roll number		:"<<roll_no<<endl;
	cout<<"Class			:"<<clas<<endl;
	cout<<"Year				:"<<year<<endl;
	cout<<"Marks			:"<<total_marks<<endl;
	cout<<endl;
}
int main()
{
	Student stu[10];
	ofstream ofile;
	ofile.open("Marks.txt");
	for(int i=0;i<3;i++)
	{	
	stu[i].input();
	ofile.write((char*)&stu[i],sizeof(stu[i]));
	}
	ofile.close();
	ifstream f;
	f.open("Marks.txt");
	for(int i=0;i<3;i++)
	{
	f.read((char*)&stu[i],sizeof(stu[i]));
	stu[i].print();
	}	
	f.close();
	return 0;
}
