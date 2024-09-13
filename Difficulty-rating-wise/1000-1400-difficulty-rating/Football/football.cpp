#include <iostream>
#include <vector>
#include <algorithm>
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
	    vector<long> a(N),b(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>b[i];
	        b[i]=(a[i]*20)-(b[i]*10);
	        if(b[i]<0)
	        {
	            b[i]=0;
	        }
	    }
	    cout<<*max_element(b.begin(),b.end())<<endl;
	}
	return 0;
}