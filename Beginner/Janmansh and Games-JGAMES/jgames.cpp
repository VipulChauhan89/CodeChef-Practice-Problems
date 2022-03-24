/*
  Janmansh and Jay are playing a game. They start with a number X and they play a total of Y moves. 
  Janmansh plays the first move of the game, after which both the players make moves alternatingly.
  In one move, a player can increment or decrement X by 1.
  If the final number after performing Y moves is even, then Janmansh wins otherwise, Jay wins. 
  
  Program to determine the winner of the game if both the players play optimally.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    if((X+Y)%2==0)
	    {
	        cout<<"Janmansh"<<endl;
	    }
	    else
	    {
	        cout<<"Jay"<<endl;
	    }
	}
	return 0;
}
