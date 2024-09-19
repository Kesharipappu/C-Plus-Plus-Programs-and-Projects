#include<iostream>
using namespace std;
template <class Type>

class Test
{
	private:
		Type n; /*	Type of data member.
					It will convert in value according to data type given by user. 
					It will convert according to called value from main function.
				*/
	public:
		void getValue()
		{
			cin>>n;	
		}
		void print()
		{
			cout<<"You entered : "<<n<<endl;
		}	
};

int main()
{
	Test<int> objInt;
	cout<<"Enter Integer value : "<<endl;
	objInt.getValue();
	objInt.print();
	
	Test<float> objFloat;
	cout<<"Enter real number : "<<endl;
	objFloat.getValue();
	objFloat.print();
	
	Test<char> objChar;
	cout<<"Enter any character : "<<endl;
	objChar.getValue();
	objChar.print();
	
	return 0;
}
