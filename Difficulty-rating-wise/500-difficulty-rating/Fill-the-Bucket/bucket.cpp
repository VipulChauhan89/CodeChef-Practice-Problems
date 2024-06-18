#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,K;
	cin>>T;
	while(T--)
	{
	    cin>>X>>K;
	    cout<<X-K<<endl;
	}
	return 0;
}