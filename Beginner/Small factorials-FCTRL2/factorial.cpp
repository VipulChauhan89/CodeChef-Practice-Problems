//program to print the factorial
#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>   //header file to use cpp_int
using namespace boost::multiprecision;        //namespace to use cpp_int
using namespace std; 
cpp_int factorial(cpp_int n)
{
    if(n==1)
    {
        return n;
    }
    return n*factorial(n-1);
}
int main()
{
    int T,num;
    cin>>T; 
    while(T--)
    { 
        cin>>num; 
        cout<<factorial(num)<<endl; 
    } 
    return 0; 
}
