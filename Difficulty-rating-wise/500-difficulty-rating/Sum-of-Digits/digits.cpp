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
	    cin>>N;
	    int sum=0;
	    while(N!=0)
	    {
	        int digit=N%10;
	        sum+=digit;
	        N/=10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}