#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X;
	    cin>>N>>X;
	    X=pow(2,X);
	    for(int i=0;i<N;i++)
	    {
	        X-=X/2;
	    }
	    cout<<X<<endl;
	}
	return 0;
}
