#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,G,B;
	cin>>T;
	while(T--)
	{
	    cin>>G>>B;
	    cout<<B-G<<endl;
	}
	return 0;
}