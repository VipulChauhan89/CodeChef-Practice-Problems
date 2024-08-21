#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	string s;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>s;
	    for(int i=1;i<s.length();i++)
	    {
	        count+=((s[i-1]=='<' && s[i]=='>')?1:0);
	    }
	    cout<<count<<endl;
	}
	return 0;
}