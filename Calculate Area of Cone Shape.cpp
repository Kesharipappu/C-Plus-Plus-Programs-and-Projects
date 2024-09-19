#include<iostream>
#include<cmath>
using namespace std;

class Shape
{
	protected:
		double r, h;
	public:
		virtual void get_data() = 0;
		virtual void display_area() = 0;	
};

class Cone : public Shape
{
	public:
		void get_data()
		{
			cout<<"Enter Radius and Height of Cone :";
			cin>>r>>h;	
		}
		void display_area()
		{
			double areaOfCone;
			areaOfCone = 3.14*r*(r+sqrt(h*h+r*r));
			cout<<"Area of Cone is : "<<areaOfCone;
		}	
};

int main()
{
	Cone con;
	Shape *shp;
	shp = &con;
	shp->get_data();
	shp->display_area();
	
	return 0;
}


