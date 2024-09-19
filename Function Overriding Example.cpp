#include<iostream>
using namespace std;

class Parent
{
	public:
		void test(int n)
		{
			cout<<"I am in Parent class..."<<n<<endl;
		}
};

class Child : public Parent
{
	public:
		void test(int n)
		{
			cout<<"I am in Child class..."<<n<<endl;	
		}	
};

int main()
{
	Child obj1;
	
	obj1.test(10); //It will call function of child class
	
	obj1.Parent::test(20); //It will call function of parent class
	
	return 0;
	
}
