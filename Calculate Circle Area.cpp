#include<iostream>
using namespace std;

class Shape
{
	protected:
		double radius;
	public:
		virtual void get_data() = 0; //pure virtual function
		virtual void display_area() = 0; //pure virtual function
};

class Circle : public Shape
{
	public:
		void get_data()
		{
			cout<<"<-----------Data Input of Circle-----------> "<<endl;
			cout<<"Enter Radius of Circle : ";
			cin>>radius;	
		}	
		void display_area()
		{
			cout<<"<-----------Area of Circle----------->"<<endl;
			double areaOfCircle;
			areaOfCircle = 3.14 * radius * radius;
			cout<<"Area of Circle is : "<<areaOfCircle;
		}
};

int main()
{
	Circle cir;
	Shape *shp; // We can only create pointer of virtual function. We can't create object of virtual function
	shp = &cir;
	shp->get_data();
	shp->display_area();
	
	return 0;
}
