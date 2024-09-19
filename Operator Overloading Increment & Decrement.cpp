#include<iostream>
using namespace std;

class Test
{
	public:
		Test() : n(0)
		{
			
		}
		void operator ++()
		{
			n++;
		}
		void operator --()
		{
			n--;
		}
		void operator ++(int)
		{
			n++;
		}
		void operator --(int)
		{
			n--;
		}
		void show()
		{
			cout<<"The value of n : "<<n<<endl;
		}
	private:
		int n;
};

int main()
{
	Test obj1;
	++obj1;   //Overloading ++(increment) operator. Pre-increment
	obj1.show();
	
	--obj1;   //Overloading --(decrement) operator. Pre-decrement
	obj1.show();
	
	obj1++;  //Overloading ++(increment) operator. Post-increment
	obj1.show();
	
	obj1--; //Overloading --(decrement) operator. Post-decrement
	obj1.show();
	
	return 0;
}
