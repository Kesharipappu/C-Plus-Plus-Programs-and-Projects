#include<iostream>
using namespace std;

class student
{
	public:
		void display(int);
};

void student :: display(int rollno)
{
	cout<<"The roll number is: "<<rollno<<endl;
}

int main()
{
	student s;
	int rno;
	cout<<"Enter Roll number:"<<endl;
	cin>>rno;
	s.display(rno);
	
	return 0;
}
