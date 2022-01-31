/*
  There is an ATM machine. Initially, it contains a total of K units of money.
  N people (numbered 1 through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Ai units of money.

  The people come in and try to withdraw money one by one, in the increasing order of their indices. 
  Whenever someone tries to withdraw money, if the machine has at least the required amount of money, it will give out the required amount. 
  Otherwise, it will throw an error and not give out anything; in that case, this person will return home directly without trying to do anything else.
  
  For each valid i, the i-th character of this string should be '1' if the i-th person will successfully withdraw their money or '0' otherwise.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K,i;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    int arr[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]<=K)
	        {
	            K-=arr[i];
	            cout<<"1";
	        }
	        else
	        {
	            cout<<"0";
	        }
	        
	    }
	    cout<<endl;
	    
	}
	return 0;
}
