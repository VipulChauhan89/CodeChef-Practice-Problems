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
	    int count=0;
	    cin>>N;
	    vector<int> a(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=1;i<N;i++)
	    {
            if(a[i-1]>a[i])
            {
                swap(a[i-1],a[i]);
                break;
            }
        }
        for(int i=1;i<N;i++)
        {
            if(a[i-1]>a[i])
            {
                count++;
            }
        }
        cout<<((count==0)?"YES":"NO")<<endl;
	}
	return 0;
}