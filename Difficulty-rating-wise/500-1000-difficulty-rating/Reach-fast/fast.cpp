#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,K;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>K;
	    cout<<ceil(((double)abs(A-B))/K)<<endl;
	}
	return 0;
}