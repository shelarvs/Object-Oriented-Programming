#include<iostream>
using namespace std;

class Exception 
{
public:
	double num1,num2,answer;
public:
	void accept()
	{
	cout<<"\n Enter The First Number : ";
	cin>>num1;
	cout<<"\n Enter The second Number : ";
	cin>>num2;
	}
	
	void divide()
	{
	try
	{
		if(num2==0)
		{
			throw(num2);
		}
		
		else
		{
			answer=num1/num2;
			cout<<"\n The division of two numbers is : "<<answer;
		}
	}
	catch(double e)
	{
		cout<<"\n DIVIDE BY ZERO.....!!!!! :"<<e;
	}
	}
};

int main()
{
	Exception ex;
	ex.accept();
	ex.divide();
}
