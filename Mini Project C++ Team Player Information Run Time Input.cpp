#include<iostream>
#include<string.h>
using namespace std;

class Player
{
	private:
		int age;
		char name[40], team[40];
	public:
		Player()
		{
			cout<<"Enter player name: ";
			cin.getline(name, 40);
			cout<<"Enter player team: ";
			cin.getline(team, 40);
			cout<<"Enter player age: ";
			cin>>age;
		}
		void input()
		{
			cout<<"Enter Player name:";
			cin>>name;
			cout<<"Enter Player team:";
			cin>>team;
			cout<<"Enter Player age:";
			cin>>age;
		}
		void display()
		{
			cout<<"<-----------Player Details---------->"<<endl;
			cout<<"Player name is: "<<name<<endl;
			cout<<"Team name is: "<<team<<endl;
			cout<<"Player age is: "<<age<<endl;
			system("pause");
		}
		void change()
		{
			cout<<"Enter Player name:";
			cin>>name;
			cout<<"Enter Player team:";
			cin>>team;
			cout<<"Enter Player age:";
			cin>>age;
		}
};

int main()
{
	int choice;
	Player p;
	do
	{
		system("cls");
		cout<<"<-----------Main Menu----------->"<<endl;
		cout<<"1:- Input Player Details"<<endl;
		cout<<"2:- Display Player Details"<<endl;
		cout<<"3:- Change Player Details"<<endl;
		cout<<"4:- Exit"<<endl;
		cout<<"Enter any choice: "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				p.input();
				break;
			case 2:
				p.display();
				break; 
			case 3:
				p.change();
				break;
			case 4:
				exit(1);
			default:
				cout<<"You entered invalid number"<<endl;
		}
	}while(1);
	
	return 0;
}
