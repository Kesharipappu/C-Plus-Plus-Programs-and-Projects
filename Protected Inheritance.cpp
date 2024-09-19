#include<iostream>
using namespace std;

class parent
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;	
};

class child : protected parent
{
	public:
		void input()
		{
//			cout<<"Enter value of a : "; // private data member can't be inherited
//			cin>>a
			cout<<"Enter value of b : ";
			cin>>b;
			cout<<"Enter value of c : ";
			cin>>c;
		}
		void show()
		{
			cout<<"The value of b : "<<b<<endl;
			cout<<"The value of c : "<<c<<endl;
		}
};

int main()
{
	child obj;
	obj.input();
	obj.show();
	
//	cout<<"Enter value of c in main : ";  // we can't access c because child class inherited parent class in protected mode
//	cin>>obj.c;							 //We can access only from inside the class not from outside the class
	
	return 0;
}
