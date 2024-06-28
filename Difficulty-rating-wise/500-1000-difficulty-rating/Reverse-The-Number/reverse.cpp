#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    int rev=0,rem;
	    cin>>N;
	    while(N!=0)
	    {
	        rem=N%10;
	        rev=rem+rev*10;
	        N/=10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}