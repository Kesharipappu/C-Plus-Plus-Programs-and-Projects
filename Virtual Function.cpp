#include<iostream>
using namespace std;

class Person
{
	public:
		virtual void show()
		{
			cout<<"This is Person Show Method..."<<endl;	
		}	
};

class Employee : public Person
{
	public:
		void show()
		{
			cout<<"This is Employee Show Method..."<<endl;	
		}	
};

class Programmer : public Employee
{
	public:
		void show()
		{
			cout<<"This is Programmer Show Method..."<<endl;
		}	
};

int main()
{
	Person objPer;
	Employee objEmp;
	Programmer objPro;
	
	Person *ptr;
	
	ptr = &objPer;
	ptr->show();
	
	ptr = &objEmp;
	ptr->show();
	
	ptr = &objPro;
	ptr->show();
	
	
	return 0;
}
