/*
  Pushpa has entered Chefland and wants to establish Pushpa-Raj here too. Chefland has N towers where the height of the ith tower is Hi. 
  To establish Pushpa-Raj, Pushpa does the following:
            Initially, Pushpa chooses any tower i (1≤i≤N) and lands on the roof of that tower.
            Let X denote the height of the tower Pushpa is currently on, then, Pushpa can land on the roof of any tower j (1≤j≤N) such that the height of the jth tower is (X+1).
            Let i denote the index of the tower on which Pushpa lands, then, the height of all towers except tower i increases by 1 after each jump including the initial jump.

  To establish Pushpa-Raj, Pushpa wants to land at the maximum height possible. Determine the maximum height Pushpa can reach.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    vector<int> H(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>H[i];
	    }
	    sort(H.begin(),H.end());
	    if(N==1)
	    {
	        cout<<H[0]<<endl;
	    }
	    else
	    {
	        int mx=0,count=0;
	        for(int i=N-1;i>0;i--)
	        {
	            if(H[i]==H[i-1])
	            {
	                count++;
	            }
	            else
	            {
	                if(mx<H[i]+count)
	                {
	                    mx=H[i]+count;
	                }
	                count=0;
	            }
	        }
	        cout<<mx<<endl;
	    }
	}
	return 0;
}
