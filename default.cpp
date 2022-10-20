
#include <iostream>

using namespace std;
class A{
    public: A(int a){
        cout<<a<<endl;
    }
    A(){}//=default;
};
int main()
{
   A a;
   A(10);
}

/*by using default keyword with the constructo we are forcing the compilor to 
create a default constructor for our program */