#include<iostream>
using namespace std;

class Person
{
	private:
		char name[50], gender[10];
		int age;
	public:
		void getValue()
		{
			cout<<"Enter Name : ";
			cin.getline(name, 50);
			cout<<"Enter Age : ";
			cin>>age;
			cout<<"Enter Gender : ";
			cin>>gender;
		}
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			cout<<"Gender : "<<gender<<endl;
		}
	
};

class Employee : public Person
{
	private:
		float salary;
	public:
		void getValue()
		{
			Person::getValue();
			cout<<"Enter Salary : ";
			cin>>salary;				
		}
		void display()
		{
			Person::display();
			cout<<"Salary : "<<salary<<endl;	
		}	
};

class Programar : public Employee
{
	private:
		int num;
	public:
		void getValue()
		{
			Employee::getValue();
			cout<<"How many Languages you know ? ";
			cin>>num;
		}	
		void display()
		{
			Employee::display();
			cout<<"You know "<<num<<" Languages"<<endl;
		}
};

int main()
{
	Programar obj;
	cout<<"Please Enter Following Details"<<endl;
	obj.getValue();
	cout<<"--------------------------------------------"<<endl;
	cout<<"             Displaying Data                "<<endl;
	cout<<"--------------------------------------------"<<endl;
	obj.display();
	
	return 0;
}
