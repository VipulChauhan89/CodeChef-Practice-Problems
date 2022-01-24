/*
  Chef Two and Chef Ten are playing a game with a number X.
  In one turn, they can multiply X by 2. 
  The goal of the game is to make X divisible by 10.

  Help the Chefs find the smallest number of turns necessary to win the game (it may be possible to win in zero turns) or determine that it is impossible.
  For each test case, print a single line containing one integer — the minimum required number of turns or −1 if there is no way to win the game.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,num;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    if(num%10==0)
	    {
	        cout<<0<<endl;
	    }
	    else if(num%10==5)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
