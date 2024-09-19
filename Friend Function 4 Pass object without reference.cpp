#include<iostream>
using namespace std;

class B;  //Forward declaration
class A
{
	private:
		int num1;
	public:
		friend void getValue(A ,B);
		friend void Add(A, B);	
};

class B
{
	private:
		int num2;
	public:
		friend void getValue(A, B);
		friend void Add(A, B);	
};

void getValue(A obj1, B obj2)
{
	cout<<"Enter First Number : ";
	cin>>obj1.num1;
	cout<<"Enter Second Number:  ";
	cin>>obj2.num2;
	
	Add(obj1, obj2); //When not calling from main function
}

void Add(A obj1, B obj2)
{
	cout<<"The result is : "<<obj1.num1+obj2.num2<<endl;
}

int main()
{
	A obj1;
	B obj2;
	
	getValue(obj1, obj2);
	
	return 0;
}
