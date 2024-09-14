#include <iostream>
#include <unordered_map>
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
	    string ans="YES";
        cin>>N>>S;
        unordered_map<char,int> m;
        for(int i=0;i<N;i++) 
        {
            m[S[i]]++;
        }
        for(char i='a';i<='z';i++) 
        {
            if(m[i]%2!=0) 
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}