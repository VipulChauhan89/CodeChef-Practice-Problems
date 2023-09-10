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
	    int X;
	    cin>>X;
	    if(X<3)
	    {
	        cout<<"LIGHT"<<endl;
	    }
	    else if(X>=3 && X<7)
	    {
	        cout<<"MODERATE"<<endl;
	    }
	    else
	    {
	        cout<<"HEAVY"<<endl;
	    }
	}
	return 0;
}
