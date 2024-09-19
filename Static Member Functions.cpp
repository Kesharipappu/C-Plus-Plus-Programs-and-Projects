#include<iostream>
using namespace std;

class Counter
{
	public:
		static void show()
		{
			cout<<"I am Static member function"<<endl;
		}
		
		static void display()
		{
			cout<<"Welcome to the world of Object Oriented Programming";
		}
};

int main()
{
	Counter::show(); //To access static funtion there is no need of object of class. It can be accessed by->  ClassName::staticFunctionName();
	
	Counter::display();
	
	return 0;
}
