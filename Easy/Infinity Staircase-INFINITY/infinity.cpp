/*
  You are climbing an infinity staircase, which (as its name suggests) has an infinite number of steps. 
  You are currently standing at the st step, and you would like to reach the N-th step. 
  When standing at the i-th step, you can make one of the following three moves:
          Move to step i+1
          Move to step i+2
          Move to step i+3
  However, you can't make the same move twice in a row.
  Under these conditions, find the minimum number of moves you need to reach the N-th step.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(N<2)
	    {
	        cout<<0<<endl;
	    }
	    else if(N==2 || N==3)
	    {
	        cout<<1<<endl;
	    }
	    else if(N%5==0 || N%5==1)
	    {
	        cout<<(N/5)*2<<endl;
	    }
	    else
	    {
	        cout<<((N/5)*2)+1<<endl;
	    }
	}
	return 0;
}
