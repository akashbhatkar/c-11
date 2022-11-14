/******* WAP TO DEMONSTRATE THE INITILIZER LIST *****************/

#include <iostream>

using namespace std;

class base
{
  int a;
  float a1,a2,a3;
  public: 
  
  base(int b):a{b}
  {
      cout<<"base class constructor"<<endl;
  }
 
  
  base (float f,float f2,float f3): a1{f},a2{f2},a3{f3}// initializer list 
  {}
   void show()
  {
      cout<<a1<<endl<<a2<<endl<<a3<<endl;
  }
  
};

class derived: public base
{
    public: 
    derived():base(10)// initializing base class default constructor with initializer list
    {
        cout<<"derived class constructor"<<endl;
    }
    
    
};
int main()
{
    derived d;
    base *bd=new base (10.8,25.6,34.2);
    bd->show();
}