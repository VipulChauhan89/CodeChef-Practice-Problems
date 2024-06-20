#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<int> P(4);
	int ans=0;
	cin>>P[0]>>P[1]>>P[2]>>P[3];
	for(int i=0;i<4;i++)
	{
	    if(P[i]>=10)
	    {
	        ans++;
	    }
	}
	cout<<ans<<endl;
	return 0;
}