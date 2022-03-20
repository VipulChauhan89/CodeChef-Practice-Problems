/*
  Chef has three spells. Their powers are A, B, and C respectively. 
  Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P.
  Before going to sleep, Chef wants to use exactly two spells out of these three. 
  
  Program to find the maximum number of hit points Chef can have after using the spell.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	long int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    cout<<A+B+C-min(A,min(B,C))<<endl;
	}
	return 0;
}
