#include<iostream>
using namespace std;

class parent
{
	public:
		parent()
		{
			cout<<"Constructor of parent class"<<endl;	
		}	
		~parent()
		{
			cout<<"Destructor of parent class"<<endl;
		}
};

class child1 : public parent
{
	public:
		child1()
		{
			cout<<"Constructor of child 1 class"<<endl;	
		}
		~child1()
		{
			cout<<"Destructor of child 1 class"<<endl;
		}
};

class child2 : public child1
{
	public:
		child2()
		{
			cout<<"Constructor of child 2 class"<<endl;
		}
		~child2()
		{
			cout<<"Desctructor of child 2 class"<<endl;
		}
};

int main()
{
	child2 obj;
	
	//Constructors are called in the order of 1, 2, 3, 4 and so on but Destructors are called in the order of 4, 3, 2, 1
	//Constructors are called in ascending order but destructors are called in descending order
	
	/*
	If we call obj of child2 (Ex->child2 obj) then the output will be ->
						Constructor of parent class
						Constructor of child 1 class
						Constructor of child 2 class
						Desctructor of child 2 class
						Destructor of child 1 class
						Destructor of parent class
	*/
	
	/*
	If we call obj of child1 (Ex-> child1 obj) then the output will be ->
						Constructor of parent class
						Constructor of child 1 class
						Destructor of child 1 class
						Destructor of parent class
	*/
	
		/*
	If we call obj of child1 (Ex-> parent obj) then the output will be ->
						Constructor of parent class
						Destructor of parent class
	*/
	
	return 0;
}
