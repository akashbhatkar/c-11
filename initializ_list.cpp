/********* WAP FOR DEMONSTRATE INITIALIZER LIST ******************/

#include <iostream>

using namespace std;
class A
{
public:
    A(const initializer_list<char> &value)
    {
        for(const auto& value:value)
        {
            cout<<value<<" ";
        }
    }
    A(const initializer_list<string> &a)
    {
        for(const auto& a:a)
        {
            cout<<a<<"  ";
        }
    }
};

int main()
{
    A obj={71,72,73,74,75,'&','5'};// for initializing the more than one members                                         //directly we can use initalizer list
    A obj2={"abc","bca"};
    return 0;
}
