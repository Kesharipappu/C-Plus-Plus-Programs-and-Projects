#include<iostream>
using namespace std;
const int limit = 10;
class SafeArray
{
	private:
		int arr[limit];
	public:
		SafeArray()
		{
			for(int i = 0; i < limit; i++)
			{
				arr[i] = i;
			}
		}
		int & operator[] (int i)
		{
			if(i > limit)
			{
				cout<<"Index is out of bound"<<endl;
				return arr[0];
			}
			else
			{
				return arr[i];
			}
		}
};

int main()
{
	SafeArray SA;
	cout<<SA[8];
	
	return 0;
}
