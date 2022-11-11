/*********WAP FOR THE FUNCTORS *****************/

#include <iostream>

using namespace std;

class functor
{
  public: functor(){}
  
  int operator ()(int a,int b)
  {
      return a+b;
      
  }
};

int main()
{
   functor fn;
   cout<<fn(10,20);
}

/*A C++ functor (function object) is a class or struct object that can be called like a function.

It overloads the function-call operator () and allows us to use an object like a function. */