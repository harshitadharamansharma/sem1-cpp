#include<iostream>
using namespace std;

class Box
{
	float length;
	float breadth;
	float height;
	public:
	Box()
	{
		length=0;
		breadth=0;
		height=0;		
	}
	void input();
	void output() const;
	void calcarea();
	void calcvolume();
	Box operator++();			//prefix increment 
	Box operator--();			//prefix decrement
	Box operator++(int);		//postfix increment 
	Box operator--(int);		//postfix decrement
	void operator=(const Box &b);
	bool check_cube_cuboid();
	friend bool operator==(const Box &a,const Box &b);
};

void Box::input()
{
	cout<<"Enter the length  :  ";
	cin>>length;
	cout<<"Enter the breadth :  ";
	cin>>breadth;
	cout<<"Enter the height  :  ";
	cin>>height;
}

void Box::output() const
{	
	cout<<"Length  :  "<<length<<endl;
	cout<<"Breadth :  "<<breadth<<endl;
	cout<<"Height  :  "<<height<<endl;	
}

void Box::calcvolume()
{
	float vol;
	vol=(length*breadth*height);
	cout<<"Volume of box : "<<vol<<endl;
}

void Box::calcarea()
{
	float area=(2*((length*breadth)+(breadth*height)+(height*length)));
	cout<<"Surface area of box : "<<area<<endl;
}

Box Box::operator++()		//prefix increment
{
	length+=1;
	breadth+=1;
	height+=1;
	return (*this);
}

Box Box::operator++(int x)		//postfix increment
{
	Box c(*this);
	length+=1;
	breadth+=1;
	height+=1;
	return c;
}

Box Box::operator--()		//prefix decrement
{
	length-=1;
	breadth-=1;
	height-=1;
	return (*this);
}

Box Box::operator--(int x)		//postfix decrement
{
	Box c(*this);
	length-=1;
	breadth-=1;
	height-=1;
	return c;
}

bool operator==(const Box &a,const Box &b)
{
	if(a.length==b.length&&a.breadth==b.breadth&&a.height==b.height)
	return 1;
	else 
	return 0;
}

void Box::operator=(const Box &b)
{
	length=b.length;
	breadth=b.breadth;
	height=b.height;
}

bool Box::check_cube_cuboid()
{
if(length==breadth&&breadth==height)
	return 1;
else 
	return 0;	
}


int main()
{
	Box b1,b2;
	cout<<"Enter dimensions for Box b1 - "<<endl;	
	b1.input();
	cout<<"Values of Box b1 - "<<endl;
	b1.output();
	b1.calcvolume();
	b1.calcarea();
	cout<<endl;

	cout<<"++b1 "<<endl;
	++b1;
	cout<<"Values of Box b1 (after ++b1) - "<<endl;
	b1.output();

	cout<<endl<<"b2=b1++ "<<endl;
	b2=b1++;
	cout<<"Values of Box b2 (after b2=b1++ ) - "<<endl;
	b2.output();	
	cout<<"Values of Box b1 (after b2=b1++ ) - "<<endl;
	b1.output();
	
	--b1;
	cout<<"\n--b1\n";
	cout<<"Values of Box b1 (after --b1) - "<<endl;
	b1.output();

	cout<<endl<<"b2=--b1 "<<endl;
	b2=b1--;
	cout<<"Values of Box b2 (after b2=b1-- ) - "<<endl;
	b2.output();	
	cout<<"Values of Box b1 (after b2=b1-- ) - "<<endl;
	b1.output();

	Box b3;
	b3=b1;
	cout<<"Dimensions of Box b3 (after b3=b1) - "<<endl;
	b3.output();
	
	if(b3==b1)
	cout<<"Boxes b1 and b3 are equal. "<<endl;
	else
	cout<<"Boxes b1 and b3 are not equal. "<<endl;

	Box b4;
	cout<<"Enter dimensions for Box b4 - "<<endl;	
	b4.input();
	cout<<"Values of Box b4 - "<<endl;
	b4.output();

	if(b4.check_cube_cuboid())
	cout<<"Box b4 is cube."<<endl;
	else 
	cout<<"Box b4 is cuboid.";
	return 0;
}
