#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,A;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A;
	        if(A>=10 && A<=60)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}