/*
    Alice and Bob play the classic game of odds and evens. In this game, each of the two players choose a number between 1 and 5 without revealing to their opponent. 
    Both of the players then simultaneously reveal their number by holding up that many fingers of their hand. Then the winner is decided based upon whether the sum of numbers played by both the players is odd or even. 
    In this game we assume that if the sum is odd then Alice wins, otherwise Bob wins.If Alice held up a fingers and Bob held up b fingers, determine who won the game.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,a,b;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b;
	    ((a+b)%2==0)?cout<<"Bob"<<endl:cout<<"Alice"<<endl;
	}
	return 0;
}