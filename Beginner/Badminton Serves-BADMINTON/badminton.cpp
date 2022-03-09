/*
  Chef is playing badminton today. The service rules of this singles game of badminton are as follows:

  The player who starts the game serves from the right side of their court.
  Whenever a player wins a point, they serve next.
  If the server has won an even number of points during a game, then they will serve from the right side of the service court for the subsequent point.

  Chef will be the player who begins the game.

  Given the number of points P obtained by Chef at the end of the game.
  Program to determine how many times Chef served from the right side of the 
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,P;
	cin>>T;
	while(T--)
	{
	    cin>>P;
	    cout<<(P/2)+1<<endl;
	}
	return 0;
}
