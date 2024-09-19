#include<iostream>
using namespace std;

class Parent
{
	public:
		void show()
		{
			cout<<"This is show method of parent class"<<endl;	
		}	
};

int main()
{
	Parent *ptr; //Pointer type object
	ptr = new Parent;
	ptr->show();
	
	return 0;
}
