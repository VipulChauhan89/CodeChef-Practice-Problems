/*
  You are given two sequences A1,A2,…,AN and B1,B2,…,BN. 
  For each valid i, player i scored Ai goals and committed Bi fouls. 
  For each goal, the player that scored it gets 20 points, and for each foul, 10 points are deducted from the player that committed it. 
  However, if the resulting number of points of some player is negative, this player will be considered to have 0 points instead.

  Program to calculate the total number of points gained by each player and tell Alex the maximum of these values.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,i;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int A[N];
	    int B[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	        A[i]=A[i]*20;
	    }
	    for(i=0;i<N;i++)
	    {
	        cin>>B[i];
	        A[i]=A[i]-(B[i]*10);
	        if(A[i]<0)
	        {
	            A[i]=0;
	        }
	    }
	    sort(A,A+N);
	    cout<<A[N-1]<<endl;
	}
	return 0;
}
