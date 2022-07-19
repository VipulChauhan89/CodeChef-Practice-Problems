/*
  Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.
  There are X levels remaining in the game, and each level takes Chef Y minutes to complete. 
  To protect against eye strain, Chef also decides that every time he completes 3 levels, he will take a Z minute break from playing. 
  Note that there is no need to take this break if the game has been completed. How much time (in minutes) will it take Chef to complete the game?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    (X%3==0)?cout<<X*Y+((X/3)-1)*Z<<endl:cout<<X*Y+(X/3)*Z<<endl;
	}
	return 0;
}
