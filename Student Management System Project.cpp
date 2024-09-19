#include<iostream>
#include<vector>
using namespace std;

class Student
{
	private:
		int rollno, age;
		string name;
	public:
		Student(int stdRollno, string stdName, int stdAge)
		{
				rollno = stdRollno;
				name = stdName;
				age = stdAge;
		}	
		void setRollno(int stdRollno)
		{
			rollno = stdRollno;
		}
		int getRollno()
		{
			return rollno;
		}
		void setName(string stdName)
		{
			name = stdName;
		}
		string getName()
		{
			return name;
		}
		void setAge(int stdAge)
		{
			age = stdAge;
		}
		int getAge()
		{
			return age;
		}
		void displayStudent()
		{
			cout<<"\t\tRoll Number : "<<rollno<<endl;
			cout<<"\t\tName : "<<name<<endl;
			cout<<"\t\tAge : "<<age<<endl;
		}
};

//Create function to update student record
void updateStudent(vector<Student> &students)
{
	string sname;
	bool found = false;
	int choice;
	
	cout<<"\t\tEnter Name to Update Record : ";
	cin.ignore();
	getline(cin,sname);
	
	for(int i = 0; i < students.size(); i++)
	{
		if(students[i].getName() == sname)
		{
			found = true;
			
			cout<<"\t\t<-----Student Found----->"<<endl;
			cout<<"\t\t 1. Update Roll Number"<<endl;
			cout<<"\t\t 2. Update Name"<<endl;
			cout<<"\t\t 3. Update Age"<<endl;
			cout<<"\t\tEnter Your Choice : ";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					{
						int rno;
						cout<<"\t\tEnter New Roll Number :";
						cin>>rno;
						students[i].setRollno(rno);
						break;
					}
				case 2:
					{
						string name;
						cout<<"\t\tEnter New Name :";
						cin.ignore();
						getline(cin, name);
						students[i].setName(name);
						break;
					}
				case 3:
					{
						int age;
						cout<<"\t\tEnter New Age :";
						cin>>age;
						students[i].setAge(age);
						break;
					}
				default:
					cout<<"\t\tInvalid Input"<<endl;
			}
		}
	}
	if(!found)
	{
		cout<<"\t\tStudent Not Available"<<endl;
	}
}

//Create function to search student
void SearchStudent(vector<Student> &students)
{
	int rollno;
	cout<<"\t\tEnter Roll Number : "<<endl;
	cin>>rollno;
	
	for(int i = 0; i < students.size(); i++)
	{
		if(students[i].getRollno() == rollno)
		{
			cout<<"\t\t<----------Student Found---------->"<<endl;
			students[i].displayStudent();
			return;
		}
	}
}

//Create function to display all student
void DisplayAllStudent(vector <Student> &students)
{
	if(students.empty())
	{
		cout<<"\t\tNo Student Available "<<endl;
		return;
	}
	for(int i = 0; i < students.size(); i++)
	{
		students[i].displayStudent();
		cout<<endl;
	}
}

//Create function to add new student
void addNewStudent(vector<Student> &students)
{
	int rollno, age;
	string name;
	cout<<"\t\tEnter Roll Number : ";
	cin>>rollno;
	//check if student already exist
	for(int i = 0; i < students.size(); i++)
	{
		if(students[i].getRollno() == rollno)
		{
			cout<<"\t\tStudent Already Exist..."<<endl;
			return;
		}
	}
	cout<<"\t\tEnter Name : ";
	cin>>name;
	cout<<"\t\tEnter Age : ";
	cin>>age;
	
	Student newStudent(rollno, name, age);
	students.push_back(newStudent);
	
	cout<<"\t\tStudent Added Successfully..."<<endl;
}

//create function to delete student from list
void deleteStudent(vector<Student> &students)
{
	string name;
	cout<<"\t\tEnter Name to Delete : ";
	cin.ignore();
	getline(cin, name);
	bool found = false;
	
	for(int i = 0; i < students.size(); i++)
	{
		if(students[i].getName() == name)
		{
			students.erase(students.begin() + i);
			cout<<"\t\tStudent Removed Successfully..."<<endl;
			found = true;
			break;
		}
	}
	if(!found)
	{
		cout<<"\t\tStudent Doesn't Exist"<<endl;
	}
}

int main()
{
	vector<Student> students;
	students.push_back(Student(1, "Pappu", 30));
	char option;
	
	do
	{
		system("cls");
		int choice;
		cout<<"\t\t<------------------------------->"<<endl;
		cout<<"\t\t   Student Management System"<<endl;
		cout<<"\t\t<------------------------------->"<<endl;
		cout<<"\t\t1. Add New Student"<<endl;
		cout<<"\t\t2. Display All Students"<<endl;
		cout<<"\t\t3. Search Student"<<endl;
		cout<<"\t\t4. Update Student"<<endl;
		cout<<"\t\t5. Delete Student"<<endl;
		cout<<"\t\t6. Exit"<<endl;
		cout<<"\t\tEnter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				addNewStudent(students);
				break;
			case 2:
				cout<<"\t\t<------------List  of Students----------->"<<endl;
				DisplayAllStudent(students);
				break;
			case 3:
				SearchStudent(students);
				break;	
			case 4:
				updateStudent(students);
				break;	
			case 5:
				deleteStudent(students);
				break;		
			case 6:
				exit(1);
			default:
				cout<<"\t\tInvalid Input..."<<endl;
		}
		cout<<"\t\tDo You Want to Continue [Yes / No] ? :";
		cin>>option;
	}while(option == 'y' || option == 'Y');

	
	return 0;
}
