#include<iostream>
using namespace std;

class Distance
{
	public:
		Distance() : km(0), hr(0) //km -> Kilometer,   hr->Hour
		{
			
		}
		void get()
		{
			cout<<"Enter Distance in KiloMeter: ";
			cin>>km;
			cout<<"Enter Hours of Distance: ";
			cin>>hr;
		}
		void show()
		{
			cout<<"Travelled is: "<<km<<" KM in "<< hr<<" Hours"<<endl;
		}
		Distance TotalDis(Distance pas) // Here returning object so return type is object like -> Distance
		{
			Distance t;
			t.km = km + pas.km;
			t.hr = hr + pas.hr;
			return t;
		}
	private:
		int km, hr;
};

int main()
{
	Distance yourDis, myDis, Result;
	cout<<"<-----------Your Input of Distance----------->"<<endl;
	yourDis.get();
	yourDis.show();
	
	cout<<"<-----------My Input of Distance----------->"<<endl;
	myDis.get();
	myDis.show();
	
	cout<<"<-----------Total Output of Distance----------->"<<endl;
	Result =  yourDis.TotalDis(myDis);
	cout<<"Total Travelled is: ";
	Result.show();

	return 0;
	
}
