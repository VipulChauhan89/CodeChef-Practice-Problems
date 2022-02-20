/*
  It's IPL time and as usual RCB are finding it tough to qualify for playoffs. 
  RCB needs a minimum of X more points to qualify for playoffs in their remaining Y matches. 
  A win, tie and loss in a match will yield 2,1,0 points respectively to a team.

  Program to find the minimum number of matches RCB needs to win to qualify for playoffs. 
  It is guaranteed that RCB will qualify for playoffs if they win all their remaining Y matches.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<max(0,X-Y)<<endl;
	    
	}
	return 0;
}
