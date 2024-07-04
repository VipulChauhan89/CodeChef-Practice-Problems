#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,P,Q;
	cin>>T;
	while(T--)
	{
	    cin>>P>>Q;
	    int val=P+Q;
	    if(val%4==0 || val%4==1)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(val%4==2 || val%4==3)
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}