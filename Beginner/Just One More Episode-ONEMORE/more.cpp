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
	    int X;
	    cin>>X;
	    (X>24)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
