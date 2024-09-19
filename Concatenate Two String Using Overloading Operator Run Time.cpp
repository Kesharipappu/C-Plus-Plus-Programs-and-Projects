#include<iostream>
#include<string.h>
using namespace std;

class String
{
	private:
		char str[50];
	public:
		String()
		{
			strcpy(str, "");
		}
		String (char s[])
		{
			strcpy(str, s);
		}
		void getStr()
		{
			cout<<"Enter String :";
			cin.getline(str, 50);
		}
		String operator + (String obj)
		{
			String temp;
			if(strlen(temp.str) + strlen(obj.str) < 50)
			{
				strcpy(temp.str, str);
				strcat(temp.str, obj.str);
			}
			else
			{
				cout<<"String overflow"<<endl;
				exit(1);
			}
			return temp;
		}
		void display()
		{
			cout<<str<<endl;
		}
};

int main()
{
	String s1;
	String s2;
	
	cout<<"Enter string of object 1"<<endl;
	s1.getStr();
	cout<<"Enter string of object 2"<<endl;
	s2.getStr();
	
	s1.display();
	s2.display();
	
	String s3;
	s3 = s1 + s2;
	s3.display();
	
	return 0;
}
