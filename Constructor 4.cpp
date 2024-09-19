#include<iostream>
using namespace std;

class Test
{
	private:
		int n, x, y;
	public:
		Test(): n(10), x(20), y(30)
		{
			cout<<"Constructor is called..."<<endl;
		}
		void display()
		{
			cout<<"n: "<<n<<endl;
			cout<<"n: "<<x<<endl;
			cout<<"n: "<<y<<endl;

		}
};

int main()
{
	Test T;
	T.display();
	
	return 0;
}
