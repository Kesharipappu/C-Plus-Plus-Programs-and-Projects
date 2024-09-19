#include<iostream>
using namespace std;

class Student
{
	public:
		void get()
		{
			cout<<"Enter Roll Number: ";
			cin>>rollno;
			cout<<"Enter Name: ";
			cin.ignore();
			cin.getline(name, 40);
			cout<<"Enter Marks: ";
			cin>>marks;
		}
		void show()
		{
			cout<<"The Roll No is: "<<rollno<<endl;
			cout<<"The Name is: "<<name<<endl;
			cout<<"The Marks is: "<<marks<<endl;
		}
		private:
			int rollno, marks;
			char name[40];
};

int main()
{
	Student S1, S2;
	S1.get();
	cout<<"<-----------Student 1 output----------->"<<endl;
	S1.show();
	
	S2 = S1;
	cout<<"<-----------Student 2 output----------->"<<endl;
	S2.show();
	
	return 0;
}
