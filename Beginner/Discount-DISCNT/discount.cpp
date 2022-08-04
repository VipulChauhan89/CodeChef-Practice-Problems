//Alice buys a toy with a selling price of 100 rupees. There is a discount of xpercent on the toy. Find the amount Alice needs to pay for it.
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,x;
	cin>>T;
	while(T--)
	{
	    cin>>x;
	    cout<<100-x<<endl;
	}
	return 0;
}
