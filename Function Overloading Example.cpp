#include<iostream>
using namespace std;

void test()
{
	cout<<"I am in test function..."<<endl;
}

void test(int n)
{
	cout<<"Number is : "<<n<<endl;
}

void test(double n)
{
	cout<<"Float Number is :"<<n<<endl;
}

void test(int n, double m)
{
	cout<<"Integer Number is : "<<n<<"\nFloat Number is : "<<m<<endl;
}

void test(double m, int n)
{
	cout<<"Float Number is : "<<m<<"\nInteger Number is : "<<n;
}

int main()
{
	test();
	test(20);
	test(12.45);
	test(34, 18.54);
	test(87.54, 56);
	
	return 0;
}
