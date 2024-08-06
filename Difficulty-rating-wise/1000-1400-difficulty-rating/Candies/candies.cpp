#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    unordered_map<int,int> m;
	    cin>>N;
	    string ans="Yes";
	    for(int i=0;i<2*N;i++)
	    {
	        cin>>num;
	        m[num]++;
	        if(m[num]>2)
	        {
	            ans="No";
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}