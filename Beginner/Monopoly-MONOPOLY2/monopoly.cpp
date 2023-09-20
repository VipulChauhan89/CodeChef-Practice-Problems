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
	    int P,Q,R,S;
	    cin>>P>>Q>>R>>S;
	    int sum=P+Q+R+S;
	    (P>sum-P || Q>sum-Q || R>sum-R || S>sum-S)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
