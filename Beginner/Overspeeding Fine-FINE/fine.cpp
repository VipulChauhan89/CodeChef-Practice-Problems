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
	    if(X<=70)
	    {
	        cout<<"0"<<endl;
	    }
	    else if(X>70 && X<=100)
	    {
	        cout<<"500"<<endl;
	    }
	    else
	    {
	        cout<<"2000"<<endl;
	    }
	}
	return 0;
}
