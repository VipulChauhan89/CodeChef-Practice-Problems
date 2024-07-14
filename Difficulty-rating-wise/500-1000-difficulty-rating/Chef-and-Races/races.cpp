#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>A>>B;
	    int ans=0;
	    ans+=(A==X || A==Y)?1:0;
	    ans+=(B==X || B==Y)?1:0;
	    cout<<2-ans<<endl;
	}
	return 0;
}