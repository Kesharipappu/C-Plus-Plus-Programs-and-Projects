#include<iostream>
using namespace std;

class student
{
	private:
		int rollno;
		char name[30];
	public:
		void inputData()
		{
			cout<<"Enter roll number"<<endl;
			cin>>rollno;
			cout<<"Enter name"<<endl;
			cin>>name;
		}
		void outputData();
	
};

void student :: outputData()
{
		cout<<"Your Roll number is: "<<rollno<<endl;
		cout<<"Your Name is: "<<name<<endl;
}

int main()
{
	student s;
	cout<<"-----------Input Data----------"<<endl;
	s.inputData();
	
	cout<<"-----------Output Data----------"<<endl;
	s.outputData();

	
	return 0;
}
