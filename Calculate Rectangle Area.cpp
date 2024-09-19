#include<iostream>
using namespace std;

class Shape     //This is an abstract class, because it has pure virtual function
{
	protected:
		int width, length;
	public:
		virtual void get_data() = 0;  // pure virtual function
		virtual void display_area() = 0;  // pure virtual function
};

class Rectangle : public Shape
{
	void get_data()
	{
		cout<<"<-----------Rectangle Data Input----------->"<<endl;
		cout<<"Enter Width and Length of Rectangle : ";
		cin>>width>>length;	
	}	
	void display_area()
	{
		long int areaOfRectangle;
		cout<<"<----------Area of Rectangle---------->"<<endl;
		areaOfRectangle = length * width;
		cout<<"Area of Rectangle is : "<<areaOfRectangle;
	}
};

int main()
{
	Rectangle rect;
	Shape *shp;
	shp = &rect;
	shp->get_data();
	shp->display_area();
	
	return 0;
}

