#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    int ans=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        if(num!=0)
	        {
	            ans=i;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}