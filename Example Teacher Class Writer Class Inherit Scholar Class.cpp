#include<iostream>
#include<string.h>
using namespace std;

class Teacher
{
		private:
			std::string tName, tAddress;
			int age;
		public:
			void inputData()
			{
				cout<<"Enter Teacher Name : ";
				getline(std::cin,tName);
				cout<<"Enter Teacher Address : ";
				getline(std::cin,tAddress);
				cout<<"Enter Teacher Age : ";
				cin>>age;
			}
			void display()
			{
				cout<<"<-----------Output----------->"<<endl;
				cout<<"Teacher Name is : "<<tName<<endl;
				cout<<"Teacher Address is : "<<tAddress<<endl;
				cout<<"Teacher Age is : "<<age<<endl;
			}
};

class Writer
{
	private:
		std::string wName, wAddress;
		int noOfBook;
	public:
		void inputData()
		{
			std::cin.get();
			cout<<"Enter Writer Name : ";
			getline(std::cin,wName);
			cout<<"Enter Writer Address : ";
			getline(std::cin,wAddress);	
			cout<<"Enter Number of Books Written : ";
			cin>>noOfBook;
		}	
		void display()
		{
			cout<<"Writer Name is : "<<wName<<endl;
			cout<<"Writer Address is : "<<wAddress<<endl;
			cout<<"Number of Books is : "<<noOfBook<<endl;
		}
};

class Scholar : public Teacher, public Writer
{
	public:
		void inputData()
		{
			Teacher::inputData();
			Writer::inputData();
		}
		void display()
		{
			Teacher::display();
			Writer::display();
		}
};

int main()
{
	Scholar objS;
	objS.inputData();
	objS.display();
	
	return 0;
}
