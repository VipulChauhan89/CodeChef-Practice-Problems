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
	    int G,B;
	    cin>>G>>B;
	    cout<<B-G<<endl;
	}
	return 0;
}
