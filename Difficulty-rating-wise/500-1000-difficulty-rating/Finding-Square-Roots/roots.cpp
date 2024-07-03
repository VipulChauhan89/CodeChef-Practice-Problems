#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int i=1;
	    while(i*i<=N)
	    {
	        i++;
	    }
	    cout<<i-1<<endl;
	    
	}
	return 0;
}