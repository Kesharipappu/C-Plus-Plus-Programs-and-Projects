#include<iostream>
using namespace std;

class Publication
{
	protected:
		float price;
	public:
		void getData()
		{
			cout<<"Enter Price : ";
			cin>>price;
		}
		void putData()
		{
			cout<<"Price : "<<price<<endl;
		}	
};

class Book : public Publication
{
	private:
		int pageCount;
	public:
		void getData()
		{
			cout<<"Enter Page Number of Page :";
			cin>>pageCount;
			Publication::getData();
		}
		void putData()
		{
			cout<<"Number of Pages : "<<pageCount<<endl;
			Publication::putData();	
		}			
};

class Tape : public Publication
{
		private:
			float time;
		public:
			void getData()
			{
				cout<<"Enter Time in Minutes :";
				cin>>time;
				Publication::getData();
			}
			void putData()
			{
				cout<<"Time is : "<<time<<endl;
				Publication::putData();
			}
};

int main()
{
	Book bk;
	Tape tp;
	int option;
	cout<<"1. Book Information"<<endl;
	cout<<"2. Tape Information"<<endl;
	cout<<"Please Enter Your Choice :"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
			bk.getData();
			cout<<"<----------Book Information-------->"<<endl;
			bk.putData();
			break;
		case 2:
			tp.getData();
			cout<<"<----------Tape Information-------->"<<endl;
			tp.putData();
			break;	
		default:
			cout<<"Invalid Input";
	}	
	return 0;
}
