/*
  It's the soccer match finals in Chefland and as always it has reached the penalty shotouts. 
  Each team is given 5 shots to make and the team scoring a goal on the maximum number of shots wins the game. 
  If both the teams' scores are equal, then the game is considered a draw and we would have 2 champions.

  Given ten integers A1,A2,…,A10, where the odd indexed integers(A1,A3,A5,A7,A9) represent the outcome of the shots made by team 1 and even indexed integers(A2,A4,A6,A8,A10) represent the outcome of the shots made by team 2(here Ai=1 indicates that it's a goal and Ai=0 indicates a miss), 
 
 Progam to determine the winner or find if the game ends in a draw.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int A[10];
	    int c1=0,c2=0;
	    for(int i=0;i<10;i++)
	    {
	        cin>>A[i];
	        if(i%2==0 && A[i]==1)
	        {
	            c1++;
	        }
	        else if(i%2==1 && A[i]==1)
	        {
	            c2++;
	        }
	    }
	    if(c1==c2)
	    {
	        cout<<0<<endl;
	    }
	    else if(c1>c2)
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
