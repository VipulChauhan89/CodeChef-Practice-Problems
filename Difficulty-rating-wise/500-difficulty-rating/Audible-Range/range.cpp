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
	    cout<<((X>66 && X<45001)?"YES":"NO")<<endl;
	}
	return 0;
}