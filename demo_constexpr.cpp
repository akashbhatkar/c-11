/**/
#include <iostream>

using namespace std;

constexpr int add(int a,int b){return a+b;}



int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;

    cout<<add(a,b)<<endl;//first call
    /*in the above function call we have to take the input paramaters at the runtime
     * hence at this call the motive of the constexpr will not satisfy */


    cout<<add(10,20)<<endl;//second call
    /*in the second call of the function we are giving the inputs directly hence at this point
     * the function will be called at the compile time and this is the main m0oto to use the constexpr*/

}
