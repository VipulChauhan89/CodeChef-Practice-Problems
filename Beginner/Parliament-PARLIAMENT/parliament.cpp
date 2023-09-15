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
	    int N,X;
	    cin>>N>>X;
	    (X>=N-X)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
