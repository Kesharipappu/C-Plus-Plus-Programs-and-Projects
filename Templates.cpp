#include<iostream>
using namespace std;
template <class T>

void print(T n)
{
	cout<<n<<endl;
};

int main()
{
	print(5);
	print(56.9);
	print("Pappu");
	
	return 0;
}
