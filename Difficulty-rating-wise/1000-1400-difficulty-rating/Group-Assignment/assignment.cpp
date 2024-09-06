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
	    string ans="YES";
	    unordered_map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
        {
            cin>>num;
            m[num]++;
        }
        for(auto &i:m)
        {
            if(i.first!=i.second && i.second%i.first!=0)
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}