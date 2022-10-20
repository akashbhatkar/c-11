#include <iostream>

using namespace std;
class base
{
public:
    virtual void display(int x)//final
    {
        cout<<"base "<<x<<endl;
    }
};

class derived final :public base
{
public:
    void display(int x)//if parent class overrided function is defined with final so we can not inherit it
    {
        cout<<"derived "<<x<<endl;
    }
};

/**derived2 class will show error because
 * we are declaring the derived class in a final keyword
 * the simple understanding behind the fonal keyword is that
 * if we declare any class or any function with final keyword after it then
 * that function or that class cannot be derived it is final ntill that stage only*/



//class derived2:public derived
//{
//public:derived2(){
//        cout<<"derived constructor"<<endl;
//    }
//    void display(int x)
//    {
//        cout<<"derived "<<x<<endl;
//    }
//};

int main()
{
    base *bptr=new derived();
    bptr->display(20);
//    derived2 d2;
//    d2.display(40);
}
