#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	string s1,s2;
	cin>>T;
	while(T--)
	{
	    int mn=0,mx=0;
	    cin>>s1>>s2;
	    for(int i=0;i<s1.size();i++)
	    {
	        if(s1[i]=='?' || s2[i]=='?')
	        {
	            mx++;
	        }
	        else if(s1[i]!=s2[i])
	        {
	            mn++;
	            mx++;
	        }
	    }
	    cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}