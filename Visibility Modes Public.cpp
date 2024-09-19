#include<iostream>
using namespace std;

class Parent
{
	private:
		
	protected:
		int n1;
		int n2;
	public:
		void show()
		{
			cout<<"The value of N1 : "<<n1<<endl;
			cout<<"The value of N2 : "<<n2<<endl;
		}	
};

class Child : public Parent
{
	public:
		void input()
		{
			cout<<"Enter First value : ";
			cin>>n1;
			cout<<"Enter Second value : ";
			cin>>n2;
		}	
};

int main()
{
	Child obj1;
	obj1.input();
	obj1.show();  //We can accesss show function from outside the class because we publicly inheritrd Parent class
	
	return 0;
}
