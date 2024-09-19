#include<iostream>
#include<string.h>
using namespace std;

class TV
{
	private:
		float price;
		char BrandName[20], TvModel[15];
	public:
		TV(const char b[], const char m[], float p)
		{
			strcpy(BrandName, b);
			strcpy(TvModel, m);
			price = p;	
		}
		void changeValue(const char b[], const char m[], float p)
		{
			strcpy(BrandName, b);
			strcpy(TvModel, m);
			price = p;
		}
		void display()
		{
			cout<<"Brand Name is : "<<BrandName<<endl;
			cout<<"Model Name is : "<<TvModel<<endl;
			cout<<"TV Price is : "<<price<<endl;	
		}	
};

int main()
{
	TV t("Samsung", "HD", 30000);
	cout<<"<-------TV Object Value------->"<<endl;
	t.display();
	
	t.changeValue("SONY", "FHD", 35000);
	cout<<"<-------After change TV Object Value------->"<<endl;
	t.display();
	
	return 0;
}
