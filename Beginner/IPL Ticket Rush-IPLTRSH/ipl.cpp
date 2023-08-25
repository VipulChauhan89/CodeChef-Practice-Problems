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
	    int N,M;
	    cin>>N>>M;
	    (M-N<0)?cout<<abs(M-N)<<endl:cout<<0<<endl;
	}
	return 0;
}
