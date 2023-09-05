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
	    int X,Y;
	    cin>>X>>Y;
	    if(Y-X==0)
	    {
	        cout<<"NEUTRAL"<<endl;
	    }
	    else if(Y-X>0)
	    {
	        cout<<"PROFIT"<<endl;
	    }
	    else
	    {
	        cout<<"LOSS"<<endl;
	    }
	}
	return 0;
}
