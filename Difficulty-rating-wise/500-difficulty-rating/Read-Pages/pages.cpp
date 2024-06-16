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
	    cout<<((X*Y>=N)?"YES":"NO")<<endl;
	}
	return 0;
}