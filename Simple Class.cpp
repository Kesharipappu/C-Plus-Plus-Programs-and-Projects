#include<iostream>
using namespace std;

class Student
{
	private:
		int rollNo;
	public:
		void inputData()
		{
			cout<<"Enter Roll Number : ";
			cin>>rollNo;	
		}	
		void display()
		{
			cout<<"Your Roll Number is : "<<rollNo<<endl;
		}
};

int main()
{
	Student pappu, ranjeet;
	
	pappu.inputData();
	pappu.display();
	
	ranjeet.inputData();
	ranjeet.display();
	
	
	return 0;
}
