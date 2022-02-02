/*
  Pogram to help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,B,Max,l,b,p;
	cin>>T;
	while(T--)
	{
	    cin>>N>>B;
	    Max=0;
	    while(N--)
	    {
	        cin>>l>>b>>p;
	        if(p<=B)
	        {
	            Max=max(Max,l*b);
	        }
	    }
	    if(Max==0)
	    {
	        cout<<"no tablet"<<endl;
	    }
	    else
	    {
	        cout<<Max<<endl;
	    }
	}
	return 0;
}
