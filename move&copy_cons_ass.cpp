#include <iostream>

using namespace std;

class xyz
{
    int a,*b;
public: xyz()
    {
        cout<<"default constructor"<<endl;
    }
    xyz(int  x)
    {
        cout<<"parameterized constructor "<<endl;
        a=x;
        b=new int[a];

    }
    xyz (const xyz& obj)
    {
        cout<<"copy  constructor"<<endl;
        a=obj.a;
        b=new int [a];
    }

    void operator =(const xyz &obj1)
    {
        cout<<"copy assignment operator"<<endl;
        a=obj1.a;
        b=new int [a];

    }
   void display()
   {
       cout<<endl<<a<<endl;
   }
   void operator = (xyz&& obj2)
   {
       cout<<"move assignment operator"<<endl;
       a=obj2.a;
       b=obj2.b;
       b=nullptr;
       a=0;
   }
   xyz(xyz && obj3)
   {
       cout<<"move constructor"<<endl;
       a=obj3.a;
       b=obj3.b;
       b=nullptr;
       a=0;
   }
};

int main()
{
    xyz a;
    xyz b(10);
    a=b;
    xyz c(move(a));
    a=move(b);
    a.display();
    b.display();
    a=b;
    a.display();
    b.display();
    xyz d(move(b));

}
