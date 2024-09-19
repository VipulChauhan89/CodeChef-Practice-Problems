#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	char c;
	cin>>T;
	while(T--)
	{
	    int count1=0,count2=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        count1+=c-'0';
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        count2+=c-'0';
	    }
	    cout<<((count1==count2)?"YES":"NO")<<endl;
	}
	return 0;
}