/*
  There are a total of N players who are competing in the Squid Game, numbered from 1 to N. 
  When the ith player gets eliminated from the game, Ai amount of money is added to the prize pool. 
  The game is played until N−1 players get eliminated, and the only player left is declared as the winner. 
  The winner gets all the money present in the prize pool.

  You are given an array A consisting of N elements, where Ai denotes the prize money added to the prize pool when the ith player gets eliminated from the game.
  Program to find the maximum prize that the winner can get, given that you can choose any player to be the winner.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	    }
	    sort(A,A+N);
	    cout<<sum-A[0]<<endl;
	}
	return 0;
}
