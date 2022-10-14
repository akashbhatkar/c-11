
#include <iostream>
using namespace std;
class abc
{
    int i;
    int *p;
    public: abc()
    {
        cout<<"default constructor"<<endl;
    }
    
    abc(int x)
    {
        cout<<"parameterizes constructor"<<endl;
        i=x;
        p=new int[i];
    }
    
    abc(abc && obj)
    {
        cout<<"move constructor"<<endl;
        i=obj.i;
        p=obj.p;
        obj.p=nullptr;
        obj.i=0;
    }
    
    void operator =(abc&& obj1)
    {
        cout<<"move assignment"<<endl;
        i=obj1.i;
        p=obj1.p;
        obj1.p=nullptr;
        obj1.i=0;
    }
    ~abc()
    {
        delete []p;
    }
};
int main()
{
    abc obj2;
    abc obj3(10);
    obj2=move(obj3);
    abc obj4=move(obj2);
    
    
}
