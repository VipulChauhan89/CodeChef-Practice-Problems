#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>K;
	    cout<<((M-K>=N)?"Yes":"No")<<endl;
	}
	return 0;
}