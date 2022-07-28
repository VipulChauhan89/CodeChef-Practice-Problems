/*
  Kulyash stays in room that has a single bulb and N buttons. The bulb is initially on.
  The initial states of the buttons are stored in a binary string S of length N — if Si is 0, the i-th button is off, and if Si is 1, the i-th button is on. 
  If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.
  Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string R of length N. He asks you to determine the final state of the bulb.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string S,R;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>N>>S>>R;
	    for(int i=0;i<N;i++)
	    {
	        if(S[i]!=R[i])
	        {
	            count++;
	        }
	    }
	    (count%2==0)?cout<<1<<endl:cout<<0<<endl;
	}
	return 0;
}
