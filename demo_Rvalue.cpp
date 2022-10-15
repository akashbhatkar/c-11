//WAP to demonstrate ravlue reference in c++11
#include <iostream>

using namespace std;
void display( int &x)
{   //whenever call of the function is for l value this 
    //fintion will be called. single reference need to use 
    cout<<"L value "<<x<<endl;
}
void display(int &&x)
{
    //whenever call of the function is for R value this 
    //fintion will be called. double reference must be used
     cout<<"R value "<<x<<endl;
}

int main()
{
    int b=20;
    //making reference of l value b;
    int &x=b;
    cout<<"b= "<<b<<endl<<"x= "<<x;
    
    //making reference of r value 20
    int &&r=20;
    
    cout<<"r="<<r<<endl;
    //calling the functions
    display(b);
    display(10);
}
