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
	    int X,Y;
	    cin>>X>>Y;
	    (15*X>=2*Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
