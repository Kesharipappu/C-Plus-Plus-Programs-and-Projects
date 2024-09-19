#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int rollNo;
		char name[20];
	public:
		void setRollNo(int rno)
		{
			rollNo = rno;
		}
		void getRollNo()
		{
			cout<<"The Roll Number is : "<<rollNo<<endl;
		}
		void setName(const char n[])
		{
			strcpy(name, n);
		}
		void getName()
		{
			cout<<"The Name is : "<<name<<endl;
		}		
};

int main()
{
	Student pappu;
	pappu.setRollNo(10);
	pappu.setName("Pappu Kumar Keshari");
	pappu.getRollNo();
	pappu.getName();
	
	return 0;
}
