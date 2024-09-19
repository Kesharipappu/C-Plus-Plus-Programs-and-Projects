#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	private:
		int bookID;	
		std::string bookName;
		float price;
	public:
		void inputData()
		{
			static int count = 0;
			cout<<"<-----------Enter Data of Book "<<count+1<<"----------->"<<endl;
			count++;
			cout<<"Enter Book ID : ";
			cin>>bookID;
			std::cin.get();
			std::cout<<"Enter Book Name : ";
			getline(std::cin, bookName);
			cout<<"Enter Book Price : ";
			cin>>price;
		}
		void show()
		{
			cout<<"\nBook ID : "<<bookID;
			cout<<"\nBook Name : "<<bookName;
			cout<<"\nBook Price : "<<price;
		}
};

class Writer
{
	private:
		Book objB[5];
		std::string wName, wAddress;
	public:
			void inputData()
			{
				cout<<"Enter Writer Name : ";
				getline(std::cin, wName);
				cout<<"Enter Writer Address : ";
				getline(std::cin, wAddress);
				for(int i = 0; i < 5; i++)
				{
					objB[i].inputData();
				}
			}
			void show()
			{
				cout<<"<-----------Output----------->"<<endl;
				cout<<"Writer Name : "<<wName<<endl;
				cout<<"Writer Address : "<<wAddress<<endl;
				for(int i = 0; i < 5; i++)
				{
					objB[i].show();
				}
			}
};

int main()
{
	Writer objW;
	objW.inputData();
	objW.show();
	
	return 0;
}
