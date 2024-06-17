#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,x;
	cin>>T;
	while(T--)
	{
	    cin>>x;
	    cout<<(100-x)<<endl;
	}
	return 0;
}