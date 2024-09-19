#include<iostream>
using namespace std;

class Test
{
	private:
		int n;
	public:
		Test(): n(10)
		{
			cout<<"Constructor is called..."<<endl;
		}
		void display()
		{
			cout<<"Number: "<<n<<endl;
		}
};

int main()
{
	Test T;
	T.display();
	
	return 0;
}
