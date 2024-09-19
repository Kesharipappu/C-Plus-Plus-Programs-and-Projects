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
	Parent *ptr[5];
	for(int i = 0; i < 5; i++)
	{
		ptr[i] =  new Parent;
		ptr[i]->show();
	}
	
	return 0;
}
