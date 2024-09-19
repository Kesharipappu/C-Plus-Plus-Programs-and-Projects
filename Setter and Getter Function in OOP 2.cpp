/*write program to use setter and getter function*/

#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	private:
		int page;
		float price;
		string name;
	public:
		void setPage(int p)
		{
			page = p;
		}
		void setPrice(float pr)
		{
			price = pr;
		}
		void setName(string n)
		{
			name = n;
		}
		int getPage()
		{
			return page;
		}		
		float getPrice()
		{
			return price;
		}
		string getName()
		{
			return name;
		}
};

int main()
{
	Book b1, b2;
	cout<<"-----------Book1 Data----------"<<endl;
	b1.setPage(200);
	b1.setPrice(300.98);
	b1.setName("Web Programming");	
	cout<<"Book1 Page is: "<<b1.getPage()<<endl;
	cout<<"Book1 Price is: "<<b1.getPrice()<<endl;
	cout<<"Book1 Name is: "<<b1.getName()<<endl;
	
	cout<<"-----------Book2 Data----------"<<endl;
	b2.setPage(300);
	b2.setPrice(700.54);
	b2.setName("Java Programming");
	cout<<"Book2 Page is: "<<b2.getPage()<<endl;
	cout<<"Book2 Price is: "<<b2.getPrice()<<endl;
	cout<<"Book2 Name is: "<<b2.getName()<<endl;
		
	return 0;

}

