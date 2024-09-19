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
		String (const char s[])
		{
			strcpy(str, s);
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
	String s1 = "Hello";
	String s2 = "World";
	
	s1.display();
	s2.display();
	
	String s3;
	s3 = s1 + s2;
	s3.display();
	
	return 0;
}
