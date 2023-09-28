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
	    double X;
	    cin>>X;
	    X*=.2;
	    cout<<ceil(100/X)<<endl;
	}
	return 0;
}
