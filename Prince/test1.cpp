#include<iostream>
using namespace std;
class test
{
    int x=20;
    char sname[20]="aquib";
    public:
    void show()
    {
        cout<<"name : "<<sname;
        cout<<"\nValue : "<<x;
    }
    
};
int main()
{
    test t1;
    t1.show();
    test t2=t1;
    cout<<endl;
    t2.show();
}