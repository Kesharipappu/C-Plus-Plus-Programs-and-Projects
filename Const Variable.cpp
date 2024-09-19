#include<iostream>
using namespace std;

int main()
{
	const int n = 10;
	const int x = n + 10;
	
//	x = x + 10;   //It will give compile time error, because we can't change the value of const variable
//	n = n  + 1;   //It will give compile time error, because we can't change the value of const variable
	
	cout<<"n: "<<n<<endl;
	cout<<"x: "<<x<<endl;
	
	return 0;
}
