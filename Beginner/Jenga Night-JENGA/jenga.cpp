/*
  Chef hosts a party for his birthday. There are N people at the party. All these N people decide to play Jenga.
  There are X Jenga tiles available. In one round, all the players pick 1 tile each and place it in the tower.
  The game is valid if:
        All the players have a tile in each round;
        All the tiles are used at the end.
  Given N and X, find whether the game is valid.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    (N<=X && X%N==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
