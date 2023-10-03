#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int X;
	    cin>>X;
	    (X%10<5)?cout<<100-(X-(X%10))<<endl:cout<<100-(X+(10-(X%10)))<<endl;
	}
	return 0;
}
