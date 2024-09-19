#include<iostream>
using namespace std;

class parent
{
	private:
		int a, b;
	public:
		parent(int p1, int p2)
		{
			a = p1;
			b = p2;
		}
		void show()
		{
			cout<<"The first value of parent class : "<<a<<endl;
			cout<<"The second value of parent class : "<<b<<endl;
		}
};

class child : public parent
{
	private:
		int x, y;
	public:
		//when we declare base class constructor then we will have to define variable of both parent class as well as child class
    	//(base class variable, child class variable)
		child(int p1, int p2, int c1, int c2) : parent(p1, p2)
		{
			x = c1;
			y = c2;
		}
		void display()
		{
			cout<<"The first value of child class : "<<x<<endl;
			cout<<"The second value of child class : "<<y<<endl;
		}
};

int main()
{
	//(parent class value, child class value)
	child obj(4, 7, 2, 9);
	obj.show();  /*output -> 
							The first value of parent class : 4
						    The second value of parent class : 7 
				*/
	
	
	obj.display(); /* output - >
								The first value of parent class : 4
								The second value of parent class : 7
								The first value of child class : 2
								The second value of child class : 9
					*/
 //child class object will call both parent class function as well as child class function, because child class has inherited parent class
	
	return 0;
}
