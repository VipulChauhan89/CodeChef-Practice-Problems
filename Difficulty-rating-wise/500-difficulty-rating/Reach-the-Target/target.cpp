#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,Y,X;
	cin>>T;
	while(T--)
	{
	    cin>>Y>>X;
	    cout<<Y-X<<endl;
	}
	return 0;
}