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
	    cin>>s;
	    cout<<(s[0]-'0')+(s[s.length()-1]-'0')<<endl;
	}
	return 0;
}