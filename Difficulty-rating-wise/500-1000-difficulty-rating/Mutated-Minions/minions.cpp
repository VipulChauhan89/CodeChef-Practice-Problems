#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    int count=0,num;
	    cin>>N>>K;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        num+=K;
	        if(num%7==0)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}