#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,C;
	cin>>T;
	while(T--)
	{
	    cin>>C;
	    cout<<((C>20)?"HOT":"COLD")<<endl;
	}
	return 0;
}