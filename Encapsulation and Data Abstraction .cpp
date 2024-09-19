#include<iostream>
using namespace std;

class Student
{
	private:
		int rollNo;
	public:
		void setRollNo(int rno)
		{
			rollNo = rno;	
		}
		int getRollNo()
		{
			return rollNo;	
		}	
};

int main()
{
	Student obj1;
	obj1.setRollNo(12);
	cout<<"Roll Number is : "<<obj1.getRollNo();
	
	return 0;
}
