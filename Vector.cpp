#include<iostream>
#include<vector>
using namespace std;

class User
{
	public:
		string name, email;
		int age;		
};

int main()
{
	vector<User> users; //Create object of Vector.  (Syntax->  vector className objectName)
	
	User user1; //Create object of user class	
	user1.name = "Pappu Kumar Keshari";
	user1.age = 30;
	user1.email = "kumar.pappu18@gmail.com";	
	users.push_back(user1); //It will store value in vector
	
	User user2; //Create another object of user class	
	user2.name = "Ranjeet Kumar Keshari";
	user2.age = 32;
	user2.email = "rkeshari1999@gmail.com";	
	users.push_back(user2); //It will store value in vector
	
	User user3; //Create another object of user class
	user3.name = "Mukesh Kumar Keshari";
	user3.age = 34;
	user3.email = "mukeshkumar@gmail.com";	
	users.push_back(user3); //It will store value in vector
	
	//It will fetch data from vector and display on screen
	for(int i = 0; i <users.size(); i++)
	{
		cout<<"Name : "<<users[i].name<<endl;
		cout<<"Age : "<<users[i].age<<endl;
		cout<<"Email : "<<users[i].email<<endl<<endl;
	}
	
	return 0;
}
