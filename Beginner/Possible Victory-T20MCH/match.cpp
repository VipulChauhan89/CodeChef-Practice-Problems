/*
  Chef is in Team B. Team A has already played their 20 overs, and have gotten a score of R. 
  Chef's Team B has started playing, and have already scored C runs in the first O overs. 
  In the remaining 20−O overs, find whether it is possible for Chef's Team B to get a score high enough to win the game. 
  Program to find the final score that is strictly larger than R?
*/
#include <iostream>
using namespace std;

int main() 
{
	int R,O,C,sum=0;
	cin>>R>>O>>C;
	sum=C+(20-O)*36;
	if(sum>R)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
	return 0;
}
