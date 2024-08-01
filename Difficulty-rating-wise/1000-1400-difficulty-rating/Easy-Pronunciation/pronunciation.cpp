#include <iostream>
using namespace std;

bool isConsonant(char c)
{
    return !(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
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
	    for(int i=3;i<N;i++)
	    {
	        if(isConsonant(S[i-3]) && isConsonant(S[i-2]) && isConsonant(S[i-1]) && isConsonant(S[i]))
	        {
	            ans="NO";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}