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
        int count=0;
        cin>>N>>s;
        for(int i=0;i<N;i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}