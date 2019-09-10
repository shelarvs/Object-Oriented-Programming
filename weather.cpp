#include<iostream>
using namespace std;

class weather
{

	int i,day_of_month[30],day,hightemp,lowtemp,amount_rain,amount_snow,cnt,average_high,average_low,average_rain,average_snow;
	public:
	weather()
	{
		cnt=0;
		day=0;
		average_high=0;
		average_low=0;
		average_rain=0;
		average_snow=0;
	}
		
		
	void insert()
	{
		cout<<"\nEnter the High Temperature :";
		cin>>hightemp;
		
		cout<<"\nEnter the Low Temperature :";
		cin>>lowtemp;
		
		cout<<"\nEnter the Amount of Rain Fall :";
		cin>>amount_rain;
		
		cout<<"\nEnter the Amount of Snow Fall :";
		cin>>amount_snow;
		cnt++;
		day_of_month[day]=cnt;
		day++;	
	}
	void avg()
	{
	average_rain=average_rain+amount_rain;
	average_rain=average_rain/cnt;
	
	average_low=average_low+lowtemp;
	average_low=average_low/cnt;
	
	average_high=average_high+hightemp;
	average_high=average_high/cnt;
	
	average_snow=average_snow+amount_snow;
	average_snow=average_snow/cnt;
	
	cout<<"Average High :"<<average_high;
	cout<<"Average Low :"<<average_low;
	cout<<"Average Rain :"<<average_rain;
	cout<<"Average Snow :"<<average_snow;
	}

	void display()
	{
		cout<<"Day\t"<<"Low Temperature\t"<<"High Temperature\t"<<"Rainfall\t"<<"Snowfall\n";
		cout<<day_of_month[day];
	    day++;
		cout<<hightemp<<lowtemp<<amount_rain<<amount_snow;
	}
	
	int main()
	{
		int ch,loop=1;
		weather w[30];
		
		do{
		cout<<"\n1. Insert\n"<<"2. Calculate Average\n"<<"3. Display\n"<<"4. Exit\n";
		cout<<"\nEnter Your Choice :";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
			{
				for(i=0;i<=cnt;i++)
				{
					w[i].insert();
				}
				break;
			}
			
			case 2:
			{
				for(i=0;i<=cnt;i++)
				{
					w[i].avg();
				}
				break;
			}
			
			case 3:
			{
				for(i=0;i<=cnt;i++)
				{
					w[i].display();
				}
				break;
			}
			
			case 4:
			{
				loop=-1;
				break;
			}
			
		}
		}while(loop==1);
	}
};