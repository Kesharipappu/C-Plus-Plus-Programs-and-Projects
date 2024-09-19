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
		void display()
		{
			cout<<"Feets = "<<feets<<", Inches = "<<inches<<endl;
		}
		Distance operator ++() //Pre increment
		{
			return Distance(++feets, ++inches);
		}
		Distance operator ++(int) //Post increment
		{
			return Distance(feets++, inches++);
		}
		void operator --() //Pre decrement
		{
			feets--;
			inches--;
		}
		void operator --(int) //Post decrement
		{
			feets--;
			inches--;
		}
};

int main()
{
	Distance d1(3, 6.8);
	Distance d2(5, 7.4);
	Distance  d3, d4;
	cout<<"Before ++"<<endl;
	cout<<"d1 = ";
	d1.display();
	cout<<"d2 = ";
	d2.display();
	
	cout<<"After ++"<<endl;
	d3 = ++d1; //Pre increment
	d4 = d2++; //Post increment
	cout<<"d1 = ";
	d1.display();
	cout<<"d2 = ";
	d2.display();
	cout<<"d3 = ";
	d3.display();
	cout<<"d4 =";
	d4.display();
	
	cout<<"After --"<<endl;
	--d1; //Pre decrement
	d2--; //Post decrement
	cout<<"d1 = ";
	d1.display();
	cout<<"d2 = ";
	d2.display();
	
		
	return 0;
}
