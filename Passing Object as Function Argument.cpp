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
			cout<<"Your Travelled is: "<<km<<" KM in "<< hr<<" Hours"<<endl;
		}
		void TotalDis(Distance pas)
		{
			Distance t;
			t.km = km + pas.km;
			t.hr = hr + pas.hr;
			cout<<"Total Travelled is: "<<t.km<<" Kilometer in "<<t.hr <<" Hours"<<endl;
		}
	private:
		int km, hr;
};

int main()
{
	Distance yourDis, myDis;
	cout<<"<-----------Your Input of Distance----------->"<<endl;
	yourDis.get();
	yourDis.show();
	
	cout<<"<-----------My Input of Distance----------->"<<endl;
	myDis.get();
	myDis.show();
	
	cout<<"<-----------Total Output of Distance----------->"<<endl;
	yourDis.TotalDis(myDis);

	return 0;
	
}
