/*
  Alice has recently started playing Chess. Her current rating is X. She noticed that when she wins a game, her rating increases by 8 points.
  Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to Y ?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    Y=Y-X;
	    (Y%8!=0)?cout<<(Y/8)+1<<endl:cout<<Y/8<<endl;
	}
	return 0;
}
