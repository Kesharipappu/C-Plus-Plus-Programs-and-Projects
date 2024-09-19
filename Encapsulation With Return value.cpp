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
		int getRollNo()
		{
			return rollNo;
		}
		void setName(const char n[])
		{
			strcpy(name, n);
		}
		string getName()
		{
			return name;
		}		
};

int main()
{
	Student pappu;
	
	pappu.setRollNo(10);
	pappu.setName("Pappu Kumar Keshari");
	
	cout<<"The Roll Number is : "<<pappu.getRollNo()<<endl;
	cout<<"The Name is :"<<pappu.getName()<<endl;
	
	return 0;
}
