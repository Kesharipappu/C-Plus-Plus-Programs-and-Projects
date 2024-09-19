#include<iostream>
using namespace std;

class Shape
{
	protected:
		double x, y;
	public:
		virtual void get_data() = 0;
		virtual void display_area() = 0;	
};

class Circle : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Radius of Circle : ";
			cin>>x;
		}
		void display_area()
		{
			double areaOfCircle;
			areaOfCircle = 3.14 * x * x;	
			cout<<"Area of Circle is : "<<areaOfCircle<<endl;
		}	
};

class Rectangle : public Shape
{
	void get_data()
	{
		cout<<"Enter Length and Width of Rectangle : ";
		cin>>x>>y;	
	}
	void display_area()
	{
		double areaOfRectangle;
		areaOfRectangle = x * y;
		cout<<"Area of Rectangle is : "<<areaOfRectangle<<endl;
	}	
};

int main()
{
	Circle cir;
	Rectangle rect;
	Shape *shp[2];
	shp[0] = &cir;
	shp[1] = &rect;
	cout<<"\n<-----Calculate Area of Different Shape----->"<<endl;
	cout<<"Choose Your Choice"<<endl;
	cout<<"1 : Area of Circle"<<endl;
	cout<<"2 : Area of Rectangle"<<endl;
	int choice;
	cout<<"Enter Your Choice : "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: 
			shp[0]->get_data();
			shp[0]->display_area();
			break;
		case 2:
			shp[1]->get_data();
			shp[1]->display_area();
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
}
