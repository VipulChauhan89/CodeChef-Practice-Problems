/*
    Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.
    He wants to install another app on his phone whose memory requirement is Z MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,S,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>S>>X>>Y>>Z;
	    if(S>=X+Y+Z)
	    {
	        cout<<0<<endl;
	    }
	    else if(Z<=S-X || Z<=S-Y)
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