#include<iostream>
using namespace std;

class Test
{
	private:
		const int n = 10;
	public:
//		Test() : n(0) // We can initialize inside constructor
//		{
//			
//		}
		void setValue(int x)
		{
//			n = x;	 // We can't change the value of n, because n is declared as const
			cout<<"N : "<<n<<endl;
		}	
};

int main()
{
	Test T;
	T.setValue(30);
}
