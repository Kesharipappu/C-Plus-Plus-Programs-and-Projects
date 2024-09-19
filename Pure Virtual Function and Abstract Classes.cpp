#include<iostream>
using namespace std;

class Person
{
	public:
		virtual void show() = 0; //Pure virtual function	
};

class Employee : public Person
{
	public:
		void show()
		{
			cout<<"This is Employee class Method...."<<endl;	
		}	
};

class Teacher : public Employee
{
	public:
		void show()
		{
			cout<<"This is Teacher cflass Method...."<<endl;	
		}	
};

int main()
{
//	Person obj;  //We can't create object of Person class, because Person in an abstract class. We can't create object of abstract class
	Person *ptr[2]; //We can create pointer of abstract class
	
	ptr[0] = new Employee;
	ptr[1] = new Teacher;
	
	ptr[0]->show();
	ptr[1]->show();
	
	return 0;
}
