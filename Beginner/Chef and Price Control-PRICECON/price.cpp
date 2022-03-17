/*
  Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. 
  Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.

  However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi to K.
  Chef's revenue is the sum of prices of all the items he sells. 
  
  Program to find the amount of revenue which Chef loses because of this price ceiling.
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
	    int P[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>P[i];
	        if(P[i]>K)
	        {
	            sum+=P[i]-K;
	        }  
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
