//class Triangle with overloaded assignment and equality operator
#include<iostream>
#include<cmath>
using namespace std;
	class Triangle
	{
		float sideA;
		float sideB;
		float sideC;
		float area;
		void Area();
		public:
		Triangle()
		{
			sideA=0.0;
			sideB=0.0;
			sideC=0.0;
		}
		Triangle(float A,float B,float C);
		void input();
		void print() const;
		Triangle operator=(const Triangle &t);
		bool operator==(const Triangle &t);	
	};
	
Triangle::Triangle(float A,float B,float C)
{
	if((A+B<=C)||(B+C<=A)||(A+C<=B))
	{
	cout<<"Triangle does not exist";
	exit(0);
	}
	sideA=A;
	sideB=B;
	sideC=C;
	Area();
}
void Triangle::input()
{
	cout<<"Enter value for side A : ";
	cin>>sideA;
	cout<<"Enter value for side B : ";
	cin>>sideB;
	cout<<"Enter value for side C : ";
	cin>>sideC;
	*this=Triangle(sideA,sideB,sideC);
}
void Triangle::print() const
{
	cout<<"Side A : "<<sideA<<endl;
	cout<<"Side B : "<<sideB<<endl;
	cout<<"Side C : "<<sideC<<endl;
	cout<<"Area   : "<<area<<endl;
}
void Triangle::Area() 
{
	float s=(sideA+sideB+sideC)/2;
	area=s*(s-sideA)*(s-sideB)*(s-sideC);
	area=sqrt(area);	
}
Triangle Triangle::operator=(const Triangle &t)
{
	sideA=t.sideA;
	sideB=t.sideB;
	sideC=t.sideC;
	area=t.area;
	return *this;
}
bool Triangle::operator==(const Triangle &t)
{
	if((sideA=t.sideA)&&(sideB=t.sideB)&&(sideC=t.sideC))
	return 1;
	else 
	return 0;
}

int main()
{
	Triangle tri1(3,4,5);
	cout<<"Triangle tri1 with parametrised constructor.\n";
	tri1.print();

	Triangle tri2,tri3;
	cout<<"Enter the values for triangle tri2:\n";
	tri2.input();
	cout<<"Triangle tri2 : \n";
	tri2.print();

	cout<<"Assigning tri3=tri2\n";
	tri3=tri2;
	cout<<"Triangle tri3 : \n";
	tri3.print();

	cout<<"Checking equality of tri2 and tri3\n";
	if(tri2==tri3)
	cout<<"Triangles tri2 and tri3 are equal.\n";
	else
	cout<<"Triangles tri2 and tri3 are not equal.\n";
	return 0;
}
