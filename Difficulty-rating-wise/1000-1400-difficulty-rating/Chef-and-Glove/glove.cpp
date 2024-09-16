#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
        vector<int> L(N),G(N);
        int f=1,b=1;
        for(int i=0;i<N;++i)
        { 
            cin>>L[i];
        }
        for(int i=0;i<N;++i)
        { 
            cin>>G[i];
        }
        for(int i=0;i<N;++i)
        {
            if(L[i]>G[i])
            {
                f=0;
            }
            if(L[i]>G[N-1-i])
            {
                b=0;
            }
        }
        cout<<(b&&f?"both":b?"back":f?"front":"none")<<endl;
	}
	return 0;
}