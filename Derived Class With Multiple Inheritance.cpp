	#include<iostream>
	using namespace std;
	
	class student
	{
		private:
			char name[40], city[40];
		public:
			void input_data();
			void show_data();	
	};
	
	class marks
	{
		private:
			float maths, comp, phy, total, avg;
		public:
			void input_marks();
			void show_marks();	
	};
	
	class result : public student, public marks
	{
		public:
			void show_result()
			{
				cout<<"<----------------------------------------->"<<endl;
				cout<<"The complete Result is :"<<endl;
				cout<<"<----------------------------------------->"<<endl;
				show_data();
				show_marks();
			}	
	};
	
	void student :: input_data()
	{
		cout<<"Enter Student's Name : ";
		cin.getline(name, 40);
		cout<<"Enter Srudent's City : ";
		cin.getline(city, 40);
	}
	
	void student :: show_data()
	{
		cout<<"Student's Name is : "<<name<<endl;
		cout<<"Student's City is : "<<city<<endl;
	}
	
	void marks :: input_marks()
	{
		cout<<"Enter Maths Marks : ";
		cin>>maths;
		cout<<"Enter Computer Marks : ";
		cin>>comp;
		cout<<"Enter Physics Marks : ";
		cin>>phy;
		
		total = maths + comp + phy;
		avg = total / 3.0;
	}
	
	void marks :: show_marks()
	{
		cout<<"Maths Marks : "<<maths<<endl;
		cout<<"Computer Marks : "<<comp<<endl;
		cout<<"Physics Marks : "<<phy<<endl;
		cout<<"Total Marks : "<<total<<endl;
		cout<<"Average : "<<avg<<endl;
	}
	
	int main()
	{
		result res;
		res.input_data();
		res.input_marks();
		res.show_result();
		
		return 0;
	}
	

