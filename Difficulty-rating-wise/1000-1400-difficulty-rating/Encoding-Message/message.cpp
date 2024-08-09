#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string s;
	cin>>T;
	while(T--)
	{
	    cin>>N>>s;
	    for(int i=0;i<(N%2==0?N:N-1);i+=2)
	    {
	        swap(s[i],s[i+1]);
	    }
	    for(int i=0;i<N;i++)
	    {
	        s[i]='z'-s[i]+'a';
	    }
	    cout<<s<<endl;
	}
	return 0;
}