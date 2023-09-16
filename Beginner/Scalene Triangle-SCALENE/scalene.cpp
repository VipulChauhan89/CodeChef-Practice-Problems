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
	    int A,B,C;
	    cin>>A>>B>>C;
	    (A!=B && B!=C && A!=C)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
