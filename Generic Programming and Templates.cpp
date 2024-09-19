#include<iostream>
using namespace std;

template <class T>

T Max(T n, T m)
{
	if(n > m)
		return n;
	else
		return m;
};

int main()
{
	int r;
	r = Max(12, 9);
	cout<<"Maximum value is : "<<r<<endl;
	
	float res;
	res = Max(34.56, 98.23);
	cout<<"Maximum value is : "<<res<<endl;
	
	return 0;
}
