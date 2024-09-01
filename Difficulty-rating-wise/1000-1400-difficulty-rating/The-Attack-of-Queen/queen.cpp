#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>Y;
        cout<<(N-1)*4-abs(X-Y)-abs(N+1-(X+Y))<<endl;
	}
	return 0;
}