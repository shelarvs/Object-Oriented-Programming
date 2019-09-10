#include<iostream>
using namespace std;
class shape
{
public:
	double value1,value2;
	virtual void accept()=0;
	virtual void area()=0;
};

class triangle : public shape
{
public:

	void accept()
	{
	cout<<"\nEnter the Base value :";
	cin>>value1;
	
	cout<<"Enter the Height value :";
	cin>>value2;
	}
	void area()
	{
	double triangle_area=0.5*value1*value2;
	cout<<"Area of Triangle "<<triangle_area;
	}

};

class rectangle : public shape
{
public :

	void accept()
	{
	cout<<"Enter the Length :";
	cin>>value1;
	
	cout<<"Enter the Breadth :";
	cin>>value2;
	}
	void area()
	{
	double rectangle_area=2*value1*value2;
	cout<<"Area of Rectangle "<<rectangle_area;
	}
};

int main()
{
	int ch,loop=1;
	shape *ptr;
	triangle T;
	rectangle R;
	do
	{
	cout<<"\n 1. Area of triangle \n 2. Area of rectangle \n 3. Exit\n";
	cout<<"\n Enter your choice :";
	cin>>ch;

		switch(ch)
		{
		case 1:
		{
		ptr=&T;
		ptr->accept();
		ptr->area();
		break;
		}
		
		case 2:
		{
		ptr=&R; 
		ptr->accept();
		ptr->area();
		break;
		}
		
		case 3:
		{
		loop=-1;
		}
				default:
				cout<<"\nEnter the correct choice\n";
		}
	}while(loop==1);
}