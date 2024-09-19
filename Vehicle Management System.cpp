#include<iostream>
using namespace std;

class Vehicle
{
	private:
		string make, model;
		int year;
	public:
		void inputData()
		{
			cout<<"Enter Company Name : ";
			cin>>make;
			cout<<"Enter Model : ";
			cin>>model;
			cout<<"Enter Year : ";
			cin>>year;	
		}
		void display()
		{
			cout<<"Make : "<<make<<endl;
			cout<<"Model : "<<model<<endl;
			cout<<"Year : "<<year<<endl;	
		}	
};

class Car : public Vehicle
{
	private:
		int door;
	public:
		void inputData()
		{
			Vehicle::inputData();
			cout<<"Enter Number of Doors : ";
			cin>>door;	
		} 
		void display()
		{
			Vehicle::display();
			cout<<"Doors : "<<door<<endl;	
		}	
};

class ToyotaCar : public Car
{
	private:
		string trimLevel;
	public:
		void inputData()
		{
			Car::inputData();
			cout<<"Enter Trim Level : ";
			cin>>trimLevel;	
		}
		void display()
		{
			Car::display();
			cout<<"Trim Level : "<<trimLevel<<endl;	
		}	
};

int main()
{
	ToyotaCar myCar;
	cout<<"<-----------Input Car Information---------->"<<endl;
	myCar.inputData();
	
	cout<<"<-----------Output Car Information---------->"<<endl;
	myCar.display();
	
	return 0;
}
