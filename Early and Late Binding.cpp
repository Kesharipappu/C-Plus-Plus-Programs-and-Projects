#include<iostream>
using namespace std;

class Person
{
	public:
		virtual void show()
		{
			cout<<"This is Person class Method..."<<endl;	
		}	
};

class Employee : public Person
{
	public:
		void show()
		{
			cout<<"This is Employee class Method..."<<endl;	
		}	
};

class Teacher : public Employee
{
	public:
		void show()	
		{
			cout<<"This is Teacher class Method..."<<endl;
		}
};

int main()
{
	int len;
	cout<<"How Many object do you want to create..."<<endl;
	cin>>len;
	
	Person *ptr[len];
	int op, i;
	cout<<"Enter Choice\n1->Person Class \n2->Employee Class\n3->Teacher Class"<<endl;
	for(i = 0; i < len; i++)
	{
		cout<<"Which class object you want to create : ";
		cin>>op;	
		if(op == 1)
			ptr[i] = new Person;
		else if(op == 2)
			ptr[i] = new Employee;
		else
			ptr[i] = new Teacher;
	}
	cout<<"<----------------------------------->"<<endl;
	for(i = 0; i < len; i++)
		ptr[i]->show();
			
	return 0;
}
