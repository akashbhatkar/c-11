#include <iostream>

using namespace std;

int main()
{
    int x=5,y=10;
    //normal decalaration of normal hello world lambda function
    [](){std::cout<<"hello world"<<endl;}();

    //return taken from the lambda function
    int f=[](int a,int b)->int{return a+b;}(10,30);
    cout<<f<<endl;
    
    //using capture list
    //capturing a and b values
    [x,y](){cout<<x<<y<<endl;}();
    
    //we can not modify captured value in the function 
    //to modify values have to take the reference 
    
    [&x,y](){cout<<++x<<y<<endl;}();//if we want to modify spacific value take reference
                                    //to the same variable only
    //if we want to capture and modify all the values 
    //then take reference symbol only
    [&](){cout<<++x<< ++y<<endl;}();
    
    
    //giving name to the lambda function
    auto fun=[](){
        cout<<"hello world"<<endl;
    };
    
    fun();//calling the finction by given name 
    fun();
    fun();

}
