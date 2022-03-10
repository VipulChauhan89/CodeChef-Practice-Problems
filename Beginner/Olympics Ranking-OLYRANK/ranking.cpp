/*
  In Olympics, the countries are ranked by the total number of medals won. 
  You are given six integers G1, S1, B1, and G2, S2, B2, the number of gold, silver and bronze medals won by two different countries respectively. 
  Program to determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,G1,S1,B1,G2,S2,B2;
	cin>>T;
	while(T--)
	{
	    cin>>G1>>S1>>B1>>G2>>S2>>B2;
	    if((G1+S1+B1)>(G2+S2+B2))
	    {
	        cout<<1<<endl;
	    }
	    else 
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
