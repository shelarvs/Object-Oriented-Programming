#include<iostream>
 using namespace std;
 
 class book_shop
 {
	 char title[20],author[20],publisher[20],update_search[20];
	 int price,stock_available;
	
	 public:
	 book_shop()
	 {
		 cnt=0;
		 stock_available=0;
		 S_Transaction=0;
		 Un_Transaction=0;
	 }
	  int cnt,j,update_search_found,Quantity,S_Transaction,Un_Transaction;
		 void add()
		 {
			 cout<<"Title :";
			 cin>>title;
			 
			 cout<<"Author :";
			 cin>>author;
			 
			 cout<<"Publisher :";
			 cin>>publisher;
			 
			 cout<<"Price :";
			 cin>>price;
			 
			 cout<<"Quantity :";
			 cin>>stock_available;
			 
			 cnt++;
		 }
		 
		 void module()
		 {
			 cout<<"Enter the Title of Book :";
			 cin>>update_search;
			 for(j=0;j<='\0';j++)
			 if(title[j]==update_search[j])
			 {
				 update_search_found=j;
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
			 cout<<"\nTitle\t"<<"Author\t"<<"publisher\t"<<"Price\t"<<"Stock\n";
			 cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<stock_available<<"\n";
		 }
		 
		 void purchase()
		 {
			if(stock_available==0)
			{
				cout<<"Book is Out Of Stock\n";
				Un_Transaction++;
				cout<<"Transaction Unsuccessful\n";
			}
			else
			{
				cout<<"Enter the Quantity :";
				cin>>Quantity;
				stock_available=stock_available-Quantity;
				S_Transaction++;
				
				cout<<"Transaction Successful, Thank you\n";
			}	
		 }
 };
 
 int main()
 {
	 int ch,i,up,loop=1;
	 book_shop bk[50];
	 book_shop b;
	 do{
	cout<<"\n1. Add\n"<<"2. Update\n"<<"3. Search a book\n"<<"4. Purchase\n"<<"5. Transactions\n"<<"6. Exit\n";
	cout<<"\nEnter Your Choice :";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		{
			bk[b.cnt].add();
			
			break;
		}
		
		case 2:
		{
			for(i=0;i<=b.cnt;i++)
			{
				bk[i].module();
			}
			up=b.update_search_found;
			bk[up].add();
			break;
		}
		
		case 3:
		{
			for(i=0;i<=b.cnt;i++)
			{
				bk[i].module();
			}
			up=b.update_search_found;
			bk[up].Display();
			break;
		}
		
		case 4:
		{
			for(i=0;i<=b.cnt;i++)
			{
				bk[i].module();
			}
			up=b.update_search_found;
			bk[up].purchase();
			break;
		}
		
		case 5:
		{
			cout<<"\nSuccessful Transactions :"<<b.S_Transaction;
			cout<<"\nUnsuccessful Transactions :"<<b.Un_Transaction;
			break;
		}
		
		case 6:
		{
			loop=-1;
				break;
		}
		default:
		cout<<"\nEnter the Correct Choice";
	}
 }while(loop==1);
 }