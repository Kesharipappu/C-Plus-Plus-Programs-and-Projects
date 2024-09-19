#include<iostream>
using namespace std;

class Test
{
	public:
		Test()
		{
			cout<<"Constructor is called..."<<endl;
		}
};

int main()
{
	Test T, X, Y;
	
	return 0;
}
