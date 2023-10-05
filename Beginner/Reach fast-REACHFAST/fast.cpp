#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y,K;
	    cin>>X>>Y>>K;
	    if(X==Y)
	    {
	        cout<<0<<endl;
	    }
	    else if(abs(X-Y)%K==0)
	    {
	        cout<<abs(X-Y)/K<<endl;
	    }
	    else
	    {
	        cout<<(abs(X-Y)/K)+1<<endl;
	    }
	}
	return 0;
}
