#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	char c;
	cin>>T;
	while(T--)
	{
	    string ans="YES";
	    unordered_map<char,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        m[c]++;
	    }
	    for(auto &i:m)
	    {
	        if(i.second%2!=0)
	        {
	            ans="NO";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}