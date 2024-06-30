#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,D;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>D;
	    cout<<max(A,B)+max(C,D)<<endl;
	}
	return 0;
}