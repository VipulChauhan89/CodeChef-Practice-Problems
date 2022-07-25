/*
  Chef is very hungry. So, Chef goes to a shop selling burgers. The shop has 2 types of burgers:
        Normal burgers, which cost X rupees each
        Premium burgers, which cost Y rupees each (where Y>X)
  Chef has R rupees. Chef wants to buy exactly N burgers. He also wants to maximize the number of premium burgers he buys. 
  Determine the number of burgers of both types Chef must buy. Output −1 if it is not possible for Chef to buy N burgers.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,N,R;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>N>>R;
	    if((R/X)<N)
	    {
	        cout<<-1<<endl;
	    }
	    else if((R/Y)>=N)
	    {
	        cout<<0<<" "<<N<<endl;
	    }
	    else
	    {
	        int ans=(R-(Y*N))/(X-Y);
	        ((R-(Y*N))%(X-Y)==0)?cout<<ans<<" "<<N-ans<<endl:cout<<ans+1<<" "<<N-1-ans<<endl;
	    }
	}
	return 0;
}
