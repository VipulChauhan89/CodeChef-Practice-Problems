//Program for each test case, output the minimum possible difference between the number of apples and oranges that Chef can achieve.
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>K;
	    if(abs(N-M)<=K)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<abs(N-M)-K<<endl;
	    }
	}
	return 0;
}
