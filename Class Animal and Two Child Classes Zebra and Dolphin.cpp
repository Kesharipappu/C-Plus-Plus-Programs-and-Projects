#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	protected:
		int age;
		char name[20];
	public:
		void set_data(int a, const char n[])
		{
			age = a;
			strcpy(name, n);	
		}	
};

class Zebra : public Animal
{
	public:
		void show_Z()
		{
			cout<<"The Name of Zebra is : "<<name<<" and Age is : "<<age<<" | Zebra comes from Kenya"<<endl;				
		}	
};

class Dolphin : public Animal
{
	public:
		void show_D()
		{
			cout<<"The Name of Dolphin is : "<<name<<" and Age is : "<<age<<" | Dolphin comes from Sri Lanka"<<endl;				
		}
};
f
int main()
{
	Zebra Z;
	Dolphin D;
	
	char n1[10] = "Sheroo", n2[10] = "Pari";
	
	Z.set_data(10, n1);
	Z.show_Z();
	
	D.set_data(8, n2);
	D.show_D();	
	
	return 0;
}

