#include<iostream>
using namespace std;

class Test
{
	public:
		void getValue()
		{
			cout<<"Enter Number : ";
			cin>>n;
		}
		void operator + (Test obj)
		{
			Test t;
			t.n = n + obj.n;
			cout<<"The addition is : "<<t.n<<endl;
		}
		void operator - (Test obj)
		{
			Test t;
			t.n = n - obj.n;
			cout<<"The subtraction is : "<<t.n<<endl;
		}
		void operator * (Test obj)
		{
			Test t;
			t.n = n * obj.n;
			cout<<"The multiplication is : "<<t.n<<endl;
		}
		void operator / (Test obj)
		{
			Test t;
			t.n = n / obj.n;
			cout<<"The quotient is : "<<t.n<<endl;
		}
		void operator % (Test obj)
		{
			Test t;
			t.n = n % obj.n;
			cout<<"The remainder is : "<<t.n<<endl;
		}
	private:
		int n;
};

int main()
{
	Test obj1, obj2;
	
	cout<<"Enter data of object 1"<<endl;
	obj1.getValue();
	
	cout<<"Enter data of object 2"<<endl;
	obj2.getValue();
	
	obj1 + obj2; //Overloading + operator
	
	obj1 - obj2; //Overloading - operator
	
	obj1 * obj2; //Overloading * operator
	
	obj1 / obj2; //Overloading / operator
	
	obj1 % obj2; //Overloading % operator
	
	return 0;
}
