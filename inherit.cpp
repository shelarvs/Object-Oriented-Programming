#include<iostream>
using namespace std;

class base1
{
	protected:
	char name[50],blood_grp[5];
	int dob;
	public:
	
	base1()
	{
		
	}
};

class base2
{
	protected:
	int height,weight;
};

class base3
{
	protected:
	int insurance_policy_number;
	char address[50];
};

class inherit:public base1,public base2,public base3
{
	
	int tele_number,driving_license_number;
	char delete_re[20];
	
	public:
	int cnt,delete_found;
	inherit()
	{
		cnt=0;
	}
	void accept_i()
	{
		
		cout<<"\nEnter the Name :";
		cin>>name;
		cout<<"\nEnter the Bloog Group :-";	
		cin>>blood_grp;
		cout<<"\nEnter the Date Of Birth :-";
		cin>>dob;
		
		cout<<"\nEnter the Height :";
		cin>>height;
		cout<<"\nEnter the Weight :";
		cin>>weight;
		
		cout<<"Enter the Insurance Policy Number :";
		cin>>insurance_policy_number;
		cout<<"Enter the Contact Address :";
		cin>>address;
		
		cout<<"Enter the Mobile Number :";
		cin>>tele_number;
		cout<<"Enter the Driving License Number :";
		cin>>driving_license_number;
		
		cnt++;
		
	}
	
	void module()
		 {
			 cout<<"Enter the Name :";
			 cin>>delete_re;
			 for(j=0;j<='\0';j++)
			 if(name[j]==delete_re[j])
			 {
				 delete_found=j;
				 break;
			 }
			 
			 else
			 {
				 cout<<"No Records Found!!!";
				 break;
			 }
		 }
	
	void dele()
	{
		cout<<"Enter the Name to Deleted :";
		cin>>delete_re;
		
		for(int j=0;j<='\0';j++)
			 if(name[j]==delete_re[j])
			 {
				 delete_found=j;
				 break;
			 }
			 
			 else
			 {
				 cout<<"No Records Found!!!";
				 break;
			 }
		
	}
	
	void Display()
	{
			
	cout<<name<<"\t"<<blood_grp<<"\t"<<dob<<"\t"<<tele_number<<"\t"<<insurance_policy_number<<"\t"<<address<<"\t"<<driving_license_number<<"\n";
	}
	
};

int main()
{
	int ch,loop=1,i,temp;
	inherit in[30];
	inherit inh;
	do
	{
	cout<<"\n1. Insert\n";
	cout<<"2. Delete\n";
	cout<<"3. Search\n";
	cout<<"4. Edit\n";
	cout<<"5. Display";
	cout<<"6. Exit\n";
	cout<<"\n Enter your Choice :";
	cin>>ch;
		
			switch(ch)
			{
				case 1:
				{
					for(i=0;i<=inh.cnt;i++)
					{
						in[i].accept_i();
					}
				}
				
				case 2:
				{
					for(i=0;i<=inh.cnt;i++)
					{
						in[i].dele();
					}
					temp=inh.delete_found;
					break;
				}
				
				case 3:
				{
					cout<<"\nName\t Blood Group\t Date of Birth\t Mobile no.\t Insurance policy\t Address\t License no.\n";
					cout<<"___________________________________________________________";
					for(i=0;i<=b.cnt;i++)
					{
					in[i].module();
					}
					up=inh.delete_re;
					in[up].Display();
					break;
					
				}
				
				case 4:
				{
					
				}
				
				case 5:
				{
					cout<<"\nName\t Blood Group\t Date of Birth\t Mobile no.\t Insurance policy\t Address\t License no.\n";
					cout<<"______________________________________________________________________";
					for(i=0;i<=inh.cnt;i++)
					{
						in[i].Display();
					}
				}
				case 6:
				{
					loop=-1;
				}
				default:
				cout<<"Enter the correct choice";
			}
	}while(loop==1);
}