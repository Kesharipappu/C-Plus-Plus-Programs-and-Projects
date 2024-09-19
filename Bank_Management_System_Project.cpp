#include<iostream>
#include<vector>
using namespace std;

class BankAccount
{
	private:
		string name;
		int accountNum;
		double balance;
	public:
		BankAccount(string n, int ac, double bal)
		{
			name = n;
			accountNum = ac;
			balance = bal;	
		}
		string getName()
		{
			return name;
		}
		int getAccountNum()
		{
			return accountNum;
		}
		double getBalance()
		{
			return balance;
		}
		void deposit(double amount)
		{
			balance = balance + amount;
		}
		void withdraw(double amount)
		{
			if(balance >= amount)
			{
				balance = balance - amount;
				cout<<"\t\tWithdraw Successfully..."<<endl;
			}
			else
			{
				cout<<"\t\tInsufficient Balance..."<<endl;
			}
		}
};

class BankManagement
{
	private:
		vector<BankAccount> accounts;
	public:
		void AddAccount(string name, int accountNum, double balance)
		{
			accounts.push_back(BankAccount(name, accountNum, balance));
		}
		void showAllAccounts()
		{
			cout<<"#################################################################"<<endl;
			cout<<"\t\t\t\t\tAll Account Holders "<<endl;
			cout<<"#################################################################"<<endl;
			for(int i = 0; i < accounts.size(); i++)
			{
				cout<<"\t\tName : "<<accounts[i].getName() 
					<<"\t\tAccount Number : "<<accounts[i].getAccountNum()
					<<"\t\tBalance : "<<accounts[i].getBalance()<<endl;			
			}	
		}
		void searchAccount(int account)
		{
			bool found = false;
			for(int i = 0; i < accounts.size(); i++)
			{
				if(accounts[i].getAccountNum() == account)
				{
					cout<<"#################################################################"<<endl;
					cout<<"\t\t\t\t\t\tAccount Holder "<<endl;
					cout<<"#################################################################"<<endl;
					cout<<"\t\tName : "<<accounts[i].getName() 
						<<"\t\tAccount Number : "<<accounts[i].getAccountNum()
						<<"\t\tBalance : "<<accounts[i].getBalance()<<endl;
					found = true;	
				}
			}
			if(!found)
			{
				cout<<"\t\tCustomer doesn't Exist"<<endl;
			}
		}
		BankAccount* findAccount(int accountNum)
		{
			for(int i = 0; i < accounts.size(); i++)
			{
				if(accounts[i].getAccountNum() == accountNum)
				{
					return &accounts[i];
				}
			}
			return NULL;
		}
};

int main()
{
	BankManagement bank;
	int choice;
	char option;
	do
	{
		system("cls");
		cout<<"\t\t::Bank Management System::"<<endl;
		cout<<"\t\t\t\tMain Menu"<<endl;
		cout<<"\t\t1. Create New Account"<<endl;
		cout<<"\t\t2. Show All Account"<<endl;
		cout<<"\t\t3. Search Account"<<endl;
		cout<<"\t\t4. Deposit Money"<<endl;
		cout<<"\t\t5. Withdraw Money"<<endl;
		cout<<"\t\t6. Exit"<<endl;
		cout<<"\t\t<-------------------------------------->"<<endl;
		cout<<"\t\tEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					string name;
					int accountNum;
					double balance;
					cout<<"\t\tEnter Name : ";
					cin>>name;
					cout<<"\t\tEnter Account Number : ";
					cin>>accountNum;
					cout<<"\t\tEnter Initial Balance : ";
					cin>>balance;
					bank.AddAccount(name, accountNum, balance);
					cout<<"\t\tAccount Created Successfully..."<<endl;
					break;
				}
			case 2:
				{
					bank.showAllAccounts();
					break;
				}
			case 3:
				{
					int accountNum;
					cout<<"\t\tEnter Account Number : ";
					cin>>accountNum;
					bank.searchAccount(accountNum);
					break;
				}
			case 4:
				{
					int accountNum;
					double amount;
					cout<<"\t\tEnter Account Number to Deposit Money : ";
					cin>>accountNum;
					BankAccount* account = bank.findAccount(accountNum);
					if(account != NULL)
					{
						cout<<"\t\tEnter Amount to Deposit : ";
						cin>>amount;
						account->deposit(amount);
						cout<<"\t\t"<<amount<<" Deposited Successfully..."<<endl;
					}
					else
					{
						cout<<"\t\tAccount Number Not Available..."<<endl;
					}
					break;
				}
			case 5:
				{
					int accountNum;
					double amount;
					cout<<"\t\tEnter Account Number to Withdraw Money : ";
					cin>>accountNum;
					BankAccount* account = bank.findAccount(accountNum);
					if(account != NULL)
					{
						cout<<"\t\tEnter Amount to Withdraw : ";
						cin>>amount;
						account->withdraw(amount);
					}
					else
					{
						cout<<"\t\tAccount Number Not Available..."<<endl;
					}
					break;
				}
			case 6:
				exit(1);
				break;
		}
		cout<<"\t\tDo You Want to Continue [Yes / No] : ?";
		cin>>option;
	}while(option == 'y' || option == 'Y');
	
	return 0;
}

