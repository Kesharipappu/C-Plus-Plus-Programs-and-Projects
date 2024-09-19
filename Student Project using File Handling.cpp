#include<iostream>
#include<fstream>
using namespace std;

class Student
{
	private:
		int rollNumber;
		char name[20];
	public:
		void inputData()
		{
			cout<<"\n\t\tEnter Roll Number : ";
			cin>>rollNumber;
			cout<<"\n\t\tEnter Name : ";
			cin.ignore(); //If there will be any value in buffer then it will ignore that value
			cin>>name;	
		}	
		void report() const
		{
			cout<<"\n\t\tRoll Number : "<<rollNumber<<" Name : "<<name<<endl;
		}
};
void writeRecord();
void displayAll();

int main()
{
	char option;
	do
	{
		system("cls");
		cout<<"\n\n\t\t1. Input Student Records "<<endl;
		cout<<"\n\t\t2. Show Student Records "<<endl;
		cout<<"\n\t\t3. Exit"<<endl;
		cout<<"\n\t\tEnter Your Choice [1-3] : ";
		cin>>option;
		switch(option)
		{
			case '1':
				writeRecord();
				break;
			case '2':
				cout<<"\n\t\t<--------All Student's Record-------->"<<endl;
				displayAll();
				break;
			case '3':
				system("cls");
				cout<<"\n\t\t Code is Written By Pappu Kumar Keshari"<<endl;
				break;
			default:
				cout<<"\n\t\tInvalid Input";
		}
		cin.ignore();
		cin.get();
	}while(option != 3);
	
	return 0;
}

void writeRecord()
{
	Student stu;
	ofstream outFile("student.dat",ios::binary | ios::app);
	stu.inputData();
	outFile.write(reinterpret_cast<char *>(&stu),sizeof(Student));
	outFile.close();
	
}

void displayAll()
{
	Student stu;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	while(inFile.read(reinterpret_cast<char *> (&stu),sizeof(Student)))
	{
		stu.report();
	}
	inFile.close();
}
