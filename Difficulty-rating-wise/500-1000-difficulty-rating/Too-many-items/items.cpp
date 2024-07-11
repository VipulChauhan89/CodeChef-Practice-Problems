#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<ceil(N/10)<<endl;
	}
	return 0;
}