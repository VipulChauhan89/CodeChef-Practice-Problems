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
	    (X*4<=1000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
