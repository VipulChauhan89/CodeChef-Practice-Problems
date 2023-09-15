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
	    int X,Y;
	    cin>>X>>Y;
	    cout<<(X/10)+Y<<endl;
	}
	return 0;
}
