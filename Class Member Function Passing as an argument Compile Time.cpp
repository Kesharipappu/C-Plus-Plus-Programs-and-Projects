#include<iostream>
using namespace std;

class student
{
	public:
		void display(int rollno, string name)
		{
			cout<<"The roll number is: "<<rollno<<endl;
			cout<<"The name is: "<<name<<endl;
		}
};

int main()
{
	student s;
	s.display(1,"Pappu");
	
	return 0;
}
