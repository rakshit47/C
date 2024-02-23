#include <iostream>
using namespace std;

class stud{
  int a,b;
  public:
  void display();

    stud(){
      a=5;
      b=10;
    }
    stud(int x,int y)
    {
      a = x;
      b = y;
    }

    stud(stud &s1)
    {
      a = s1.a;
      b = s1.b;
    }

    friend void show (stud);
   void operator++()//unary operator
   {
       a = a + 10;
       b = b + 20;
   }
   void operator+(stud s1)
   { //binary operator
       a = s1.a + a;
       b = s1.b + b;
   }
};
    
void show(stud s)
{
    cout<<s.a<<" "<<s.b<<endl;
} 
   
void stud::display()
{
    cout<<"Sum of two digits is :"<<a+b<<endl;
}

int main()
{
   stud s1,s2(10,20),s3(s2),s4,s5;
   show(s1);
   s1.display();
   show(s2);
   ++s4;
   show(s4);
   s2.display();
   show(s3);
   s1+s2;
   show(s1);
   return 0;
}
