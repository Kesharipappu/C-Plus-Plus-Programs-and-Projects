#include<iostream>
using namespace std;

class student
{
	private:
		int rollNo = 10;
	public:
		void display()
		{
			cout<<"The roll number is: "<<rollNo<<endl;
		}
};

int main()
{
	student s;
	s.display();
	
	return 0;
}
