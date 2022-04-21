/*
  Tonmoy has a special torch. The torch has 4 levels numbered 1 to 4 and 2 states (𝙾𝚗 and 𝙾𝚏𝚏). 
  Levels 1,2, and 3 correspond to the 𝙾𝚗 state while level 4 corresponds to the 𝙾𝚏𝚏 state.
  The levels of the torch can be changed as:
        Level 1 changes to level 2.
        Level 2 changes to level 3.
        Level 3 changes to level 4.
        Level 4 changes to level 1.
  Given the initial state as K and the number of changes made in the levels as N, find the final state of the torch. 
  If the final state cannot be determined, print 𝙰𝚖𝚋𝚒𝚐𝚞𝚘𝚞𝚜 instead.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    if(K)
	    {
	        if(N%4==0)
	        {
	            cout<<"On"<<endl;
	        }
	        else
	        {
	            cout<<"Ambiguous"<<endl;
	        }
	    }
	    else
	    {
	        if(N%4==0)
	        {
	            cout<<"Off"<<endl;
	        }
	        else
	        {
	            cout<<"On"<<endl;
	        }
	    }
	}
	return 0;
}
