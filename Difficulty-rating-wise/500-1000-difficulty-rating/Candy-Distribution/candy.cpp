#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    cout<<((N%M==0)?(((N/M)%2==0)?"Yes":"No"):"No")<<endl;
	}
	return 0;
}