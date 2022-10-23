/*class Person - BASE CLASS
  class Teacher and Student - DERIVED CLASS 
  using Runtime Polymorphism  
*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
	string name;
	int age;
	char sex;
	string city;
	string address;
	public:
		virtual	void getdata();
		virtual	void print();
};
void Person::getdata()
{
	cout<<"\nEnter Name        : ";
	getline(cin,name);
	cout<<"Enter Age         : ";
	cin>>age;
	cin.ignore();
	cout<<"Enter Sex(M/F)    : ";
	cin>>sex;
	cin.ignore();
	cout<<"Enter City        : ";
	getline(cin,city);
	cout<<"Enter Address     : ";
	getline(cin,address);
}
void Person::print()
{
	cout<<"\nName        : "<<name;
	cout<<"\nAge         : "<<age;
	cout<<"\nSex         : "<<sex;
	cout<<"\nCity        : "<<city;
	cout<<"\nAddress     : "<<address;
	cout<<endl;
}

class Teacher:public Person
{
	string clg;
	string subj;
	string dept;
	public:
		virtual	void getdata();
		virtual	void print();
};
void Teacher::getdata()
{
	Person::getdata();
	cout<<"Enter College Name: ";
	getline(cin,clg);
	cout<<"Enter Department  : ";
	getline(cin,dept);
	cout<<"Enter Subject     : ";
	getline(cin,subj);
}
void Teacher::print()
{
	Person::print();
	cout<<"\nCollege     : "<<clg;
	cout<<"\nDepartment  : "<<dept;
	cout<<"\nSubject     : "<<subj;
	cout<<endl;
}

class Student:public Person
{
	string course;
	int year;
	float marks;
	public:
		virtual	void getdata();
		virtual	void print();
};
void Student::getdata()
{
	Person::getdata();
	cout<<"Enter course :";
	getline(cin,course);
	cout<<"Enter year   :";
	cin>>year;
	cout<<"Enter marks  :";
	cin>>marks;
}
void Student::print()
{
	Person::print();
	cout<<"\nCourse		: "<<course;
	cout<<"\nYear		: "<<year;
	cout<<"\nMarks		: "<<marks;
	cout<<endl;
}

int main()
{
	Person *pers=new Person;
	cout<<"\n\t\tPerson Object: \n\n";
 	pers->getdata();
 	pers->print();
 	delete pers;
 	
 	pers=new Teacher;
 	cout<<"\n\t\tTeacher Object: \n\n";
	pers->getdata();
 	pers->print();
 	delete pers;
 	
 	pers=new Student;
 	cout<<"\n\t\tStudent Object: \n\n";
 	pers->getdata();
 	pers->print();
 	delete pers;

 	return 0;	
}
