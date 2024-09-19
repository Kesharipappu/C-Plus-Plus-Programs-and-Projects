#include<iostream>
using namespace std;

class Parent
{
	public:
		void show()
		{
			cout<<"This is Parent class Show Method"<<endl;	
		}	
};

class Child : public Parent
{
	public:
		void show()
		{
//			Parent::show(); // We can access from here also
			cout<<"This is Child class Show Method"<<endl;
		}	
};

int main()
{
	Child obj;
	obj.show(); //It will call show function of Child
	
	obj.Parent::show(); //It will call show function of Parent
	
	return 0;
}
