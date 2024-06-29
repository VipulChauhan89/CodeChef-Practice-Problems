#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<((X%N==0)?"YES":"NO")<<endl;
	}
	return 0;
}