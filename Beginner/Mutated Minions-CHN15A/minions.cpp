/*
  Each minion has an intrinsic characteristic value (similar to our DNA), which is an integer. 
  The transmogrifier adds an integer K to each of the minions' characteristic value.
  Gru knows that if the new characteristic value of a minion is divisible by 7, then it will have Wolverine-like mutations.
  Given the initial characteristic integers of N minions, all of which are then transmogrified, find out how many of them become Wolverine-like.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>N>>K;
	    int a[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	        if((a[i]+K)%7==0)
	        {
	            sum++;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
