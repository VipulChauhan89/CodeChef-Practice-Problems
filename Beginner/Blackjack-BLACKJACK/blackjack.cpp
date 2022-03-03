/*
  Chef is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10inclusive). 
  Chef wins the game when the sum of these 3 numbers is exactly 21.

  Given the first two numbers A and B, that have been drawn by Chef, 
  what should be 3-rd number that should be drawn by the Chef in order to win the game?

  Note that it is possible that Chef cannot win the game, no matter what is the 3-rd number. 
  In such cases, report −1 as the answer.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    C=21-A-B;
	    if(C>0 && C<=10)
	    {
	        cout<<C<<endl;
	    }
	    else
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
