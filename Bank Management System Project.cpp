#include<iostream>
using namespace std;

class Bank
{
	private:
		char name[40], actype[40]; //actype -> Account Type
		int bal, acno;  //acno -> Account Number
	public:
		Bank()
		{
			cout<<"Enter Customer Name: ";
			cin.getline(name, 40);
			cout<<"Enter Account Type: ";
			cin.getline(actype, 40);
			cout<<"Enter Account Number: ";
			cin>>acno;
			cout<<"Enter Opening Balance: ";
			cin>>bal;
		}
		void deposit(int amt)
		{
			bal = bal + amt;
			cout<<"Balance after deposit: "<<bal<<endl;
			system("pause");
		}
		void withdraw(int amt)
		{
			if(amt > bal)
			{
				cout<<"Sorry your balance is less than entered amount.. "<<endl;
			}
			else
			{
				bal = bal - amt;
				cout<<"Balance after withdraw: "<<bal<<endl;
				system("pause");
			}
		}
		void display()
		{
			cout<<"<-----------Account Details----------->"<<endl;
			cout<<"Customer Name: "<<name<<endl;
			cout<<"Account Type: "<<actype<<endl;
			cout<<"Account Number: "<<acno<<endl;
			cout<<"Current Balance: "<<bal<<endl;
			system("pause");
		}
};

int main()
{
	Bank objBank;
	int amount, choice;
	do
	{
		system("cls");
		cout<<"<-----------Main Menu----------->"<<endl;
		cout<<"1:- Deposit Money"<<endl;
		cout<<"2.- Withdraw Money"<<endl;
		cout<<"3.- Display Account Details"<<endl;
		cout<<"4.- Exit"<<endl;
		cout<<"Enter any Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter Amount to Deposit:";
				cin>>amount;
				objBank.deposit(amount);
				break;
			case 2:
				cout<<"Enter Amount to Withdraw:";
				cin>>amount;
				objBank.withdraw(amount);
				break;
			case 3:
				objBank.display();
				break;
			case 4:
				exit(0);
		}
	}while(1);
	
	return 0;
}
