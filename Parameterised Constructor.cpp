#include<iostream>
using namespace std;

class Test
{
	private:
		int n, x, y;
	public:
		Test()
		{
			cout<<"Constructor is called..."<<endl;
		}
		Test(int num)
		{
			n = num;
		}
		void display()
		{
			cout<<"n: "<<n<<endl;


		}
};

int main()
{
	Test T(100);
	T.display();
	
	return 0;
}
