#include<iostream>
using namespace std;

class Test
{
	public:
		int n;	
};

int main()
{
	Test T;
	cout<<"Enter number:"<<endl;
	cin>>T.n;
	cout<<"The number is: "<<T.n;
	
	return 0;
}
