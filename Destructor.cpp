#include<iostream>
using namespace std;


class Test
{
    public:
        Test()
        {
            cout<<"Constructor is called.."<<endl;
        }
        ~Test()
        {
            cout<<"Destructor is called..."<<endl;
        }
};

void objCreate()
{
    Test T1, T2;
}

int main()
{
    objCreate();
    cout<<"Back in main..."<<endl;
    system("pause");
    Test T3;
    
    return 0;
}
