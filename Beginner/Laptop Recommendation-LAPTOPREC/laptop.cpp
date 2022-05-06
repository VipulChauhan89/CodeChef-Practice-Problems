/*
  Chef wants to buy a new laptop. However, he is confused about which laptop to buy out of 10 different laptops. 
  He asks his N friends for their recommendation. The ith friend recommends the Chef to buy the Aith laptop (1≤Ai≤10).

  Chef will buy the laptop which is recommended by maximum number of friends. Determine which laptop Chef buys.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    vector<int> A(11);
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        A[num]++;
	        
	    }
	    vector<int> B=A;
	    sort(B.begin(),B.end());
	    if(B[10]>B[9])
	    {
	        for(int i=0;i<11;i++)
	        {
	            if(A[i]==B[10])
	            {
	                cout<<i<<endl;
	            }
	        }
	    }
	    else
	    {
	        cout<<"CONFUSED"<<endl;
	    }
	}
	return 0;
}
