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
		void display()
		{
			cout<<"The page is: "<<page<<endl;
			cout<<"The price is: "<<price<<endl;
			cout<<"Tne name is: "<<name<<endl;
		}
};

int main()
{
	Book b1, b2;
	cout<<"-----------Book1 Data----------"<<endl;
	b1.setPage(100);
	b1.setPrice(300.98);
	b1.setName("Web Programming");	
	b1.display();
	
	cout<<"-----------Book2 Data----------"<<endl;
	b2.setPage(200);
	b2.setPrice(700.54);
	b2.setName("Java Programming");
	b2.display();
	
	return 0;

}

