#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,D;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int sum=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>D;
	        sum+=((D>=1000)?1:0);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}