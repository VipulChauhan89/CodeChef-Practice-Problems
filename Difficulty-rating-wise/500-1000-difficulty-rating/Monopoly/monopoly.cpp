#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,P,Q,R,S;
	cin>>T;
	while(T--)
	{
	    cin>>P>>Q>>R>>S;
	    int sum=P+Q+R+S;
	    cout<<((sum-P<P || sum-Q<Q || sum-R<R || sum-S<S)?"YES":"NO")<<endl;
	}
	return 0;
}