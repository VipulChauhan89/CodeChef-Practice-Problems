#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,S;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>S;
	    for(int i=1;i<=S;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        if(b==X)
	        {
	            X=a;
	        }
	        else if(a==X)
	        {
	            X=b;
	        }
	        
	    }
	    cout<<X<<endl;
	}
	return 0;
}