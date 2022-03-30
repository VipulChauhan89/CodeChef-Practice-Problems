/*
  “You won’t get caught if you hide behind someone.”
  Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot. Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. 
  Gi-Hun and Ali both have the same height, K. Many players saw this trick and also started hiding behind Ali.
  Now, there are N players standing between Gi-Hun and Ali in a straight line, with the ith player having height Hi. 
  Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.
  
  Program to find minimum number of players who need to get shot so that Ali is visible in Gi-Hun's line of sight.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N>>K;
	    int H[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>H[i];
	        if(H[i]>K)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
