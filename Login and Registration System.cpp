#include<iostream>
#include<string>
#include<vector>
using namespace std;

class User
{
	private:
		string username, password;
	public:
		User(string name, string pass)
		{
			username = name;
			password = pass;
		}
		string getUsername()
		{
			return username;
		}
		string getPassword()
		{
			return password;
		}
};

class UserManager
{
	private:
		vector<User> users; //creating object of vector. (Syntax : -> vector className objectName)
	public:
		void RegisterUser()
		{
			string username, password;
			cout<<"\t\tEnter User Name : ";
			cin>>username;
			cout<<"\t\tEnter Password : ";
			cin>>password;
			
			User newUser(username, password);
			users.push_back(newUser);
			
			cout<<"\t\tUser Registered Successfully..."<<endl;
		}
		bool LoginUser(string name, string pass)
		{
			for(int i = 0; i < users.size(); i++)
			{
				if(users[i].getUsername() == name && users[i].getPassword() == pass)
				{
					cout<<"\t\tLogin Successfully..."<<endl;
					return true;
				}
			}
			cout<<"\t\tInvalid User Name or Password..."<<endl;
			return false;
		}
		void showUser()
		{
			cout<<"\t\t<-----------Users List---------->"<<endl;
			for(int i = 0; i < users.size(); i++)
			{
				cout<<"\t\t"<<users[i].getUsername()<<endl;
			}
		}
		void searchUser(string username)
		{
			bool found = false;
			for(int i = 0; i < users.size(); i++)
			{
				if(users[i].getUsername() == username)
				{
					cout<<"\t\tUser Found..."<<endl;
					found = true;
					break;
				}
			}
			if(!found)
			{
				cout<<"\t\tUser Not Found..."<<endl; 
			}
		}
		void deleteUser(string username)
		{
			bool found = false;
			for(int i = 0; i < users.size(); i++)
			{
				if(users[i].getUsername() == username)
				{
					users.erase(users.begin() + i);
					cout<<"\t\tUser Deleted Successfully..."<<endl;
					found = true;
					break;
				}
			}
			if(!found)
			{
				cout<<"\t\tUser Doesn't Exist "<<endl;
			}
		}
};

int main()
{
	UserManager usermanager;
	int choice;
	char option;
	do
	{
		system("cls"); //It will clear screen
		cout<<"\n\n\t\t1. Register USer "<<endl;
		cout<<"\t\t2. Login "<<endl;
		cout<<"\t\t3. Show User List "<<endl;
		cout<<"\t\t4. Search User "<<endl;
		cout<<"\t\t5. Delete User "<<endl;
		cout<<"\t\t6. Exit "<<endl;
		cout<<"\t\tEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					usermanager.RegisterUser();
					break;
				}
			case 2:
				{
					string username, password;
					cout<<"\t\tEnter User Name : ";
					cin>>username;
					cout<<"\t\tEnter Password : ";
					cin>>password;
					usermanager.LoginUser(username, password);
					break;
				}
			case 3: 
				{
					usermanager.showUser();
					break;
				}
			case 4:
				{
					string username;
					cout<<"\t\tEnter User Name : ";
					cin>>username;
					usermanager.searchUser(username);
					break;
				}
			case 5:
				{
					string username;
					cout<<"\t\tEnter User Name : ";
					cin>>username;
					usermanager.deleteUser(username);
					break;
				}
			case 6:
				exit(1);
		}	
		cout<<"\t\tDo You Want to Continue [Yes / No] ? :";
		cin>>option;	
	}while(option == 'y' || option == 'Y');
	
	return 0;
}
