#include<iostream>
using namespace std;

class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
            showObject();
        }
        void showObject()
        {
            system("cls");
            cout<<"Total object is: "<<count<<endl;
        }
};

int Counter :: count = 0;

int main()
{
    Counter C1, C2, C3, C4, C5;
    
    return 0;
}
