#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<factorial(N)<<endl;
	}
	return 0;
}