/*
  It is the final day of La Liga. Chef has a certain criteria for assessing football matches.In particular, he only likes a match if:
          The match ends in a draw, and,
          At least one goal has been scored by either team.
  Given the goals scored by both the teams as X and Y respectively, determine whether Chef will like the match or not.
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
	   (X==Y && X>0 && Y>0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
