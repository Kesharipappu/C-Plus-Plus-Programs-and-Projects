#include<iostream>
using namespace std;

class CurrencyConvertor
{
	private:
		double usdToEuroRate;
		double euroToUsdRate;
		double usdToPakRupeeRate;
		double usdToIndRupeeRate;
	public:
		CurrencyConvertor(double usdToEuro, double euroToUsd, double usdToPak, double usdToInd)
		{
			usdToEuroRate = usdToEuro;
			euroToUsdRate = euroToUsd;
			usdToPakRupeeRate = usdToPak;
			usdToIndRupeeRate = usdToInd;
		}
		void displayExchangeRate() const
		{
			cout<<"\n\t<-----Current Exchange Rate----->\n";
			cout<<"1 USD to Euro : "<<usdToEuroRate<<endl;
			cout<<"1 Euro to USD : "<<euroToUsdRate<<endl;
			cout<<"1 USD to Pakistani Rupees : "<<usdToPakRupeeRate<<endl;
			cout<<"1 USd to Indian Rupees : "<<usdToIndRupeeRate<<endl;
		}
		double usdToEuro(double usdAmount)
		{
			return usdAmount * usdToEuroRate;
		}
		double euroToUsd(double euroAmount)
		{
			return euroAmount * euroToUsdRate;
		}
		double usdToPakRupee(double usdAmount)
		{
			return usdAmount * usdToPakRupeeRate;
		}
		double usdToIndRupee(double usdAmount)
		{
			return usdAmount * usdToIndRupeeRate;
		}
};

int main()
{
	//Rate as per 19 September 2024. It changes day per day
	const double initialUsdToEuroRate = 0.90;
	const double initialEuroToUsdRate = 1.11;
	const double initialUsdToPakRate = 279.31;
	const double initialUsdToIndRate = 83.63;
	
	CurrencyConvertor convertor(initialUsdToEuroRate, initialEuroToUsdRate, initialUsdToPakRate, initialUsdToIndRate);
	
	int choice;
	double amount;
	do
	{
		system("cls");
		convertor.displayExchangeRate();
		cout<<"\n\t*******Currency Convertor Main Menu*******\n";
		cout<<"1. Convert USD to Euro \n";
		cout<<"2. Convert Euro to USD \n";
		cout<<"3. Convert USD to Pakistani Rupees \n";
		cout<<"4. Convert USD to Indian Rupee \n";
		cout<<"0. Exit \n";
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the Amount of USD : ";
				cin>>amount;
				cout<<amount<<" USD is Equal to "<<convertor.usdToEuro(amount) <<" Euro"<<endl;
				system("pause");
				break;
			case 2:
				cout<<"Enter the Amount of Euro : ";
				cin>>amount;
				cout<<amount<<" Euro is Equal to "<<convertor.euroToUsd(amount) <<" USD"<<endl;
				system("pause");
				break;
			case 3:
				cout<<"Enter the Amount of USD : ";
				cin>>amount;
				cout<<amount<<" USD is Equal to "<<convertor.usdToPakRupee(amount)<<" Pakistani Rupee"<<endl;
				system("pause");
				break;
			case 4:
				cout<<"Enter the Amount of USD : ";
				cin>>amount;
				cout<<amount<<" USD is Equal to "<<convertor.usdToIndRupee(amount)<<" Indian Rupee"<<endl;
				system("pause");
				break;
			case 0:
				cout<<"Program End";
				break;
			default:
				cout<<"Invalid Input. Please Enter Valid Input"<<endl;
				system("pause");
		}
	}while(choice != 0);
	
	return 0;
}
