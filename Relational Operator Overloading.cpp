#include<iostream>
using namespace std;

class Distance
{
	private:
		int feets;
		float inches;
	public:
		Distance() : feets(0), inches(0)
		{
			
		}
		Distance(int f, float in) : feets(f), inches(in)
		{
			
		}
		int operator < (Distance d)
		{
			if((feets < d.feets) && (inches < d.inches))
				return 1;
			else
				return 0;
		}
		void display()
		{
			cout<<"Feets = "<<feets<<", Inches = "<<inches<<endl;
		}
};

int main()
{
	Distance d1(8, 9.9);
	cout<<"d1 : ";
	d1.display();
	
	Distance d2(5, 9.4);
	cout<<"d2 : ";
	d2.display();
	
	if(d1 < d2)
	{
		cout<<"D1 is less than D2"<<endl;
	}
	else
	{
		cout<<"D2 is less than D1"<<endl;
	}
	
	return 0;
}
