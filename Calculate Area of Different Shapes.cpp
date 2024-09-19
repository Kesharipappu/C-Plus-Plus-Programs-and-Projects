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
	public:
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

class Triangle : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Base and Height of Triangle : "<<endl;
			cin>>x>>y;
		}
		void display_area()
		{
			double areaOfTriangle;
			areaOfTriangle = (x * y)/2;
			cout<<"Area of Triangle is : "<<areaOfTriangle<<endl;
		}
};

class Square : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Side of Square : ";
			cin>>x;	
		}
		void display_area()
		{
			double areaOfSquare;
			areaOfSquare = x * x;
			cout<<"Area of Square is : "<<areaOfSquare<<endl;	
		}	
};

int main()
{
	Circle cir;
	Rectangle rect;
	Triangle tri;
	Square sqr;
	
	Shape *shp[4];
	shp[0] = &cir;
	shp[1] = &rect;
	shp[2] = &tri;
	shp[3] = &sqr;
	
	cout<<"<-----------Enter Area of Different Shapes----------->"<<endl;
	cout<<"Please Select Your Choice : "<<endl;
	cout<<"1: Area of Circle"<<endl;
	cout<<"2: Area of Rectngle"<<endl;
	cout<<"3: Area of Triangle"<<endl;
	cout<<"4: Area of Square"<<endl;
	int choice;
	cout<<"Enter Your Choice : ";
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
		case 3:
			shp[2]->get_data();
			shp[2]->display_area();
			break;
		case 4:
			shp[3]->get_data();
			shp[3]->display_area();
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
	
	return 0;
	
}

