/*
  You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. 
  You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop N−1, and so on.

  The process ends when someone cannot make the next jump because the hoop is occupied by the other person. 
  Program to find the last hoop that will be jumped into.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<(N/2)+1<<endl;
	}
	return 0;
}
