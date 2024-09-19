#include<iostream>
using namespace std;

class Test
{
	private:
		int n = 10;
	public:
		void show() const //Member function declared as const
		{
			n++; // It will give compile time error, because member function is declared as const
			cout<<"n :" <<n<<endl;
		}
};

int main()
{
	Test T;
	T.show();
	
	return 0;
}
