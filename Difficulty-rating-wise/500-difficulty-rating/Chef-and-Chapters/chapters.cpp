#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	long long X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<X*Y*Z<<endl;
	}
	return 0;
}