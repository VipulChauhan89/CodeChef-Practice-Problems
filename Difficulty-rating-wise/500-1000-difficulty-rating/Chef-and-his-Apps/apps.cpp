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