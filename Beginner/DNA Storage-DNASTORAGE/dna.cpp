
#include <iostream>
using namespace std;

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int T,N;
	string S;
	cin>>T;
	while(T--)
	{
	    ans="";
	    cin>>N>>S;
	    for(int i=0;i<N;i+=2)
	    {
	        if(S[i]=='0')
	        {
	            if(S[i+1]=='0')
	            {
	                cout<<"A";
	            }
	            else
	            {
	                cout<<"T";
	            }
	        }
	        else
	        {
	            if(S[i+1]=='0')
	            {
	                cout<<"C";
	            }
	            else
	            {
	                cout<<"G";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
