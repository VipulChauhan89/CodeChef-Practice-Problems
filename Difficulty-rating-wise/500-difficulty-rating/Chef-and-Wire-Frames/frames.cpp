#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>X;
	    cout<<(2*(N+M)*X)<<endl;
	}
	return 0;
}