#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X;
	    cin>>N>>X;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    sort(A.begin(),A.end());
	    int count=0;
	    while(A[count]<X)
	    {
	        count++;
	    }
	    (N-count>0)?cout<<N-count<<endl:cout<<0<<endl;
	}
	return 0;
}
