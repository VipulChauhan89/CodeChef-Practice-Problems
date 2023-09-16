#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    cout<<min(10*X,Y)*Z<<endl;
	}
	return 0;
}
