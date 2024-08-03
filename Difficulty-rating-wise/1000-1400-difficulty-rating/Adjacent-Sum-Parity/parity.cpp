#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    int sum=0,num;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        sum+=num;
	    }
	    cout<<((sum%2==0)?"YES":"NO")<<endl;
	}
	return 0;
}