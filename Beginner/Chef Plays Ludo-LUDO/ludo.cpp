#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    (X==6)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}