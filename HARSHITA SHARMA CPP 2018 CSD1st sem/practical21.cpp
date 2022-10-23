#include<iostream>
using namespace std;
const int r=3,c=3;
template <class T> class matrix
{
	T m[r][c];
	public:
		void get_value()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<"\nM["<<i<<"]["<<j<<"]=";
					cin>>m[i][j];
				}
			}
		}
		void operator+(matrix ob)
		{
			T p[r][c];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					p[i][j]=m[i][j]+ob.m[i][j];
					cout<<" "<<p[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		void operator-(matrix ob)
		{
			T p[r][c];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					p[i][j]=m[i][j]-ob.m[i][j];
					cout<<" "<<p[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		void operator*(matrix ob)
		{
			T p[r][c];
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
				p[i][j]=0;
				for(int k=0;k<c;k++)
				{
					p[i][j]+=(m[i][k]*ob.m[k][j]);
				}
			}
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			cout<<" "<<p[i][j]<<" ";
		cout<<"\n";
		}
		
	}
	    void transpose()
	    {
		T p[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			p[j][i]=m[i][j];
			}
			for(int i=0;i<r;i++)
			{for(int j=0;j<c;j++)
			{cout<<" "<<p[i][j]<<" ";
			}
			cout<<"\n";
			}
		}
	    void display()
	    {
		for(int i=0;i<r;i++)
		{for(int j=0;j<c;j++)
		{
			cout<<" "<<m[i][j]<<" ";
		}
		cout<<"\n";
		}
		cout<<"\n\n";
	    }
	};
	int main()
	{
		matrix <int> m1,m2;
		int ch;
		cout<<"\n enter elements of matrix a\n";
		m1.get_value();
		cout<<"\n enter the elements of matrix b\n";
		m2.get_value();
		while(1)
		{
//			system("cls");
			cout<<"\n......matrix operations.......\n\n";
			cout<<"\n 1. sum";
			cout<<"\n 2.difference";
			cout<<"\n 3. product";
			cout<<"\n 4. transpose";
			cout<<"\n 5. display";
			cout<<"\n 6. exit\n";
			cout<<"\n enter your choice";
			cin>>ch;
			switch(ch)
			{
				case 1:cout<<"\n\n matrices addition\n\n";
				       m1+m2;
				       break;
				case 2:cout<<"\n\n matrices subtraction\n\n";
				       m1-m2;
				       break;
				case 3:cout<<"\n\n matrices product\n\n";
				       m1*m2;
				       break;
				case 4:cout<<"\n\n matrixa \n";
				       m1.display();
				       cout<<"\n\n transposed matrix\n";
				       m1.transpose();
				       cout<<"\n\n matrix b \n";
				       m2.display();
				       cout<<"\n\n transposed matrix\n";
				       m2.transpose();
				       break;
				case 5:cout<<"\n\n matrix a\n";
				       m1.display();
				       cout<<"\n\nmatrix b\n";
				       m2.display();
				       break;
				case 0://exit(0);
					break;
				       default:cout<<"\n\ninvalid choice";       
			}
			//system("pause");
		}
return 0;	
}
