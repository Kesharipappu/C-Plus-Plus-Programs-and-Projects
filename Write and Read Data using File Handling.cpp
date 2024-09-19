#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Student
{
	private:
		int rollNo;
		string name;
	public:
		void inputData()
		{
			cout<<"Enter Roll Number : ";
			cin>>rollNo;
			cout<<"Enter Name : ";
			cin>>name;	
		}	
		int getRollNo()
		{
			return rollNo;
		}
		string getName()
		{
			return name;
		}
};

int main()
{
	Student stu[3];
	//It will save records in student.txt File or we can say that it will write records in file
	ofstream outFile("student.txt");
	for(int i = 0; i < 3; i++)
	{
		stu[i].inputData();	
		outFile<<"Roll Number : "<<stu[i].getRollNo()<<" Name : "<<stu[i].getName()<<endl; 
	}																					
	outFile.close();
	
	//It will read records from student.txt File
	ifstream inFile("student.txt"); 
	string record;
	while(getline(inFile, record))
	{
		cout<<record<<endl;		
	}
	inFile.close();		
	
	return 0;
}
