#include<iostream>
using namespace std;

class ATM
{
	private:
		int balance;
		int pinCode, success;
	public:
		ATM(int bal, int pin)
		{
			balance = bal;
			pinCode = pin;
		}	
		int getBalance()
		{
			return balance;
		}
		int withdraw(int amount, int pin)
		{
			if(pin != pinCode)
			{
				return false;
			}
			if(amount > balance)
				return false;
			else
				balance = balance - amount;
				return true;
		}
		void deposit(int amount)
		{
			balance = balance + amount;
		}
		int transfer(int amount, ATM receiver, int pin)
		{
			if(pin != pinCode)
				return false;
			else
				success = withdraw(amount, pinCode);
			if(success)
			{
				receiver.withdraw(amount, pin);
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	ATM atm(1000, 800010);
	int choice, amount, success, pin;
	char option;
	do
	{
		system("cls");
		cout<<"1. View Balance"<<endl;
		cout<<"2. Cash Withdraw"<<endl;
		cout<<"3. Cash Deposit"<<endl;
		cout<<"4. Cash Transfer"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Your Balance is : "<<atm.getBalance();
				break;
			case 2:
				cout<<"Your Available Balance is : "<<atm.getBalance()<<endl;
				cout<<"Enter Amount to Withdraw : ";
				cin>>amount;
				success = atm.withdraw(amount, 800010);
				if(success)
					cout<<"Withdraw Successfull..."<<endl;
				else
					cout<<"Insufficient Balance..."<<endl;
				break;
			case 3:
				cout<<"Enter Amount to Deposit : ";
				cin>>amount;
				atm.deposit(amount);
				cout<<"Deposit Successful..."<<endl;
				break;
			case 4:
				cout<<"Your Available Balance is : "<<atm.getBalance()<<endl;
				cout<<"Enter the Amount to Transfer :";
				cin>>amount;
				cout<<"Enter Pincode : ";
				cin>>pin;
				success = atm.transfer(amount, atm, pin);
				if(success)
					cout<<"Transfer Successfully..."<<endl;
				else
					cout<<"Invalid Pincode or Insufficient Balance : "<<endl;
				break;
			case 5:
				cout<<"Thanks for using ATM"<<endl;
				exit(1);
				break;
			default:
				cout<<"Invalid Choice"<<endl;
		}
		cout<<"\nDo You Want to Try Another Transaction [Yes / No] : ";
		cin>>option;
	}while(option == 'y' || option == 'Y');
		
	return 0;
}
