#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,C;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>C;
	    vector<int> A(N);
	    int q=0,w=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if((X-A[i])>C)
	        {
	            A[i]=X;
	            q+=C;
	        }
	        w+=A[i];
	    }
	    cout<<w-q<<endl;
	}
	return 0;
}