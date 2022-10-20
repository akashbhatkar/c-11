#include <iostream>

using namespace std;
void print()
{

}
template<typename first,typename... second>
void print(first a,second... b)
{
    cout<<a<<" ";
    print(b...);

}
int main()
{
    print(10,39.43,"akash","k");
}
