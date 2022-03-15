/*
  In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.
  You are given the distances for all 3 throws of a player. 
  
  Program to determine the final score of the player.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<max(A,max(B,C))<<endl;
	}
	return 0;
}
