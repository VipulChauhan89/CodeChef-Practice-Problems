/*
  Alice has recently learned in her economics class that the market is said to be in equilibrium when the supply is equal to the demand.
  Alice has market data for N time points in the form of two integer arrays S and D. 
  Here, Si denotes the supply at the ith point of time and Di denotes the demand at the ith point of time, for each 1≤i≤N.
  
  Program to help Alice in finding out the number of time points at which the market was in equilibrium.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,i,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    int S[N],D[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>S[i];
	    }
	    for(i=0;i<N;i++)
	    {
	        cin>>D[i];
	        if(S[i]==D[i])
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
