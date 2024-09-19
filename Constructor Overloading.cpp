#include<iostream>
using namespace std;

class Test
{
	public:
		Test()
		{
			cout<<"Constructor is called..."<<endl;
		}
		Test(int n)
		{
			num = n;
			cout<<"The value of number is: "<<num<<endl;
		}
		Test(float a, int n)
		{
			avg = a;
			num = n;
			cout<<"Avg : "<<avg<<endl;
			cout<<"Num : "<<num<<endl;
		}
		Test(int n, float a)
		{
			num = n;
			avg = a;
			cout<<"Num : "<<num<<endl;
			cout<<"Avg : "<<avg<<endl;
		}
	private:
		int num;
		float avg;
};

int main()
{
	Test T1, T2(10), T3(7.9, 15), T4(27, 18.89);
	
	return 0;
}
