#include<iostream>
using namespace std;

class Test
{
	private:
		int n;
	public:
		void setValue( int x) const
		{
			n = x; // But this will give an error because n can't be modified in a const function
			cout<<"N :"<<n<<endl;
		}
};

int main()
{
	const Test T;
	T.setValue(30);
	
	return 0;
}

//This program will give compile time error, Because we can't change the value of const class
