#include<iostream>
#include<string>
using namespace std;

//Abstract class
class Employee
{
	protected:
		int empId;
		string name;
	public:
		//concrete method
		void inputBasicInfo()
		{
			cout<<"Enter Employee ID :";
			cin>>empId;
			cout<<"Enter Employee Name : ";
			cin.ignore(); //If user try to enter anything after name then it will ignore that
			getline(cin, name);	
		}
		void displayBasicInfo() const
		{
			cout<<"<-----Employee Basic Information----->"<<endl;	
			cout<<"Employee ID : "<<empId<<endl;
			cout<<"Employee Name : "<<name<<endl;
		}	
		//pure virtual function
		virtual void inputInfo() = 0;
		virtual void calculateSalary() const = 0;
};

class visitingEmp : public Employee
{
	private:
		int numberofDays;
		float dailyWages;
	public:
		void inputInfo()
		{
			cout<<"Enter Daily Wages : ";
			cin>>dailyWages;
			cout<<"Enter Number of Days : ";
			cin>>numberofDays;	
		}	
		void calculateSalary() const
		{
			float salary = dailyWages * numberofDays;
			cout<<"Salary is : "<<salary<<endl;
		}
};

class permanentEmployee : public Employee
{
	private:
		int monthlySalary;
	public:
		void inputInfo()
		{
			cout<<"Enter Monthly Salary : ";
			cin>>monthlySalary;
		}
		void calculateSalary() const
		{
			cout<<"Salary : "<<monthlySalary<<" Per Month"<<endl;
		}
};

int main()
{
	Employee *Emp;
	int choice;
	do
	{
		system("cls");
		cout<<"<-----------Main Menu----------->"<<endl;
		cout<<"1. Create Visiting Employee"<<endl;
		cout<<"2. Create Permanent Employee"<<endl;
		cout<<"0. Exit Program"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				Emp = new visitingEmp;
				break;
			case 2:
				Emp =  new permanentEmployee;
				break;
			case 0:
				cout<<"Exit From Program"<<endl;
				break;
			default:
				cout<<"Invalid Input ! Please Enter Valid Input"<<endl;
				continue;
		}
		if(choice != 0)
		{
			Emp->inputBasicInfo();
			Emp->inputInfo();
			cout<<"\nEmployee Information \n";
			Emp->displayBasicInfo();
			Emp->calculateSalary();
			
			delete Emp;
		}
	}while(choice != 0);
	
	return 0;
}

