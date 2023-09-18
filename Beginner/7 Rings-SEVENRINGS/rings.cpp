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
	    ((N*X)/5>=2000 && (N*X)/5<20000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
