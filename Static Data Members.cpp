#include<iostream>
using namespace std;

class Counter
{
	private:
		static int count;
	public:
		Counter()
		{
			count++;
		}
		void showCount()
		{
			cout<<"You created "<<count<<" Object of this class"<<endl;
		}
};

int Counter :: count = 0;  //Steps to initialize static variable -> Datatype ClassName :: variablename = 0

int main()
{
	Counter obj1, obj2, obj3, obj4, obj5;
	obj1.showCount();
	
	Counter a, b, c, d;
	a.showCount();
	
	return 0;
}
