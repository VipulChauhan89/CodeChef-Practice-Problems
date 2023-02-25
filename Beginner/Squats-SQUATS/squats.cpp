#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	unsigned long long int X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<X*15<<endl;
	}
	return 0;
}