#include<iostream>
using namespace std;

class Student
{
	private:
		int rollNo;
	public:
		void input_RollNo()
		{
			cout<<"Enter Roll Number : ";
			cin>>rollNo;	
		}
		void output_RollNo()
		{
			cout<<"Your Roll Number is : "<<rollNo;	
		}	
};

int main()
{
	Student objS;
	objS.input_RollNo();
	objS.output_RollNo();
	
	return 0;
}
