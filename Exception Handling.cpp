#include<iostream>
using namespace std;

int main()
{
	int a, b, q;
	
	try
	{
		cout<<"Enter First Value : ";
		cin>>a;
		cout<<"Enter Second Value : ";
		cin>>b;	
		
		if(b == 0)
			throw 0;
		else	
			q = a / b;
			cout<<"The Result is : "<<q;
	}
	catch(int)
	{
		cout<<"Can't be devided by zero :"<<endl;
	}
	
	return 0;
}
