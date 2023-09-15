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
	    (X>=Y)?cout<<Y<<endl:cout<<X+(Y-X)*2<<endl;
	}
	return 0;
}
