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
	    cin>>N;
	    string s;
	    int sum1=0,sum2=0;
	    while(N--)
	    {
	        cin>>s;
	        if(s[0]=='S')
	        {
	            sum1+=1;
	        }
	        else
	        {
	            sum2+=1;
	        }
	    }
	    cout<<sum1<<" "<<sum2<<endl;
	}
	return 0;
}