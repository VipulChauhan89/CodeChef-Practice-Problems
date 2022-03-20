/*
  In a season, each player has three statistics: runs, wickets, and catches. 
  Given the season stats of two players A and B, denoted by R, W, and C respectively, the person who is better than the other in the most statistics is regarded as the better overall player. 
  Program to tell who is better amongst A and B . It is known that in each statistic, the players have different values.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,R1,R2,W1,W2,C1,C2,A,B;
	cin>>T;
	while(T--)
	{
        A=0;
        B=0;
	    cin>>R1>>W1>>C1>>R2>>W2>>C2;
	    if(R1>R2)
	    {
	        A++;
	    }
	    else 
	    {
	        B++;
	    }
	    if(W1>W2)
	    {
	        A++;
	    }
	    else
	    {
	        B++;
	    }
	    if(C1>C2)
	    {
	        A++;
	    }
	    else
	    {
	        B++;
	    }
	    if(A>B)
	    {
	        cout<<"A"<<endl;
	    }
	    else
	    {
	        cout<<"B"<<endl;
	    }
	}
	return 0;
}
