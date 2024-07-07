#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,D;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>D;
	    cout<<((abs(X-Y)<=D)?"YES":"NO")<<endl;
	}
	return 0;
}