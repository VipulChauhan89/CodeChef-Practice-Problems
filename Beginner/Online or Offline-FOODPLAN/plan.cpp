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
	    double N,M;
	    cin>>N>>M;
	    N=N*0.9;
	    if(N==M)
	    {
	        cout<<"EITHER"<<endl;
	    }
	    else if(N<M)
	    {
	        cout<<"ONLINE"<<endl;
	    }
	    else
	    {
	        cout<<"DINING"<<endl;
	    }
	}
	return 0;
}
