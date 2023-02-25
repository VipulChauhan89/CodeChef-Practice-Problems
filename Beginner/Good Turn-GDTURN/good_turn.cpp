#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    (X+Y>6)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}