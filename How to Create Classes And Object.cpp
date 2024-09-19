#include<iostream>
using namespace std;

class Test
{
	private:
		int n = 10;
	public:
		void show()
		{
			cout<<"The value of n: "<<n<<endl;
		}
};

int main()
{
	Test T, T1; //Declaring object
	T.show();
	T1.show();
	
	return 0;
}
