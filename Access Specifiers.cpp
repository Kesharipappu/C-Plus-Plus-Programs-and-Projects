#include<iostream>
using namespace std;

class Test
{
	private:
		int n;
	public:
		void inputData()
		{
			cout<<"Enter number:"<<endl;
			cin>>n;
		}
		void outputData()
		{
			cout<<"The value of number: "<<n<<endl;
		}
};

int main()
{
	Test t;
	t.inputData();
	t.outputData();
	
	return 0;
}
